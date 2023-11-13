#include "mainDisplay.h"


MainDisplay::MainDisplay(QWidget* parent)
            : QFrame(parent) {
    setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(display);
    display->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
    display->setScene(scene);
    int dimension = (this->height())/13;
    display->setSceneRect(QRect(0, 0, dimension*8, dimension*8));
    SetBoard();
}

void MainDisplay::SetBoard(){
    int dimension = (this->height())/13;
    display->setSceneRect(QRect(0, 0, dimension*8, dimension*8));
    int counter = 0;
    for(int x=0; x<8; x++){
        QColor color;
        for(int y=0; y<8; y++){
            color = (counter%2 == 0) ? QColor(55, 51, 63) : QColor(105, 101, 113);
            Board *board = new Board(x*dimension, y*dimension, dimension, color);
            scene->addItem(board);
            counter++;
        };
        counter++;
    };
}

void MainDisplay::resizeEvent(QResizeEvent *event){
    scene->clear();
    SetBoard();
    repaint();
}