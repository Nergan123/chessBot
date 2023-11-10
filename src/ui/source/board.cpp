#include "board.h"
#include <QBrush>
#include <QGraphicsProxyWidget>


Board::Board(int x, int y, QGraphicsItem *parent): QGraphicsRectItem(parent){
    setRect(x, y, 80, 80);
    QBrush brush;
    brush.setStyle((Qt::SolidPattern));
    brush.setColor(QColor(55, 51, 63));
    setBrush(brush);
}