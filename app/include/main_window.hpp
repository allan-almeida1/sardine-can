#pragma once

#include <vector>

#include <QWidget>

#include <ui_main_window.h>

#include "pedal_dialog.hpp"
#include "pedal_widget.hpp"
#include "scan_dialog.hpp"
#include "setup_dialog.hpp"
#include "types.hpp"

namespace sardine_can
{
    class MainWindow : public QWidget
    {
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow() = default;

    signals:
        /**
         * @brief Signal emitted when the next pedal bank button is clicked
         *
         */
        void nextPedalBankClicked();

        /**
         * @brief Signal emitted when the previous pedal bank button is clicked
         *
         */
        void previousPedalBankClicked();

    private slots:
        /**
         * @brief Handle bank change
         *
         * @param enable_left_button Enable the left button
         * @param enable_right_button Enable the right button
         * @param bank_index Index of the bank
         */
        void handleBankChange(bool enable_left_button, bool enable_right_button, int bank_index);

        /**
         * @brief Show the scan modal
         *
         */
        void showScanModal();

        /**
         * @brief Cancel the scan
         *
         */
        void cancelScan();

        /**
         * @brief Show the setup modal
         *
         */
        void showSetupModal();

        /**
         * @brief Save the settings to the device
         *
         * @param settings Network settings
         */
        void saveSettings(const NetworkSettings &settings);

        /**
         * @brief Handle the pedal clicked event
         *
         * @param pedal_index Pedal index (1 - 16)
         */
        void handlePedalClicked(int pedal_index);

    private:
        /**
         * @brief Setup the bank title font
         *
         */
        void setupBankTitleFont();

        Ui::MainWindow ui_;

        ScanDialog scan_dialog_;
        SetupDialog setup_dialog_;
        PedalDialog pedal_dialog_;
        NetworkSettings network_settings_;
        std::vector<Pedal> pedals_;
    };

} // namespace sardine_can
