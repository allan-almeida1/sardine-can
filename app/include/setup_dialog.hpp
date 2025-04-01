#pragma once

#include <string>
#include <unordered_map>

#include <QDialog>

#include <ui_setup_dialog.h>

#include "types.hpp"

Q_DECLARE_METATYPE(sardine_can::NetworkSettings)

namespace sardine_can
{
    class SetupDialog : public QDialog
    {
        Q_OBJECT
    public:
        explicit SetupDialog(QWidget *parent = nullptr);
        ~SetupDialog() = default;

        /**
         * @brief Set the SSID of the network
         *
         * @param ssid SSID (network name)
         */
        void setSSID(const QString &ssid);

        /**
         * @brief Set the password of the network
         *
         * @param password Password
         */
        void setPassword(const QString &password);

        /**
         * @brief Fill the device table with the devices received from the Sardine Can
         *
         * @param devices Unordered map with the devices
         */
        void fillDeviceTable(const std::unordered_map<std::string, Device> &devices);

    signals:
        /**
         * @brief Signal emitted when the user saves the settings
         *
         * @param settings Network settings
         */
        void saveSettings(const NetworkSettings &settings);

    private slots:
        void onNameInputChanged(const QString &text);
        void onIPInputChanged(const QString &text);
        void onPortInputChanged(const QString &text);
        void validateAndCreateDevice();
        void deleteSelectedDevice();
        void enableDeleteButton();
        void handleSaveButtonClick();
        void clearInputs();

    private:
        Ui::SetupDialog ui_;
        std::unordered_map<std::string, Device> devices_;
        bool name_filled_ = false;
        bool ip_filled_ = false;
        bool port_filled_ = false;

        /**
         * @brief Fiil the error label with the message
         *
         * @param message Error message
         */
        void showErrorMessage(const QString &message);

        /**
         * @brief Hide the error message
         *
         */
        void hideErrorMessage();
    };

} // namespace sardine_can
