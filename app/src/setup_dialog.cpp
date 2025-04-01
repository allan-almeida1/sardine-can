#include "setup_dialog.hpp"

#include <QHostAddress>

namespace sardine_can
{
    SetupDialog::SetupDialog(QWidget *parent)
        : QDialog(parent)
    {
        qRegisterMetaType<NetworkSettings>("NetworkSettings");

        ui_.setupUi(this);

        // Configurações da tabela
        ui_.table_widget_->setColumnCount(3);
        ui_.table_widget_->setHorizontalHeaderLabels({"Device", "IP", "Port"});
        ui_.table_widget_->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui_.table_widget_->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_.table_widget_->setSelectionMode(QAbstractItemView::SingleSelection);
        ui_.table_widget_->horizontalHeader()->setVisible(true);
        ui_.table_widget_->verticalHeader()->setVisible(false);

        // Configurações dos inputs
        setTabOrder(ui_.device_name_input_, ui_.device_ip_address_);
        setTabOrder(ui_.device_ip_address_, ui_.device_port_);
        setTabOrder(ui_.device_port_, ui_.add_button_);

        // Sinais e slots
        connect(ui_.device_name_input_, &QLineEdit::textChanged, this, &SetupDialog::onNameInputChanged);
        connect(ui_.device_ip_address_, &QLineEdit::textChanged, this, &SetupDialog::onIPInputChanged);
        connect(ui_.device_port_, &QLineEdit::textChanged, this, &SetupDialog::onPortInputChanged);
        connect(ui_.add_button_, &QPushButton::clicked, this, &SetupDialog::validateAndCreateDevice);
        connect(ui_.delete_button_, &QPushButton::clicked, this, &SetupDialog::deleteSelectedDevice);
        connect(ui_.table_widget_, &QTableWidget::itemSelectionChanged, this, &SetupDialog::enableDeleteButton);
        connect(ui_.save_button_, &QPushButton::clicked, this, &SetupDialog::handleSaveButtonClick);
        connect(ui_.cancel_button_, &QPushButton::clicked, this, &SetupDialog::close);
        connect(this, &QDialog::finished, this, &SetupDialog::clearInputs);

        ui_.add_button_->setEnabled(false);
        ui_.delete_button_->setEnabled(false);

        devices_ = std::unordered_map<std::string, Device>();

        hideErrorMessage();
    }

    void SetupDialog::setSSID(const QString &ssid)
    {
        ui_.ssid_input_->setText(ssid);
    }

    void SetupDialog::setPassword(const QString &password)
    {
        ui_.password_input_->setText(password);
    }

    void SetupDialog::fillDeviceTable(const std::unordered_map<std::string, Device> &devices)
    {
        ui_.table_widget_->setRowCount(devices.size());
        int row = 0;
        for (const auto &device : devices)
        {
            QTableWidgetItem *device_name = new QTableWidgetItem(QString::fromStdString(device.second.device_name));
            QTableWidgetItem *ip = new QTableWidgetItem(QString::fromStdString(device.second.ip));
            QTableWidgetItem *port = new QTableWidgetItem(QString::number(device.second.port));

            ui_.table_widget_->setItem(row, 0, device_name);
            ui_.table_widget_->setItem(row, 1, ip);
            ui_.table_widget_->setItem(row, 2, port);

            device_name->setFlags(device_name->flags() & ~Qt::ItemIsEditable);
            ip->setFlags(ip->flags() & ~Qt::ItemIsEditable);
            port->setFlags(port->flags() & ~Qt::ItemIsEditable);

            row++;
        }
        devices_ = devices;
    }

    void SetupDialog::onNameInputChanged(const QString &text)
    {
        name_filled_ = !text.isEmpty();
        ui_.add_button_->setEnabled(name_filled_ && ip_filled_ && port_filled_);
    }

    void SetupDialog::onIPInputChanged(const QString &text)
    {
        ip_filled_ = !text.isEmpty();
        ui_.add_button_->setEnabled(name_filled_ && ip_filled_ && port_filled_);
    }

    void SetupDialog::onPortInputChanged(const QString &text)
    {
        port_filled_ = !text.isEmpty();
        ui_.add_button_->setEnabled(name_filled_ && ip_filled_ && port_filled_);
    }

    void SetupDialog::showErrorMessage(const QString &message)
    {
        ui_.error_label_->setText(message);
        ui_.error_label_->show();
    }

    void SetupDialog::hideErrorMessage()
    {
        ui_.error_label_->hide();
    }

    void SetupDialog::validateAndCreateDevice()
    {
        QString device_name = ui_.device_name_input_->text();
        QString ip = ui_.device_ip_address_->text();
        uint16_t port = ui_.device_port_->text().toUShort();

        // Validar se o nome do dispositivo já existe
        if (devices_.find(device_name.toStdString()) != devices_.end())
        {
            showErrorMessage("Device already exists");
            return;
        }

        // Validar se o IP é válido
        if (QHostAddress(ip).protocol() != QAbstractSocket::IPv4Protocol)
        {
            showErrorMessage("Invalid IP address");
            return;
        }

        // Validar se a porta é válida
        if (port < 1024 || port > 65535)
        {
            showErrorMessage("Invalid port");
            return;
        }

        // Adicionar o dispositivo
        devices_.insert({device_name.toStdString(), {device_name.toStdString(), ip.toStdString(), port}});
        fillDeviceTable(devices_);
        hideErrorMessage();
        ui_.device_name_input_->clear();
        ui_.device_ip_address_->clear();
        ui_.device_port_->clear();
        ui_.device_port_->clearFocus();
    }

    void SetupDialog::deleteSelectedDevice()
    {
        auto selected_items = ui_.table_widget_->selectedItems();
        if (selected_items.size() == 0)
        {
            return;
        }

        auto device_name = selected_items[0]->text().toStdString();
        devices_.erase(device_name);
        fillDeviceTable(devices_);
    }

    void SetupDialog::enableDeleteButton()
    {
        ui_.delete_button_->setEnabled(ui_.table_widget_->selectedItems().size() > 0);
    }

    void SetupDialog::handleSaveButtonClick()
    {
        NetworkSettings settings;
        settings.ssid = ui_.ssid_input_->text().toStdString();
        settings.password = ui_.password_input_->text().toStdString();
        settings.devices = devices_;

        emit saveSettings(settings);
        devices_.clear();
        close();
    }

    void SetupDialog::clearInputs()
    {
        ui_.device_name_input_->clear();
        ui_.device_ip_address_->clear();
        ui_.device_port_->clear();
        devices_.clear();
    }
} // namespace sardine_can
