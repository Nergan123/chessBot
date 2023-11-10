#pragma once

#include <QGraphicsRectItem>


class Board : public QGraphicsRectItem{

public:
    Board(int x, int y, QGraphicsItem *parent = nullptr);

};