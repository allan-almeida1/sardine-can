#include "preferences_manager.hpp"
#include <SPIFFS.h>

PreferencesManager::PreferencesManager(const char *namespace_name) : namespace_name_(namespace_name)
{
    SPIFFS.begin(true);
    preferences_.begin(namespace_name_, false); // Initialize the Preferences library with the given namespace
}

void PreferencesManager::setString(const String &key, const String &value)
{
    preferences_.putString(key.c_str(), value); // Store the string value in the preferences
}

void PreferencesManager::setInt(const String &key, int value)
{
    preferences_.putInt(key.c_str(), value); // Store the integer value in the preferences
}

String PreferencesManager::getString(const String &key, const String &default_value)
{
    const String &value = preferences_.getString(key.c_str(), default_value).c_str(); // Retrieve the string value from the preferences
    return String(value);                                                             // Return the retrieved string value
}

int PreferencesManager::getInt(const String &key, int default_value)
{
    int value = preferences_.getInt(key.c_str(), default_value); // Retrieve the integer value from the preferences
    return value;                                                // Return the retrieved integer value
}
