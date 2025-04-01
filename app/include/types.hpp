#pragma once

#include <string>
#include <unordered_map>

namespace sardine_can
{
    /**
     * @brief Defines a device to send OSC messages to. It contains the device name, IP address and port.
     *
     */
    struct Device
    {
        std::string device_name;
        std::string ip;
        uint16_t port;
    };

    /**
     * @brief Defines the network settings, containing the SSID, password and a map of devices.
     *
     */
    struct NetworkSettings
    {
        std::string ssid;
        std::string password;
        std::unordered_map<std::string, Device> devices;
    };

    /**
     * @brief Defines a pedal command, containing the name of the command, the device to send the
     * command to, the OSC command and the value to send.
     *
     */
    struct Command
    {
        std::string name;
        std::string device;
        std::string command;
        float value;
    };

    /**
     * @brief Defines a pedal, containing the command to send when the pedal is pressed and released.
     *
     */
    struct Pedal
    {
        Command press_command;
        Command release_command;
    };
}
