/********************************************************************************
** Form generated from reading UI file 'setup_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_DIALOG_H
#define UI_SETUP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *ssid_input_;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *password_input_;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QToolButton *add_button_;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLineEdit *device_ip_address_;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *device_name_input_;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *device_port_;
    QLabel *error_label_;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QToolButton *delete_button_;
    QTableWidget *table_widget_;
    QWidget *action_buttons_widget_;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *save_button_;
    QPushButton *cancel_button_;

    void setupUi(QDialog *SetupDialog)
    {
        if (SetupDialog->objectName().isEmpty())
            SetupDialog->setObjectName(QString::fromUtf8("SetupDialog"));
        SetupDialog->resize(1000, 688);
        SetupDialog->setMinimumSize(QSize(1000, 688));
        SetupDialog->setMaximumSize(QSize(1000, 688));
        verticalLayout = new QVBoxLayout(SetupDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(SetupDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(400, 16777215));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 70));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 40));

        verticalLayout_3->addWidget(label_2);

        ssid_input_ = new QLineEdit(widget_3);
        ssid_input_->setObjectName(QString::fromUtf8("ssid_input_"));
        ssid_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_3->addWidget(ssid_input_);


        verticalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 70));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 40));

        verticalLayout_4->addWidget(label_3);

        password_input_ = new QLineEdit(widget_4);
        password_input_->setObjectName(QString::fromUtf8("password_input_"));
        password_input_->setMinimumSize(QSize(0, 32));
        password_input_->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(password_input_);


        verticalLayout_5->addWidget(widget_4);


        verticalLayout_2->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(350, 16777215));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMaximumSize(QSize(350, 16777215));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(-1, -1, 16, -1);
        add_button_ = new QToolButton(widget_5);
        add_button_->setObjectName(QString::fromUtf8("add_button_"));
        add_button_->setMinimumSize(QSize(80, 0));

        gridLayout_3->addWidget(add_button_, 3, 0, 1, 1);

        widget_8 = new QWidget(widget_5);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setMaximumSize(QSize(220, 70));
        verticalLayout_7 = new QVBoxLayout(widget_8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        label_5 = new QLabel(widget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 40));

        verticalLayout_7->addWidget(label_5);

        device_ip_address_ = new QLineEdit(widget_8);
        device_ip_address_->setObjectName(QString::fromUtf8("device_ip_address_"));
        device_ip_address_->setMinimumSize(QSize(0, 32));

        verticalLayout_7->addWidget(device_ip_address_);


        gridLayout_3->addWidget(widget_8, 1, 0, 1, 2);

        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy2);
        widget_7->setMaximumSize(QSize(220, 70));
        verticalLayout_6 = new QVBoxLayout(widget_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, -1);
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 40));

        verticalLayout_6->addWidget(label_4);

        device_name_input_ = new QLineEdit(widget_7);
        device_name_input_->setObjectName(QString::fromUtf8("device_name_input_"));
        device_name_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_6->addWidget(device_name_input_);


        gridLayout_3->addWidget(widget_7, 0, 0, 1, 2);

        widget_9 = new QWidget(widget_5);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMaximumSize(QSize(220, 70));
        verticalLayout_8 = new QVBoxLayout(widget_9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, -1, 0, -1);
        label_6 = new QLabel(widget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 40));

        verticalLayout_8->addWidget(label_6);

        device_port_ = new QLineEdit(widget_9);
        device_port_->setObjectName(QString::fromUtf8("device_port_"));
        device_port_->setMinimumSize(QSize(0, 32));

        verticalLayout_8->addWidget(device_port_);


        gridLayout_3->addWidget(widget_9, 2, 0, 1, 2);


        verticalLayout_9->addWidget(widget_5);

        error_label_ = new QLabel(groupBox);
        error_label_->setObjectName(QString::fromUtf8("error_label_"));
        error_label_->setMinimumSize(QSize(0, 40));
        error_label_->setStyleSheet(QString::fromUtf8("color: red;"));
        error_label_->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(error_label_);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        widget_6 = new QWidget(tab_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        gridLayout_2->addWidget(widget_6, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        delete_button_ = new QToolButton(groupBox_2);
        delete_button_->setObjectName(QString::fromUtf8("delete_button_"));
        delete_button_->setMinimumSize(QSize(80, 0));

        gridLayout_4->addWidget(delete_button_, 1, 1, 1, 1);

        table_widget_ = new QTableWidget(groupBox_2);
        if (table_widget_->columnCount() < 3)
            table_widget_->setColumnCount(3);
        table_widget_->setObjectName(QString::fromUtf8("table_widget_"));
        table_widget_->setColumnCount(3);
        table_widget_->horizontalHeader()->setVisible(false);

        gridLayout_4->addWidget(table_widget_, 0, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        action_buttons_widget_ = new QWidget(SetupDialog);
        action_buttons_widget_->setObjectName(QString::fromUtf8("action_buttons_widget_"));
        action_buttons_widget_->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(action_buttons_widget_);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 0, 9, 12);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        save_button_ = new QPushButton(action_buttons_widget_);
        save_button_->setObjectName(QString::fromUtf8("save_button_"));
        save_button_->setMinimumSize(QSize(120, 0));
        save_button_->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"    background-color: #28a745;  /* Cor de fundo verde */\n"
"    color: white;  /* Cor do texto */\n"
"    border: none;\n"
"    border-radius: 5px;  /* Bordas arredondadas */\n"
"    padding: 10px 20px;  /* Espa\303\247amento interno */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Estado hover - Salvar */\n"
"QPushButton:hover {\n"
"    background-color: #218838;  /* Cor mais escura quando passar o mouse */\n"
"}\n"
"\n"
"/* Estado pressionado - Salvar */\n"
"QPushButton:pressed {\n"
"    background-color: #1e7e34;  /* Cor mais escura quando pressionado */\n"
"}\n"
""));

        horizontalLayout->addWidget(save_button_);

        cancel_button_ = new QPushButton(action_buttons_widget_);
        cancel_button_->setObjectName(QString::fromUtf8("cancel_button_"));
        cancel_button_->setMinimumSize(QSize(120, 0));
        cancel_button_->setStyleSheet(QString::fromUtf8("/* Bot\303\243o de Cancelar - Vermelho */\n"
"QPushButton {\n"
"    background-color: #dc3545;  /* Cor de fundo vermelha */\n"
"    color: white;  /* Cor do texto */\n"
"    border: none;\n"
"    border-radius: 5px;  /* Bordas arredondadas */\n"
"    padding: 10px 20px;  /* Espa\303\247amento interno */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Estado hover - Cancelar */\n"
"QPushButton:hover {\n"
"    background-color: #c82333;  /* Cor mais escura quando passar o mouse */\n"
"}\n"
"\n"
"/* Estado pressionado - Cancelar */\n"
"QPushButton:pressed {\n"
"    background-color: #bd2130;  /* Cor mais escura quando pressionado */\n"
"}"));

        horizontalLayout->addWidget(cancel_button_);


        verticalLayout->addWidget(action_buttons_widget_);


        retranslateUi(SetupDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SetupDialog);
    } // setupUi

    void retranslateUi(QDialog *SetupDialog)
    {
        SetupDialog->setWindowTitle(QApplication::translate("SetupDialog", "Network Settings", nullptr));
        label_2->setText(QApplication::translate("SetupDialog", "SSID", nullptr));
        label_3->setText(QApplication::translate("SetupDialog", "Password", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SetupDialog", "WiFi Settings", nullptr));
        groupBox->setTitle(QApplication::translate("SetupDialog", "Add new device", nullptr));
        add_button_->setText(QApplication::translate("SetupDialog", "Add", nullptr));
        label_5->setText(QApplication::translate("SetupDialog", "IP Address", nullptr));
        label_4->setText(QApplication::translate("SetupDialog", "Device Name", nullptr));
        label_6->setText(QApplication::translate("SetupDialog", "Port", nullptr));
        error_label_->setText(QApplication::translate("SetupDialog", "Error", nullptr));
        groupBox_2->setTitle(QApplication::translate("SetupDialog", "Devices", nullptr));
        delete_button_->setText(QApplication::translate("SetupDialog", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SetupDialog", "Devices", nullptr));
        save_button_->setText(QApplication::translate("SetupDialog", "SAVE", nullptr));
        cancel_button_->setText(QApplication::translate("SetupDialog", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupDialog: public Ui_SetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_DIALOG_H
