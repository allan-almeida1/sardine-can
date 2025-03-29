#ifndef SWITCH_HPP
#define SWITCH_HPP

#include <functional>

#include <Arduino.h>

#include "button_interface.hpp"

class Switch : public AbstractButton
{
public:
    Switch(int button_pin, int led_pin, bool normally_open = true);
    ~Switch() = default;

    /**
     * @brief Setup the switch, defining the button and LED pin modes.
     *
     */
    void setup() override;

    /**
     * @brief Update the switch state and toggle the LED if necessary.
     *
     */
    void update() override;

    /**
     * @brief Method called when the button is pressed.
     *
     * @param callback Function to call when the button is pressed.
     */
    void onPress(std::function<void()> callback) override;

    /**
     * @brief Method called when the button is released.
     *
     * @param callback Function to call when the button is released.
     */
    void onRelease(std::function<void()> callback) override;

    /**
     * @brief Method called when the button is held.
     *
     * @param callback Function to call when the button is held.
     */
    void onHold(std::function<void()> callback) override;

    /**
     * @brief Turn on the LED.
     *
     */
    void turnOnLED();

    /**
     * @brief Turn off the LED.
     *
     */
    void turnOffLED();

private:
    int button_pin_;              // Pin number for the button
    int led_pin_;                 // Pin number for the LED
    uint32_t hold_time_{2000};    // Time in milliseconds the button is held to trigger the hold event
    bool last_state_;             // Last state of the button
    bool hold_triggered_;         // Flag to indicate if hold was triggered
    bool normally_open_;          // Flag to indicate if the button is normally open or closed
    uint32_t press_start_time_;   // Time when the button was pressed
    uint32_t last_debounce_time_; // Last time the button state was toggled
    uint32_t debounce_delay_{50}; // Debounce delay in milliseconds

    std::function<void()> onPressCallback_;   // Callback function for button press
    std::function<void()> onReleaseCallback_; // Callback function for button release
    std::function<void()> onHoldCallback_;    // Callback function for button hold
};
#endif // SWITCH_HPP
