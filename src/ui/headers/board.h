#pragma once

#include <QGraphicsRectItem>


class Board : public QGraphicsRectItem{

public:
    Board(int x, int y, int dimension, QColor color, QGraphicsItem *parent = nullptr);

};