#include "button.hpp"

Button::Button(int pin, bool normally_open) : pin_(pin), last_state_(false), hold_triggered_(false),
                                              normally_open_(normally_open), press_start_time_(0),
                                              last_debounce_time_(0)
{
    // Initialize callback functions to nullptr
    onPressCallback_ = nullptr;
    onReleaseCallback_ = nullptr;
    onHoldCallback_ = nullptr;

    setup();
}

void Button::setup()
{
    pinMode(pin_, INPUT_PULLUP);
}

void Button::update()
{
    bool current_state = digitalRead(pin_) == LOW; // Read the button state
    if (!normally_open_)                           // If the button is normally closed, invert the state
    {
        current_state = !current_state;
    }

    uint32_t now = millis();

    if ((now - last_debounce_time_) > debounce_delay_)
    {
        last_debounce_time_ = now;         // Update the last debounce time
        if (current_state && !last_state_) // Button changed from NOT PRESSED → PRESSED
        {
            press_start_time_ = now;
            hold_triggered_ = false; // Reset hold trigger flag
            if (onPressCallback_)
            {
                onPressCallback_();
            }
        }

        if (!current_state && last_state_) // Button changed from PRESSED → NOT PRESSED
        {
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

        last_state_ = current_state;
    }
}

void Button::onPress(std::function<void()> callback)
{
    onPressCallback_ = callback;
}

void Button::onRelease(std::function<void()> callback)
{
    onReleaseCallback_ = callback;
}

void Button::onHold(std::function<void()> callback)
{
    onHoldCallback_ = callback;
}
