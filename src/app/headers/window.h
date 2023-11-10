#pragma once

#include "../design/ui_untitled.h"
#include <QtWidgets/QMainWindow>
#include <QGraphicsDropShadowEffect>
#include <QSizeGrip>


class WindowMine : public QMainWindow
{
    Q_OBJECT

public:
    WindowMine(QWidget *parent = nullptr);
    ~WindowMine();

private:
    Ui::MainWindow ui;
    QPoint cur_pos;
    QPoint new_pos;
    int cur_width;
    int new_width;
    
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

private slots:
    void restoreMaximize();
    void slideLeftMenu();
};