#include "pedal_widget.hpp"

namespace sardine_can
{
    PedalWidget::PedalWidget(QWidget *parent)
        : QWidget(parent)
    {
        ui_.setupUi(this);

        // Set initial background
        ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));

        // Enable mouse tracking
        ui_.pedal_label_->setMouseTracking(true);
        this->setMouseTracking(true);

        // Definir regiões para cada pedal (ajuste conforme necessário)
        pedal_1_rect_ = QRect(0, 0, ui_.pedal_label_->width() / 4 - 35,
                              ui_.pedal_label_->height()); // Primeiro pedal
        pedal_2_rect_ = QRect(ui_.pedal_label_->width() / 4 + 15, 0,
                              ui_.pedal_label_->width() / 4 - 36,
                              ui_.pedal_label_->height()); // Segundo pedal
        pedal_3_rect_ = QRect(ui_.pedal_label_->width() / 2 + 25, 0,
                              ui_.pedal_label_->width() / 4 - 35,
                              ui_.pedal_label_->height()); // Terceiro pedal
        pedal_4_rect_ = QRect(3 * ui_.pedal_label_->width() / 4 + 37, 0,
                              ui_.pedal_label_->width() / 4,
                              ui_.pedal_label_->height()); // Quarto pedal

        setPedalDescriptions(selected_pedals_descriptions_);
    }

    void PedalWidget::setPedalDescriptions(const std::vector<std::string> &descriptions)
    {
        // Verifica se o número de descrições é igual ao número de pedais
        if (descriptions.size() != 4)
        {
            qDebug() << "Número de descrições diferente do número de pedais";
            return;
        }

        // Define as descrições dos pedais
        ui_.pedal_1_description_->setText(QString::fromStdString(descriptions[0]));
        ui_.pedal_2_description_->setText(QString::fromStdString(descriptions[1]));
        ui_.pedal_3_description_->setText(QString::fromStdString(descriptions[2]));
        ui_.pedal_4_description_->setText(QString::fromStdString(descriptions[3]));
    }

    void PedalWidget::nextPedalBank()
    {
        selected_pedal_index_ = selected_pedal_index_ < pedal_addresses_.size() - 4 ? selected_pedal_index_ + 4 : selected_pedal_index_;
        updatePedalAddressesAndDescriptions();
        emit bankChanged(selected_pedal_index_ > 0, selected_pedal_index_ < pedal_addresses_.size() - 4, selected_pedal_index_);
    }

    void PedalWidget::previousPedalBank()
    {
        selected_pedal_index_ = selected_pedal_index_ > 0 ? selected_pedal_index_ - 4 : selected_pedal_index_;
        updatePedalAddressesAndDescriptions();
        emit bankChanged(selected_pedal_index_ > 0, selected_pedal_index_ < pedal_addresses_.size() - 4, selected_pedal_index_);
    }

    void PedalWidget::updatePedalAddressesAndDescriptions()
    {
        selected_pedals_ = {
            pedal_addresses_[selected_pedal_index_],
            pedal_addresses_[selected_pedal_index_ + 1],
            pedal_addresses_[selected_pedal_index_ + 2],
            pedal_addresses_[selected_pedal_index_ + 3]};

        selected_pedals_descriptions_ = {
            "PEDAL " + std::to_string(selected_pedals_[0]),
            "PEDAL " + std::to_string(selected_pedals_[1]),
            "PEDAL " + std::to_string(selected_pedals_[2]),
            "PEDAL " + std::to_string(selected_pedals_[3])};

        setPedalDescriptions(selected_pedals_descriptions_);
    }

    void PedalWidget::mouseMoveEvent(QMouseEvent *event)
    {
        QPoint mousePos = event->pos();

        // Verifica se o mouse está dentro de uma das regiões e troca o cursor
        if (pedal_1_rect_.contains(mousePos) || pedal_2_rect_.contains(mousePos) || pedal_3_rect_.contains(mousePos) || pedal_4_rect_.contains(mousePos))
        {
            setCursor(Qt::PointingHandCursor);
        }
        else
        {
            setCursor(Qt::ArrowCursor);
        }

        // Troca de imagem dependendo da posição do mouse
        if (pedal_1_rect_.contains(mousePos))
            ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal_1.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
        else if (pedal_2_rect_.contains(mousePos))
            ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal_2.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
        else if (pedal_3_rect_.contains(mousePos))
            ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal_3.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
        else if (pedal_4_rect_.contains(mousePos))
            ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal_4.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
        else
            ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    }

    void PedalWidget::mousePressEvent(QMouseEvent *event)
    {
        QPoint mousePos = event->pos();

        // Verifica se o mouse está dentro de uma das regiões e imprime a mensagem correspondente
        if (pedal_1_rect_.contains(mousePos))
        {
            emit pedalClicked(selected_pedals_[0]);
        }
        else if (pedal_2_rect_.contains(mousePos))
        {
            emit pedalClicked(selected_pedals_[1]);
        }
        else if (pedal_3_rect_.contains(mousePos))
        {
            emit pedalClicked(selected_pedals_[2]);
        }
        else if (pedal_4_rect_.contains(mousePos))
        {
            emit pedalClicked(selected_pedals_[3]);
        }
    }

    void PedalWidget::leaveEvent(QEvent *event)
    {
        // Retorna a imagem original quando o mouse sai da área do pedal
        ui_.pedal_label_->setPixmap(QPixmap(":/images/pedal.svg").scaled(ui_.pedal_label_->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    }

} // namespace sardine_can
