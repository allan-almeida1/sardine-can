#include "main_window.hpp"

#include <QFontDatabase>
#include <QLabel>
#include <QDialog>
#include <QVBoxLayout>
#include <QPalette>
#include <QProgressBar>

namespace sardine_can
{
    MainWindow::MainWindow(QWidget *parent)
        : QWidget(parent),
          scan_dialog_(this),
          setup_dialog_(this),
          pedal_dialog_(this)
    {
        pedals_.resize(16);
        for (size_t i = 0; i < 16; i++)
        {
            pedals_[i].press_command.device = "";
            pedals_[i].press_command.command = "";
            pedals_[i].press_command.name = "";
            pedals_[i].press_command.value = 0.0f;
            pedals_[i].release_command.device = "";
            pedals_[i].release_command.command = "";
            pedals_[i].release_command.name = "";
            pedals_[i].release_command.value = 0.0f;
        }

        pedals_[11].press_command.name = "MARKER 1";
        pedals_[11].press_command.device = "Reaper";
        pedals_[11].press_command.command = "/marker/1";
        pedals_[11].press_command.value = 1;

        ui_.setupUi(this);

        QRadialGradient gradient(width() / 2, height() / 2, width() / 2);
        gradient.setColorAt(0, QColor(251, 252, 236));
        gradient.setColorAt(1, QColor(223, 223, 217));

        QPalette palette;
        palette.setBrush(QPalette::Window, QBrush(gradient));
        this->setAutoFillBackground(true);
        this->setPalette(palette);

        ui_.label->setPixmap(QPixmap(":/images/logo.png"));
        ui_.wifi_icon_->setPixmap(QPixmap(":/icons/wifi-disconnected.svg"));
        ui_.left_index_button_->setEnabled(false);

        connect(ui_.pedal_widget_, &PedalWidget::bankChanged, this, &MainWindow::handleBankChange);
        connect(this, &MainWindow::nextPedalBankClicked, ui_.pedal_widget_, &PedalWidget::nextPedalBank);
        connect(this, &MainWindow::previousPedalBankClicked, ui_.pedal_widget_, &PedalWidget::previousPedalBank);
        connect(ui_.right_index_button_, &QPushButton::clicked, this, &MainWindow::nextPedalBankClicked);
        connect(ui_.left_index_button_, &QPushButton::clicked, this, &MainWindow::previousPedalBankClicked);
        connect(ui_.scan_button_, &QPushButton::clicked, this, &MainWindow::showScanModal);
        connect(ui_.setup_button_, &QPushButton::clicked, this, &MainWindow::showSetupModal);
        connect(&setup_dialog_, &SetupDialog::saveSettings, this, &MainWindow::saveSettings);
        connect(ui_.pedal_widget_, &PedalWidget::pedalClicked, this, &MainWindow::handlePedalClicked);

        setupBankTitleFont();
    }

    void MainWindow::handleBankChange(bool enable_left_button, bool enable_right_button, int bank_index)
    {
        ui_.left_index_button_->setEnabled(enable_left_button);
        ui_.right_index_button_->setEnabled(enable_right_button);
        ui_.bank_label_->setText("BANK " + QString::number(bank_index / 4 + 1));
    }

    void MainWindow::setupBankTitleFont()
    {
        int font_id = QFontDatabase::addApplicationFont(":/fonts/LCD.ttf");
        if (font_id != -1)
        {
            QString font_family = QFontDatabase::applicationFontFamilies(font_id).at(0);
            QFont custom_font(font_family, 24);
            ui_.bank_label_->setFont(custom_font);
        }
        else
        {
            qWarning() << "Font not loaded";
        }
    }

    void MainWindow::showScanModal()
    {
        ui_.scan_button_->setEnabled(false);
        connect(&scan_dialog_, &QDialog::finished, this, &MainWindow::cancelScan);
        scan_dialog_.setText("Scanning for device...");
        scan_dialog_.setScanning(true);
        scan_dialog_.exec();
    }

    void MainWindow::showSetupModal()
    {
        setup_dialog_.setSSID(QString::fromStdString(network_settings_.ssid));
        setup_dialog_.setPassword(QString::fromStdString(network_settings_.password));
        setup_dialog_.fillDeviceTable(network_settings_.devices);
        setup_dialog_.exec();
    }

    void MainWindow::cancelScan()
    {
        ui_.scan_button_->setEnabled(true);
    }

    void MainWindow::saveSettings(const NetworkSettings &settings)
    {
        network_settings_ = settings;
        qDebug() << "Recebeu as configurações";
        qDebug() << "SSID: " << QString::fromStdString(network_settings_.ssid);
        qDebug() << "Password: " << QString::fromStdString(network_settings_.password);
        for (const auto &device : network_settings_.devices)
        {
            qDebug() << "Device: " << QString::fromStdString(device.first);
            qDebug() << "IP: " << QString::fromStdString(device.second.ip);
            qDebug() << "Port: " << device.second.port;
        }
    }

    void MainWindow::handlePedalClicked(int pedal_index)
    {
        qDebug() << "Pedal " << pedal_index << " clicked";
        pedal_dialog_.setTitle(QString("Pedal ") + QString::number(pedal_index));
        QStringList devices;
        for (auto &device : network_settings_.devices)
        {
            devices.append(QString::fromStdString(device.second.device_name));
        }
        pedal_dialog_.setDeviceOptions(devices);
        pedal_dialog_.setOnPressCommand(pedals_[pedal_index - 1].press_command);
        pedal_dialog_.setOnReleaseCommand(pedals_[pedal_index - 1].release_command);
        pedal_dialog_.exec();
    }

} // namespace sardine_can
