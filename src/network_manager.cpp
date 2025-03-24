#include "network_manager.hpp"

NetworkManager::NetworkManager() : server_(80)
{
}

void NetworkManager::setupServer()
{
    IPAddress ip(192, 168, 1, 1);
    IPAddress gateway(192, 168, 1, 1);
    IPAddress subnet(255, 255, 255, 0);

    Serial.println("Setting up server...");

    WiFi.softAP(SSID, PASSWORD);
    WiFi.softAPConfig(ip, gateway, subnet);

    Serial.println("Server started.");

    delay(500);
    server_.on("/", [this]()
               { this->handleHomePage(); });
    server_.on("/send", [this]()
               { this->handlePostData(); });
    server_.begin();

    Serial.println("HTTP server started.");
    Serial.print("IP address: ");
    Serial.println(WiFi.softAPIP());
    Serial.println("Server ready.");
}

void NetworkManager::handleClient()
{
    server_.handleClient();
}

void NetworkManager::handleHomePage()
{
    Serial.println("GET /");
    server_.send(200, "text/html", sendHTML());
}

void NetworkManager::handlePostData()
{
    Serial.println("POST /send");
    if (server_.hasArg("message"))
    {
        String message = server_.arg("message");
        Serial.println("Message: " + message);
        server_.send(200, "text/html", "Message sent: " + message);
    }
    else
    {
        server_.send(200, "text/html", "No message sent.");
    }
}

String NetworkManager::sendHTML(String message)
{
    String html = "<!DOCTYPE html><html><head><title>SardineCan</title>";
    html += "<script>";
    html += "function sendMessage(event) {";
    html += "  event.preventDefault();"; // Impede o envio normal do formulário
    html += "  let message = document.getElementById('message').value;";
    html += "  fetch('/send', {";
    html += "    method: 'POST',";
    html += "    headers: { 'Content-Type': 'application/x-www-form-urlencoded' },";
    html += "    body: 'message=' + encodeURIComponent(message)";
    html += "  })";
    html += "  .then(response => response.text())";
    html += "  .then(data => {";
    html += "    document.getElementById('response').innerHTML = data;";
    html += "  });";
    html += "}";
    html += "</script>";
    html += "</head><body>";
    html += "<h1>Welcome to SardineCan!</h1>";
    html += "<form onsubmit=\"sendMessage(event)\">";
    html += "<input type=\"text\" id=\"message\" placeholder=\"Mensagem\" name=\"message\"/>";
    html += "<input type=\"submit\" value=\"Send\"/>";
    html += "</form>";
    html += "<div id='response'></div>"; // Para exibir a resposta sem recarregar a página

    if (message != "")
    {
        html += "<p>";
        html += message;
        html += "</p>";
    }

    html += "</body></html>";
    return html;
}
