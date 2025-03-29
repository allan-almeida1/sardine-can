#pragma once

#include <QWidget>

namespace sardine_can
{
    class MainWindow : public QWidget
    {
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow() = default;

    private:
    };

} // namespace sardine_can
