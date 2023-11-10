#include "window.h"
#include <QtCore>
#include <QtGui/QMouseEvent>

WindowMine::WindowMine(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setBlurRadius(50);
    shadow->setXOffset(0);
    shadow->setYOffset(0);
    shadow->setColor(QColor(0, 92, 157, 550));
    ui.centralwidget->setGraphicsEffect(shadow);

    this->setWindowTitle("NerChess");

    new QSizeGrip(ui.size_drag_frame);

    QVBoxLayout* layout = new QVBoxLayout(ui.main_frame);
    layout->addWidget(mainDisplay);

    connect(ui.hide, SIGNAL(clicked()), this, SLOT(showMinimized()));
    connect(ui.close, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui.min_max, SIGNAL(clicked()), this, SLOT(restoreMaximize()));
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(slideLeftMenu()));
}

WindowMine::~WindowMine()
{
}

void WindowMine::mousePressEvent(QMouseEvent* event) {
    cur_pos = event->globalPos();
}

void WindowMine::mouseMoveEvent(QMouseEvent* event) {
    if (not isFullScreen() and QPoint(event->pos()).y() <= 60) {
        new_pos = QPoint(event->globalPos()) - cur_pos;
        move(x() + new_pos.x(), y() + new_pos.y());
        cur_pos = event->globalPos();
    };
}

void WindowMine::restoreMaximize()
{
    if(this->isMaximized()){
        this->showNormal();
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/maximize-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ui.min_max->setIcon(icon);
    }else{
        this->showMaximized();
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/minimize-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ui.min_max->setIcon(icon);
    }
}

void WindowMine::slideLeftMenu(){
    int newWidth = 0;
    int width = ui.left_frame->width();

    if(width <= 0){
        newWidth = 250;
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/menu-expand-left-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ui.pushButton->setIcon(icon);
    }else{
        newWidth = 0;
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/menu-expand-right-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ui.pushButton->setIcon(icon);
    }

    QPropertyAnimation *animation = new QPropertyAnimation(ui.left_frame, "maximumWidth");
    animation->setDuration(250);
    animation->setStartValue(width);
    animation->setEndValue(newWidth);
    animation->setEasingCurve(QEasingCurve::InOutBounce);
    animation->start();
}