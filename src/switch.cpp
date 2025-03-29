#include "switch.hpp"

Switch::Switch(int button_pin, int led_pin, bool normally_open) : button_pin_(button_pin),
                                                                  led_pin_(led_pin),
                                                                  last_state_(false),
                                                                  hold_triggered_(false),
                                                                  normally_open_(normally_open),
                                                                  press_start_time_(0),
                                                                  last_debounce_time_(0)
{
    // Initialize callback functions to nullptr
    onPressCallback_ = nullptr;
    onReleaseCallback_ = nullptr;
    onHoldCallback_ = nullptr;
}

void Switch::setup()
{
    pinMode(button_pin_, INPUT_PULLUP); // Set button pin as input with pull-up resistor
    pinMode(led_pin_, OUTPUT);          // Set LED pin as output
    digitalWrite(led_pin_, LOW);        // Turn off the LED initially
}

void Switch::update()
{
    bool current_state = digitalRead(button_pin_) == LOW; // Read the button state
    if (!normally_open_)                                  // If the button is normally closed, invert the state
    {
        current_state = !current_state;
    }

    uint32_t now = millis(); // Get the current time

    if ((now - last_debounce_time_) > debounce_delay_)
    {
        last_debounce_time_ = now;         // Update the last debounce time
        if (current_state && !last_state_) // Button changed from NOT PRESSED → PRESSED
        {
            press_start_time_ = now;
            hold_triggered_ = false; // Reset hold trigger flag
            turnOnLED();             // Turn on the LED when button is pressed
            if (onPressCallback_)
            {
                onPressCallback_();
            }
        }

        if (!current_state && last_state_) // Button changed from PRESSED → NOT PRESSED
        {
            turnOffLED(); // Turn off the LED when button is released
            if (onReleaseCallback_)
            {
                onReleaseCallback_();
            }
        }

        if (current_state && (now - press_start_time_ >= hold_time_) && !hold_triggered_) // Button is held down
        {
            hold_triggered_ = true; // Set hold trigger flag to true
            if (onHoldCallback_)
            {
                onHoldCallback_();
            }
        }

        last_state_ = current_state; // Update the last state of the button
    }
}

void Switch::onPress(std::function<void()> callback)
{
    onPressCallback_ = callback; // Set the callback function for button press
}

void Switch::onRelease(std::function<void()> callback)
{
    onReleaseCallback_ = callback; // Set the callback function for button release
}

void Switch::onHold(std::function<void()> callback)
{
    onHoldCallback_ = callback; // Set the callback function for button hold
}

void Switch::turnOnLED()
{
    digitalWrite(led_pin_, HIGH); // Turn on the LED
    Serial.println("LED ON");     // Debug message
}

void Switch::turnOffLED()
{
    digitalWrite(led_pin_, LOW); // Turn off the LED
    Serial.println("LED OFF");   // Debug message
}
