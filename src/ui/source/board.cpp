#include "board.h"
#include <QBrush>
#include <QGraphicsProxyWidget>


Board::Board(int x, int y, int dimension, QColor color, QGraphicsItem *parent): QGraphicsRectItem(parent){
    setRect(x, y, dimension, dimension);
    QBrush brush;
    brush.setStyle((Qt::SolidPattern));
    brush.setColor(color);
    setBrush(brush);
}