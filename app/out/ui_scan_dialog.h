/********************************************************************************
** Form generated from reading UI file 'scan_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAN_DIALOG_H
#define UI_SCAN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ScanDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *scan_button_;

    void setupUi(QDialog *ScanDialog)
    {
        if (ScanDialog->objectName().isEmpty())
            ScanDialog->setObjectName(QString::fromUtf8("ScanDialog"));
        ScanDialog->resize(400, 200);
        ScanDialog->setMinimumSize(QSize(400, 0));
        ScanDialog->setMaximumSize(QSize(400, 200));
        gridLayout = new QGridLayout(ScanDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ScanDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 100));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        progressBar = new QProgressBar(ScanDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 2, 0, 1, 1);

        groupBox = new QGroupBox(ScanDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAutoFillBackground(true);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        scan_button_ = new QPushButton(groupBox);
        scan_button_->setObjectName(QString::fromUtf8("scan_button_"));
        scan_button_->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        scan_button_->setFont(font);
        scan_button_->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: #898989;\n"
"	color: #fff;\n"
"	border-radius: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #454545;\n"
"}"));

        horizontalLayout->addWidget(scan_button_);


        gridLayout->addWidget(groupBox, 3, 0, 1, 1);


        retranslateUi(ScanDialog);

        QMetaObject::connectSlotsByName(ScanDialog);
    } // setupUi

    void retranslateUi(QDialog *ScanDialog)
    {
        ScanDialog->setWindowTitle(QApplication::translate("ScanDialog", "Scan", nullptr));
        label->setText(QApplication::translate("ScanDialog", "Scan label", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("ScanDialog", "192.168.1.1", nullptr));
        scan_button_->setText(QApplication::translate("ScanDialog", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScanDialog: public Ui_ScanDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAN_DIALOG_H
