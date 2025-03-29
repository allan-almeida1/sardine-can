#ifndef BUTTON_INTERFACE_HPP
#define BUTTON_INTERFACE_HPP

#include <functional>

class AbstractButton
{
public:
    virtual ~AbstractButton() = default;
    virtual void setup() = 0;
    virtual void update() = 0;
    virtual void onPress(std::function<void()> callback) = 0;
    virtual void onRelease(std::function<void()> callback) = 0;
    virtual void onHold(std::function<void()> callback) = 0;
};

#endif // BUTTON_INTERFACE_HPP
