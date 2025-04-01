/********************************************************************************
** Form generated from reading UI file 'pedal_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDAL_DIALOG_H
#define UI_PEDAL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PedalDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLineEdit *press_name_input_;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QComboBox *press_device_combo_;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *press_command_input_;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLineEdit *press_value_input_;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_10;
    QLineEdit *release_name_input_;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QComboBox *release_device_combo_;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_11;
    QLineEdit *release_command_input_;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QLineEdit *release_value_input_;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *save_button_;
    QPushButton *cancel_button_;

    void setupUi(QDialog *PedalDialog)
    {
        if (PedalDialog->objectName().isEmpty())
            PedalDialog->setObjectName(QString::fromUtf8("PedalDialog"));
        PedalDialog->resize(867, 557);
        gridLayout = new QGridLayout(PedalDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 24, -1, -1);
        groupBox = new QGroupBox(PedalDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_8 = new QWidget(groupBox);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy);
        widget_8->setMaximumSize(QSize(300, 70));
        verticalLayout_7 = new QVBoxLayout(widget_8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        label_5 = new QLabel(widget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 40));

        verticalLayout_7->addWidget(label_5);

        press_name_input_ = new QLineEdit(widget_8);
        press_name_input_->setObjectName(QString::fromUtf8("press_name_input_"));
        press_name_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_7->addWidget(press_name_input_);


        verticalLayout->addWidget(widget_8);

        widget_7 = new QWidget(groupBox);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setMaximumSize(QSize(300, 70));
        verticalLayout_6 = new QVBoxLayout(widget_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, -1);
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 40));

        verticalLayout_6->addWidget(label_4);

        press_device_combo_ = new QComboBox(widget_7);
        press_device_combo_->setObjectName(QString::fromUtf8("press_device_combo_"));
        press_device_combo_->setMinimumSize(QSize(0, 32));

        verticalLayout_6->addWidget(press_device_combo_);


        verticalLayout->addWidget(widget_7);

        widget_9 = new QWidget(groupBox);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        sizePolicy.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy);
        widget_9->setMaximumSize(QSize(300, 70));
        verticalLayout_8 = new QVBoxLayout(widget_9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, -1, 0, -1);
        label_6 = new QLabel(widget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 40));

        verticalLayout_8->addWidget(label_6);

        press_command_input_ = new QLineEdit(widget_9);
        press_command_input_->setObjectName(QString::fromUtf8("press_command_input_"));
        press_command_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_8->addWidget(press_command_input_);


        verticalLayout->addWidget(widget_9);

        widget_10 = new QWidget(groupBox);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy);
        widget_10->setMaximumSize(QSize(300, 70));
        verticalLayout_9 = new QVBoxLayout(widget_10);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, -1, 0, -1);
        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 40));

        verticalLayout_9->addWidget(label_7);

        press_value_input_ = new QLineEdit(widget_10);
        press_value_input_->setObjectName(QString::fromUtf8("press_value_input_"));
        press_value_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_9->addWidget(press_value_input_);


        verticalLayout->addWidget(widget_10);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(PedalDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_13 = new QWidget(groupBox_2);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        sizePolicy.setHeightForWidth(widget_13->sizePolicy().hasHeightForWidth());
        widget_13->setSizePolicy(sizePolicy);
        widget_13->setMaximumSize(QSize(300, 70));
        verticalLayout_12 = new QVBoxLayout(widget_13);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, -1, 0, -1);
        label_10 = new QLabel(widget_13);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 40));

        verticalLayout_12->addWidget(label_10);

        release_name_input_ = new QLineEdit(widget_13);
        release_name_input_->setObjectName(QString::fromUtf8("release_name_input_"));
        release_name_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_12->addWidget(release_name_input_);


        verticalLayout_2->addWidget(widget_13);

        widget_12 = new QWidget(groupBox_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        sizePolicy.setHeightForWidth(widget_12->sizePolicy().hasHeightForWidth());
        widget_12->setSizePolicy(sizePolicy);
        widget_12->setMaximumSize(QSize(300, 70));
        verticalLayout_11 = new QVBoxLayout(widget_12);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, -1, 0, -1);
        label_9 = new QLabel(widget_12);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 40));

        verticalLayout_11->addWidget(label_9);

        release_device_combo_ = new QComboBox(widget_12);
        release_device_combo_->setObjectName(QString::fromUtf8("release_device_combo_"));
        release_device_combo_->setMinimumSize(QSize(0, 32));

        verticalLayout_11->addWidget(release_device_combo_);


        verticalLayout_2->addWidget(widget_12);

        widget_14 = new QWidget(groupBox_2);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        sizePolicy.setHeightForWidth(widget_14->sizePolicy().hasHeightForWidth());
        widget_14->setSizePolicy(sizePolicy);
        widget_14->setMaximumSize(QSize(300, 70));
        verticalLayout_13 = new QVBoxLayout(widget_14);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, -1, 0, -1);
        label_11 = new QLabel(widget_14);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(16777215, 40));

        verticalLayout_13->addWidget(label_11);

        release_command_input_ = new QLineEdit(widget_14);
        release_command_input_->setObjectName(QString::fromUtf8("release_command_input_"));
        release_command_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_13->addWidget(release_command_input_);


        verticalLayout_2->addWidget(widget_14);

        widget_11 = new QWidget(groupBox_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        sizePolicy.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy);
        widget_11->setMaximumSize(QSize(300, 70));
        verticalLayout_10 = new QVBoxLayout(widget_11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, -1, 0, -1);
        label_8 = new QLabel(widget_11);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 40));

        verticalLayout_10->addWidget(label_8);

        release_value_input_ = new QLineEdit(widget_11);
        release_value_input_->setObjectName(QString::fromUtf8("release_value_input_"));
        release_value_input_->setMinimumSize(QSize(0, 32));

        verticalLayout_10->addWidget(release_value_input_);


        verticalLayout_2->addWidget(widget_11);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        widget = new QWidget(PedalDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(576, 34, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        save_button_ = new QPushButton(widget);
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

        cancel_button_ = new QPushButton(widget);
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


        gridLayout->addWidget(widget, 1, 0, 1, 2);


        retranslateUi(PedalDialog);

        QMetaObject::connectSlotsByName(PedalDialog);
    } // setupUi

    void retranslateUi(QDialog *PedalDialog)
    {
        PedalDialog->setWindowTitle(QApplication::translate("PedalDialog", "Pedal", nullptr));
        groupBox->setTitle(QApplication::translate("PedalDialog", "On Press Command", nullptr));
        label_5->setText(QApplication::translate("PedalDialog", "Name", nullptr));
        label_4->setText(QApplication::translate("PedalDialog", "Device", nullptr));
        label_6->setText(QApplication::translate("PedalDialog", "OSC Command", nullptr));
        label_7->setText(QApplication::translate("PedalDialog", "Value", nullptr));
        groupBox_2->setTitle(QApplication::translate("PedalDialog", "On Release Command", nullptr));
        label_10->setText(QApplication::translate("PedalDialog", "Name", nullptr));
        label_9->setText(QApplication::translate("PedalDialog", "Device", nullptr));
        label_11->setText(QApplication::translate("PedalDialog", "OSC Command", nullptr));
        label_8->setText(QApplication::translate("PedalDialog", "Value", nullptr));
        save_button_->setText(QApplication::translate("PedalDialog", "SAVE", nullptr));
        cancel_button_->setText(QApplication::translate("PedalDialog", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PedalDialog: public Ui_PedalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDAL_DIALOG_H
