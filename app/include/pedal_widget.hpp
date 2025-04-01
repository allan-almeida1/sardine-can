#pragma once

#include <QDebug>
#include <QMouseEvent>
#include <QRect>
#include <QWidget>

#include <string>
#include <vector>

#include <ui_pedal_widget.h>

namespace sardine_can
{
    class PedalWidget : public QWidget
    {
        Q_OBJECT
    public:
        explicit PedalWidget(QWidget *parent = nullptr);
        ~PedalWidget() = default;

    signals:
        /**
         * @brief Signal emitted when the bank is changed, enabling or disabling the left and right buttons
         *
         * @param enable_left_button Enable the left button
         * @param enable_right_button Enable the right button
         * @param bank_index Index of the bank
         */
        void bankChanged(bool enable_left_button, bool enable_right_button, int bank_index);

        /**
         * @brief Signal emitted when a pedal is clicked
         *
         * @param pedal Pedal index
         */
        void pedalClicked(int pedal_index);

    public slots:
        /**
         * @brief Go to the next pedal bank
         */
        void nextPedalBank();

        /**
         * @brief Go to the previous pedal bank
         */
        void previousPedalBank();

    private:
        void mouseMoveEvent(QMouseEvent *event) override;
        void mousePressEvent(QMouseEvent *event) override;
        void leaveEvent(QEvent *event) override;

        /**
         * @brief Set the Pedal descriptions
         *
         * @param descriptions Vector of strings with the descriptions of the pedals
         */
        void setPedalDescriptions(const std::vector<std::string> &descriptions);

        /**
         * @brief Update the pedal addresses and descriptions
         *
         */
        void
        updatePedalAddressesAndDescriptions();

        Ui::PedalWidget ui_;
        QRect pedal_1_rect_;
        QRect pedal_2_rect_;
        QRect pedal_3_rect_;
        QRect pedal_4_rect_;

        std::vector<int> pedal_addresses_ = {0x01, 0x02, 0x03, 0x04,
                                             0x05, 0x06, 0x07, 0x08,
                                             0x09, 0x0A, 0x0B, 0x0C,
                                             0x0D, 0x0E, 0x0F, 0x10};
        std::vector<int> selected_pedals_ = {0x01, 0x02, 0x03, 0x04};
        std::vector<std::string> selected_pedals_descriptions_ = {"PEDAL 1", "PEDAL 2", "PEDAL 3", "PEDAL 4"};
        int selected_pedal_index_ = 0;
    };
}
