#pragma once

#include <QtWidgets>
#include "board.h"



class MainDisplay : public QFrame
{
    Q_OBJECT

public:
    MainDisplay(QWidget* parent = nullptr);
    QGraphicsScene *scene = new QGraphicsScene();
    QGraphicsView *display = new QGraphicsView;

private:
    void SetBoard();
    void resizeEvent(QResizeEvent* event);
};