#ifndef PREFERENCES_MANAGER_INTERFACE_HPP
#define PREFERENCES_MANAGER_INTERFACE_HPP

#include <WString.h>

class PreferencesManagerInterface
{
public:
    virtual ~PreferencesManagerInterface() = default;

    virtual void setString(const String &key, const String &value) = 0;
    virtual String getString(const String &key, const String &default_value) = 0;
    virtual void setInt(const String &key, int value) = 0;
    virtual int getInt(const String &key, int default_value) = 0;
};

#endif // PREFERENCES_MANAGER_INTERFACE_HPP
