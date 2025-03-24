#ifndef NETWORK_MANAGER_HPP
#define NETWORK_MANAGER_HPP

#include <WiFi.h>
#include <WebServer.h>

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
    NetworkManager();
    ~NetworkManager() = default;

    /**
     * @brief Setup the network manager as a server
     *
     */
    void setupServer();

    /**
     * @brief Handle incoming client requests
     *
     */
    void handleClient();

private:
    /**
     * @brief Home page handler
     *
     */
    void handleHomePage();

    /**
     * @brief Handle the data sent by the client
     *
     */
    void handlePostData();

    /**
     * @brief Send HTML response
     *
     * @param message Message to be displayed on the page
     * @return String HTML response
     */
    String sendHTML(String message = "");

    NetworkMode mode_;
    WiFiClient client_;
    WebServer server_;
    const char *SSID = "SardineCan";
    const char *PASSWORD = "limaozabumbeiro";
    bool connected = false;
};

#endif
