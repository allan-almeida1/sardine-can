#pragma once

#include <QDialog>
#include <QString>
#include <QStringList>

#include <ui_pedal_dialog.h>

#include "types.hpp"

namespace sardine_can
{
    class PedalDialog : public QDialog
    {
        Q_OBJECT
    public:
        explicit PedalDialog(QWidget *parent = nullptr);
        ~PedalDialog() = default;

        /**
         * @brief Set the dialog title
         *
         * @param title Title
         */
        void setTitle(const QString &title);

        /**
         * @brief Set the device options for the combo boxes
         *
         * @param devices Device names string list
         */
        void setDeviceOptions(const QStringList &devices);

        /**
         * @brief Fill the fields with the OSC command on press
         *
         * @param command OSC Command
         */
        void setOnPressCommand(const Command &command);

        /**
         * @brief Fill the fields with the OSC command on release
         *
         * @param command OSC Command
         */
        void setOnReleaseCommand(const Command &command);

    private:
        Ui::PedalDialog ui_;
    };
} // namespace sardine_can
