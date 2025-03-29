#include "network_manager.hpp"

#include <functional>

NetworkManager::NetworkManager(int mode_button_pin,
                               int led_pin,
                               PreferencesManagerInterface *preferences_manager) : led_pin_(led_pin),
                                                                                   mode_button_(mode_button_pin, false),
                                                                                   preferences_manager_(preferences_manager),
                                                                                   server_(81),
                                                                                   ws_("/ws")
{
    SSID = preferences_manager_->getString("SSID", SSID);                                  // Retrieve the SSID from preferences
    PASSWORD = preferences_manager_->getString("PASSWORD", PASSWORD);                      // Retrieve the password from preferences
    CLIENT_SSID = preferences_manager_->getString("CLIENT_SSID", CLIENT_SSID);             // Retrieve the client SSID from preferences
    CLIENT_PASSWORD = preferences_manager_->getString("CLIENT_PASSWORD", CLIENT_PASSWORD); // Retrieve the client password from preferences
    setup();
}

void NetworkManager::setup()
{
    mode_ = NetworkMode::SERVER;
    connected_ = false;            // Set the initial connection state to false
    pinMode(led_pin_, OUTPUT);     // Set the LED pin as output
    digitalWrite(led_pin_, HIGH);  // Turn on the LED initially
    mode_button_.setup();          // Setup the mode button
    mode_button_.onHold([this]() { // Set up the hold callback for the mode button
        this->toggleMode();        // Toggle the mode when the button is held
    });
}

void NetworkManager::setupServer()
{
    IPAddress ip(192, 168, 1, 1);
    IPAddress gateway(192, 168, 1, 1);
    IPAddress subnet(255, 255, 255, 0);

    WiFi.softAP(SSID, PASSWORD);
    WiFi.softAPConfig(ip, gateway, subnet);

    if (mode_ == NetworkMode::SERVER)
    {
        blink_delay_ = kServerModeBlinkDelay;
    }
    else
    {
        blink_delay_ = kClientModeBlinkDelay;
    }

    ws_.onEvent([this](AsyncWebSocket *server, AsyncWebSocketClient *client,
                       AwsEventType type, void *arg, uint8_t *data, size_t len)
                { this->handleWebSocketEvent(server, client, type, arg, data, len); });

    server_.addHandler(&ws_); // Add the WebSocket handler to the server
    server_.begin();
    Serial.println("WebSocket server started!"); // Print a message indicating the server has started
}

void NetworkManager::update()
{
    mode_button_.update(); // Update the button state

    if (connected_)
    {
        digitalWrite(led_pin_, HIGH);
    }
    else
    {
        uint32_t now = millis();
        if ((now - last_blink_time_) > blink_delay_)
        {
            last_blink_time_ = now;                         // Update the last blink time
            digitalWrite(led_pin_, !digitalRead(led_pin_)); // Toggle the LED state
        }
    }

    if (mode_ == NetworkMode::SERVER)
    {
        blink_delay_ = kServerModeBlinkDelay;
    }
    else
    {
        blink_delay_ = kClientModeBlinkDelay;
        if (!connected_)
        {
            WiFi.begin(CLIENT_SSID, CLIENT_PASSWORD);   // Connect to the client network
            connected_ = WiFi.status() == WL_CONNECTED; // Check if connected
        }
        else
        {
            connected_ = WiFi.status() == WL_CONNECTED; // Check if connected
        }
    }
}

void NetworkManager::toggleMode()
{
    if (mode_ == NetworkMode::CLIENT)
    {
        mode_ = NetworkMode::SERVER;
        return;
    }

    mode_ = NetworkMode::CLIENT;
}

void NetworkManager::handleWebSocketEvent(AsyncWebSocket *server, AsyncWebSocketClient *client,
                                          AwsEventType type, void *arg, uint8_t *data, size_t len)
{
    switch (type)
    {
    case WS_EVT_CONNECT:
        Serial.printf("Client %u connected\n", client->id());
        break;
    case WS_EVT_DISCONNECT:
        Serial.printf("Client %u disconnected\n", client->id());
        break;
    case WS_EVT_DATA:
        Serial.printf("Client %u sent data: %.*s\n", client->id(), len, data);
        onWebSocketMessage(arg, data, len); // Call the message handler
        break;
    }
}

void NetworkManager::onWebSocketMessage(void *arg, uint8_t *data, size_t len)
{
    if (len > 0)
    {
        AwsFrameInfo *info = (AwsFrameInfo *)arg; // Cast the argument to AwsFrameInfo
        if (info->final && info->index == 0 && info->len == len && info->opcode == WS_TEXT)
        {
            String message((char *)data, len);                        // Create a string from the received data
            Serial.printf("Received message: %s\n", message.c_str()); // Print the received message

            if (message == "toggle")
            {
                toggleMode();  // Toggle the mode if the message is "toggle"
                setupServer(); // Setup the server again
            }
            else if (message == "get_preferences")
            {
                String ssid = preferences_manager_->getString("SSID", SSID);                                  // Retrieve the SSID from preferences
                String password = preferences_manager_->getString("PASSWORD", PASSWORD);                      // Retrieve the password from preferences
                String client_ssid = preferences_manager_->getString("CLIENT_SSID", CLIENT_SSID);             // Retrieve the client SSID from preferences
                String client_password = preferences_manager_->getString("CLIENT_PASSWORD", CLIENT_PASSWORD); // Retrieve the client password from preferences

                String response = "SSID: " + ssid + "\n" +
                                  "PASSWORD: " + password + "\n" +
                                  "CLIENT_SSID: " + client_ssid + "\n" +
                                  "CLIENT_PASSWORD: " + client_password;
                ws_.textAll(response); // Send the preferences back to the client
            }
            ws_.textAll("Message received"); // Send a confirmation message back to the client
        }
    }
}
