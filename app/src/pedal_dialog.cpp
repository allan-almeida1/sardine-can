#include "pedal_dialog.hpp"

namespace sardine_can
{
    PedalDialog::PedalDialog(QWidget *parent) : QDialog(parent)
    {
        ui_.setupUi(this);
        ui_.press_device_combo_->addItem("");
        ui_.release_device_combo_->addItem("");

        connect(ui_.cancel_button_, &QPushButton::clicked, this, &QDialog::close);
    }

    void PedalDialog::setTitle(const QString &title)
    {
        setWindowTitle(title);
    }

    void PedalDialog::setDeviceOptions(const QStringList &devices)
    {
        ui_.press_device_combo_->clear();
        ui_.press_device_combo_->addItem("");
        ui_.press_device_combo_->addItems(devices);
        ui_.release_device_combo_->clear();
        ui_.release_device_combo_->addItem("");
        ui_.release_device_combo_->addItems(devices);
    }

    void PedalDialog::setOnPressCommand(const Command &command)
    {
        ui_.press_name_input_->setText(QString::fromStdString(command.name));
        ui_.press_device_combo_->setCurrentText(QString::fromStdString(command.device));
        ui_.press_command_input_->setText(QString::fromStdString(command.command));
        ui_.press_value_input_->setText(QString::number(command.value));
    }

    void PedalDialog::setOnReleaseCommand(const Command &command)
    {
        ui_.release_name_input_->setText(QString::fromStdString(command.name));
        ui_.release_device_combo_->setCurrentText(QString::fromStdString(command.device));
        ui_.release_command_input_->setText(QString::fromStdString(command.command));
        ui_.release_value_input_->setText(QString::number(command.value));
    }
} // namespace sardine_can
