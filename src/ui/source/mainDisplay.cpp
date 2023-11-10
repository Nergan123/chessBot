#include "mainDisplay.h"


MainDisplay::MainDisplay(QWidget* parent)
            : QFrame(parent) {
    setSizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(display);
    display->setScene(scene);
    display->setSceneRect(QRect(0, 0, 400, 400));
    for(int x=0; x<5; x++){
        for(int y=0; y<5; y++){
            Board *board = new Board(x*80, y*80);
            scene->addItem(board);
        };
    };
    
}