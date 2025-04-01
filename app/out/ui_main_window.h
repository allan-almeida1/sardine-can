/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <pedal_widget.hpp>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *header_;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *wifi_icon_;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *scan_button_;
    QPushButton *setup_button_;
    QSpacerItem *verticalSpacer_2;
    QLabel *bank_label_;
    QWidget *pedal_container_;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *left_index_button_;
    sardine_can::PedalWidget *pedal_widget_;
    QPushButton *right_index_button_;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(1280, 720));
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        header_ = new QWidget(MainWindow);
        header_->setObjectName(QString::fromUtf8("header_"));
        header_->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(header_);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(24, -1, -1, -1);
        widget = new QWidget(header_);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(16);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        wifi_icon_ = new QLabel(widget);
        wifi_icon_->setObjectName(QString::fromUtf8("wifi_icon_"));
        wifi_icon_->setMinimumSize(QSize(32, 24));
        wifi_icon_->setMaximumSize(QSize(32, 24));
        wifi_icon_->setScaledContents(true);

        gridLayout_2->addWidget(wifi_icon_, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: \"#888888\""));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 1, 2, 1, 1);

        label = new QLabel(header_);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 68));
        label->setMaximumSize(QSize(200, 68));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        widget_2 = new QWidget(header_);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(16);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 24, 0);
        scan_button_ = new QPushButton(widget_2);
        scan_button_->setObjectName(QString::fromUtf8("scan_button_"));
        scan_button_->setMinimumSize(QSize(140, 0));
        scan_button_->setMaximumSize(QSize(16777215, 40));
        scan_button_->setCursor(QCursor(Qt::PointingHandCursor));
        scan_button_->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 2px solid #454545;\n"
"	background: transparent;\n"
"	color: #454545;\n"
" 	border-radius: 6px;\n"
"	font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: #454545;\n"
"	color: #fff;\n"
"}"));

        horizontalLayout_2->addWidget(scan_button_);

        setup_button_ = new QPushButton(widget_2);
        setup_button_->setObjectName(QString::fromUtf8("setup_button_"));
        setup_button_->setMinimumSize(QSize(20, 20));
        setup_button_->setMaximumSize(QSize(20, 20));
        setup_button_->setCursor(QCursor(Qt::PointingHandCursor));
        setup_button_->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                background-color: transparent;\n"
"                border: none;\n"
"                image: url(:/icons/gear.svg);\n"
"            }\n"
"\n"
"            QPushButton:hover {\n"
"                image: url(:/icons/gear-hover.svg);\n"
"            }\n"
"\n"
"            QPushButton:disabled {\n"
"                image: url(:/icons/gear-disabled.svg);\n"
"            }"));

        horizontalLayout_2->addWidget(setup_button_);


        gridLayout->addWidget(widget_2, 1, 4, 1, 1);


        verticalLayout->addWidget(header_);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        bank_label_ = new QLabel(MainWindow);
        bank_label_->setObjectName(QString::fromUtf8("bank_label_"));
        bank_label_->setMinimumSize(QSize(0, 80));
        bank_label_->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(bank_label_);

        pedal_container_ = new QWidget(MainWindow);
        pedal_container_->setObjectName(QString::fromUtf8("pedal_container_"));
        pedal_container_->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(pedal_container_);
        horizontalLayout->setSpacing(24);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        left_index_button_ = new QPushButton(pedal_container_);
        left_index_button_->setObjectName(QString::fromUtf8("left_index_button_"));
        left_index_button_->setMinimumSize(QSize(70, 70));
        left_index_button_->setMaximumSize(QSize(70, 70));
        left_index_button_->setCursor(QCursor(Qt::PointingHandCursor));
        left_index_button_->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background-color: transparent;\n"
"                image: url(:/icons/chevron-left.svg);\n"
"            }\n"
"            QPushButton:hover {\n"
"                image: url(:/icons/chevron-left-hover.svg);\n"
"            }\n"
"            QPushButton:disabled {\n"
"                image: url(:/icons/chevron-left-disabled.svg);\n"
"            }"));

        horizontalLayout->addWidget(left_index_button_);

        pedal_widget_ = new sardine_can::PedalWidget(pedal_container_);
        pedal_widget_->setObjectName(QString::fromUtf8("pedal_widget_"));

        horizontalLayout->addWidget(pedal_widget_);

        right_index_button_ = new QPushButton(pedal_container_);
        right_index_button_->setObjectName(QString::fromUtf8("right_index_button_"));
        right_index_button_->setMinimumSize(QSize(70, 70));
        right_index_button_->setMaximumSize(QSize(70, 70));
        right_index_button_->setCursor(QCursor(Qt::PointingHandCursor));
        right_index_button_->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"                border: none;\n"
"                background-color: transparent;\n"
"                image: url(:/icons/chevron-right.svg);\n"
"            }\n"
"            QPushButton:hover {\n"
"                image: url(:/icons/chevron-right-hover.svg);\n"
"            }\n"
"            QPushButton:disabled {\n"
"                image: url(:/icons/chevron-right-disabled.svg);\n"
"            }"));

        horizontalLayout->addWidget(right_index_button_);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(pedal_container_);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SardineCan", nullptr));
        wifi_icon_->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Not connected", nullptr));
        label->setText(QApplication::translate("MainWindow", "SardineCan", nullptr));
        scan_button_->setText(QApplication::translate("MainWindow", "SCAN", nullptr));
        setup_button_->setText(QString());
        bank_label_->setText(QApplication::translate("MainWindow", "BANK 1", nullptr));
        left_index_button_->setText(QString());
        right_index_button_->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
