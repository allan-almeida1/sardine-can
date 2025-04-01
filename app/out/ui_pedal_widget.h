/********************************************************************************
** Form generated from reading UI file 'pedal_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDAL_WIDGET_H
#define UI_PEDAL_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PedalWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *pedal_label_;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pedal_1_description_;
    QLabel *pedal_2_description_;
    QLabel *pedal_3_description_;
    QLabel *pedal_4_description_;

    void setupUi(QWidget *PedalWidget)
    {
        if (PedalWidget->objectName().isEmpty())
            PedalWidget->setObjectName(QString::fromUtf8("PedalWidget"));
        PedalWidget->resize(879, 408);
        gridLayout = new QGridLayout(PedalWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pedal_label_ = new QLabel(PedalWidget);
        pedal_label_->setObjectName(QString::fromUtf8("pedal_label_"));
        pedal_label_->setMinimumSize(QSize(873, 331));
        pedal_label_->setMaximumSize(QSize(873, 331));
        pedal_label_->setScaledContents(true);

        gridLayout->addWidget(pedal_label_, 1, 0, 1, 1);

        widget_2 = new QWidget(PedalWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(932, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pedal_1_description_ = new QLabel(widget_2);
        pedal_1_description_->setObjectName(QString::fromUtf8("pedal_1_description_"));
        QFont font;
        font.setPointSize(15);
        pedal_1_description_->setFont(font);
        pedal_1_description_->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pedal_1_description_);

        pedal_2_description_ = new QLabel(widget_2);
        pedal_2_description_->setObjectName(QString::fromUtf8("pedal_2_description_"));
        pedal_2_description_->setFont(font);
        pedal_2_description_->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pedal_2_description_);

        pedal_3_description_ = new QLabel(widget_2);
        pedal_3_description_->setObjectName(QString::fromUtf8("pedal_3_description_"));
        pedal_3_description_->setFont(font);
        pedal_3_description_->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pedal_3_description_);

        pedal_4_description_ = new QLabel(widget_2);
        pedal_4_description_->setObjectName(QString::fromUtf8("pedal_4_description_"));
        pedal_4_description_->setFont(font);
        pedal_4_description_->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pedal_4_description_);


        gridLayout->addWidget(widget_2, 2, 0, 1, 2);


        retranslateUi(PedalWidget);

        QMetaObject::connectSlotsByName(PedalWidget);
    } // setupUi

    void retranslateUi(QWidget *PedalWidget)
    {
        PedalWidget->setWindowTitle(QApplication::translate("PedalWidget", "Form", nullptr));
        pedal_label_->setText(QString());
        pedal_1_description_->setText(QString());
        pedal_2_description_->setText(QString());
        pedal_3_description_->setText(QString());
        pedal_4_description_->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PedalWidget: public Ui_PedalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDAL_WIDGET_H
