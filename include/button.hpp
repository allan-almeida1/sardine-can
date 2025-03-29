#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <functional>

#include <Arduino.h>

#include "button_interface.hpp"

class Button : public AbstractButton
{
public:
    Button(int pin, bool normally_open = true);
    ~Button() = default;

    /**
     * @brief Setup the button
     *
     * This function initializes the button pin as an input with pull-up resistor.
     */
    void setup() override;

    /**
     * @brief Update the button state
     *
     * This function should be called in the loop function to update the button state.
     */
    void update() override;

    /**
     * @brief Method called when the button is pressed
     *
     * @param callback Function to call when the button is pressed
     */
    void onPress(std::function<void()> callback) override;

    /**
     * @brief Method called when the button is released
     *
     * @param callback Function to call when the button is released
     */

    void onRelease(std::function<void()> callback) override;
    /**
     * @brief Method called when the button is held
     *
     * @param callback Function to call when the button is held
     */
    void onHold(std::function<void()> callback) override;

private:
    int pin_;                     // Pin number for the button
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

#endif // BUTTON_HPP
