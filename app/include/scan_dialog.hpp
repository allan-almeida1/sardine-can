#pragma once

#include <QDialog>

#include <ui_scan_dialog.h>

namespace sardine_can
{
    class ScanDialog : public QDialog
    {
        Q_OBJECT
    public:
        explicit ScanDialog(QWidget *parent = nullptr);
        ~ScanDialog() = default;

        /**
         * @brief Set the text of the dialog
         *
         * @param text Text
         */
        void setText(const QString &text);

        /**
         * @brief Change the text of the dialog when a device is found and hide the progress bar
         *
         * @param device_ip
         */
        void setDeviceFound(QString device_ip);

        /**
         * @brief Set the scanning state
         *
         * @param scanning Scanning state
         */
        void setScanning(bool scanning);

    private:
        Ui::ScanDialog ui_;
    };
}
