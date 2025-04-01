#include "scan_dialog.hpp"

namespace sardine_can
{
    ScanDialog::ScanDialog(QWidget *parent)
        : QDialog(parent)
    {
        ui_.setupUi(this);

        setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint);
        setWindowTitle("Scan");

        ui_.progressBar->setRange(0, 0);
        ui_.progressBar->setMinimum(0);
        ui_.progressBar->setMaximum(0);
    }

    void ScanDialog::setText(const QString &text)
    {
        ui_.label->setText(text);
    }

    void ScanDialog::setDeviceFound(QString device_ip)
    {
        ui_.label->hide();
        ui_.progressBar->hide();
        ui_.groupBox->show();
    }

    void ScanDialog::setScanning(bool scanning)
    {
        if (scanning)
        {
            ui_.progressBar->show();
            ui_.groupBox->hide();
            ui_.label->show();
        }
        else
        {
            ui_.progressBar->hide();
            ui_.groupBox->show();
            ui_.label->hide();
        }
    }
} // namespace sardine_can
