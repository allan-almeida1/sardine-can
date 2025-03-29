#ifndef PARAMETER_MANAGER_HPP
#define PARAMETER_MANAGER_HPP

#include <Preferences.h>

#include "preferences_manager_interface.hpp"

class PreferencesManager : public PreferencesManagerInterface
{
public:
    PreferencesManager(const char *namespace_name);
    ~PreferencesManager() = default;

    /**
     * @brief Set a string value in the preferences.
     *
     * @param key The key under which to store the value.
     * @param value The string value to store.
     */
    void setString(const String &key, const String &value) override;

    /**
     * @brief Get a string value from the preferences.
     *
     * @param key The key under which the value is stored.
     * @param default_value The default value to return if the key is not found.
     * @return The string value associated with the key.
     */
    String getString(const String &key, const String &default_value) override;

    /**
     * @brief Set an integer value in the preferences.
     *
     * @param key The key under which to store the value.
     * @param value The integer value to store.
     */
    void setInt(const String &key, int value) override;

    /**
     * @brief Get an integer value from the preferences.
     *
     * @param key The key under which the value is stored.
     * @param default_value The default value to return if the key is not found.
     * @return The integer value associated with the key.
     */
    int getInt(const String &key, int default_value) override;

private:
    Preferences preferences_;
    const char *namespace_name_;
};

#endif // PARAMETER_MANAGER_HPP
