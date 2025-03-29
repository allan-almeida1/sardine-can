#ifndef NETWORK_MANAGER_HPP
#define NETWORK_MANAGER_HPP

#include <Arduino.h>
#include <AsyncWebSocket.h>
#include <ESPAsyncWebServer.h>
#include <WiFi.h>

#include "button.hpp"
#include "preferences_manager_interface.hpp"

/**
 * @enum NetworkMode
 * @brief Enum class for network mode, either client or server
 *
 */
enum class NetworkMode
{
    CLIENT,
    SERVER
};

/**
 * @class NetworkManager
 * @brief Class for managing network connections.
 *
 * This class is responsible for managing network connections, either as a client or server.
 * The server mode is responsible for listening to incoming connections and managing them and should
 * be used for setting up the device. The client mode is responsible for connecting to a server and
 * sending and receiving data.
 *
 */
class NetworkManager
{
public:
    NetworkManager(int mode_button_pin, int led_pin, PreferencesManagerInterface *preferences_manager);
    ~NetworkManager() = default;

    /**
     * @brief Setup the network manager.
     *
     * This function initializes the button and LED pins and sets the initial mode to CLIENT.
     *
     */
    void setup();

    /**
     * @brief Setup the network manager as a server
     *
     */
    void setupServer();

    /**
     * @brief Network manager routine to be called in the loop function.
     *
     * This function checks the current mode and calls the appropriate functions to handle the
     * network connections, as well as the led and button states.
     *
     */
    void update();

private:
    /**
     * @brief Toggle the network mode between client and server.
     *
     */
    void toggleMode();

    /**
     * @brief Handle web socket events
     *
     * @param server Server
     * @param client Client
     * @param type Type
     * @param arg Arg
     * @param data Data
     * @param len Length
     */
    void handleWebSocketEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type,
                              void *arg, uint8_t *data, size_t len);

    void onWebSocketMessage(void *arg, uint8_t *data, size_t len);

    int led_pin_;
    Button mode_button_;
    NetworkMode mode_;
    WiFiClient client_;
    PreferencesManagerInterface *preferences_manager_;
    AsyncWebServer server_;
    AsyncWebSocket ws_;

    bool connected_ = false;
    uint32_t blink_delay_;
    uint32_t last_blink_time_ = 0;
    String SSID{"SardineCan"};
    String PASSWORD{"limaozabumbeiro"};
    String CLIENT_SSID{"X18_ALLAN"};
    String CLIENT_PASSWORD{"naovaiacertar"};
    constexpr static int kServerModeBlinkDelay{200}; // Delay for blinking the LED in server mode
    constexpr static int kClientModeBlinkDelay{600}; // Delay for blinking the LED in client mode
};

#endif
