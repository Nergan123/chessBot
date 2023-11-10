/********************************************************************************
** Form generated from reading UI file 'untitledRjgQAr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDRJGQAR_H
#define UNTITLEDRJGQAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *left_frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *bottom_frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *main_menu;
    QVBoxLayout *verticalLayout_5;
    QFrame *name_frame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QToolBox *toolBox;
    QWidget *presets_page;
    QWidget *Info_page;
    QLabel *label;
    QFrame *right_frame;
    QVBoxLayout *verticalLayout;
    QFrame *top_bar;
    QHBoxLayout *horizontalLayout_2;
    QFrame *menu_slide_button;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QFrame *filling;
    QFrame *window_buttons;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *hide;
    QPushButton *min_max;
    QPushButton *close;
    QFrame *main_frame;
    QFrame *bottom_frame_right;
    QHBoxLayout *horizontalLayout_3;
    QFrame *info_frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *version_label;
    QFrame *size_drag_frame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lohit Kannada\";\n"
"border: None;"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left_frame = new QFrame(centralwidget);
        left_frame->setObjectName(QString::fromUtf8("left_frame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(left_frame->sizePolicy().hasHeightForWidth());
        left_frame->setSizePolicy(sizePolicy);
        left_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 67, 67);"));
        left_frame->setFrameShape(QFrame::StyledPanel);
        left_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(left_frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        bottom_frame = new QFrame(left_frame);
        bottom_frame->setObjectName(QString::fromUtf8("bottom_frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bottom_frame->sizePolicy().hasHeightForWidth());
        bottom_frame->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Lohit Kannada"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        bottom_frame->setFont(font);
        bottom_frame->setFrameShape(QFrame::StyledPanel);
        bottom_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(bottom_frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        main_menu = new QFrame(bottom_frame);
        main_menu->setObjectName(QString::fromUtf8("main_menu"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(main_menu->sizePolicy().hasHeightForWidth());
        main_menu->setSizePolicy(sizePolicy2);
        main_menu->setMinimumSize(QSize(250, 0));
        main_menu->setFrameShape(QFrame::StyledPanel);
        main_menu->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(main_menu);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        name_frame = new QFrame(main_menu);
        name_frame->setObjectName(QString::fromUtf8("name_frame"));
        name_frame->setStyleSheet(QString::fromUtf8("font: 100 18pt \"GFS Neohellenic\";"));
        name_frame->setFrameShape(QFrame::StyledPanel);
        name_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(name_frame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(name_frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2, 0, Qt::AlignHCenter);


        verticalLayout_5->addWidget(name_frame);

        toolBox = new QToolBox(main_menu);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        presets_page = new QWidget();
        presets_page->setObjectName(QString::fromUtf8("presets_page"));
        presets_page->setGeometry(QRect(0, 0, 232, 549));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/chevron-down-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(presets_page, icon, QString::fromUtf8("Presets"));
        Info_page = new QWidget();
        Info_page->setObjectName(QString::fromUtf8("Info_page"));
        Info_page->setGeometry(QRect(0, 0, 232, 549));
        toolBox->addItem(Info_page, icon, QString::fromUtf8("Info"));

        verticalLayout_5->addWidget(toolBox);


        verticalLayout_3->addWidget(main_menu);

        label = new QLabel(bottom_frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMaximumSize(QSize(171, 16777215));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(label);


        verticalLayout_2->addWidget(bottom_frame, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(left_frame);

        right_frame = new QFrame(centralwidget);
        right_frame->setObjectName(QString::fromUtf8("right_frame"));
        right_frame->setMinimumSize(QSize(500, 500));
        right_frame->setFrameShape(QFrame::StyledPanel);
        right_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(right_frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        top_bar = new QFrame(right_frame);
        top_bar->setObjectName(QString::fromUtf8("top_bar"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(top_bar->sizePolicy().hasHeightForWidth());
        top_bar->setSizePolicy(sizePolicy4);
        top_bar->setStyleSheet(QString::fromUtf8("background-color: #272829;"));
        top_bar->setFrameShape(QFrame::StyledPanel);
        top_bar->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(top_bar);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        menu_slide_button = new QFrame(top_bar);
        menu_slide_button->setObjectName(QString::fromUtf8("menu_slide_button"));
        menu_slide_button->setFrameShape(QFrame::StyledPanel);
        menu_slide_button->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(menu_slide_button);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(menu_slide_button);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy5);
        pushButton->setMinimumSize(QSize(60, 60));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/menu-expand-right-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));

        horizontalLayout_5->addWidget(pushButton);


        horizontalLayout_2->addWidget(menu_slide_button, 0, Qt::AlignTop);

        filling = new QFrame(top_bar);
        filling->setObjectName(QString::fromUtf8("filling"));
        sizePolicy1.setHeightForWidth(filling->sizePolicy().hasHeightForWidth());
        filling->setSizePolicy(sizePolicy1);
        filling->setFrameShape(QFrame::StyledPanel);
        filling->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(filling, 0, Qt::AlignTop);

        window_buttons = new QFrame(top_bar);
        window_buttons->setObjectName(QString::fromUtf8("window_buttons"));
        window_buttons->setFrameShape(QFrame::StyledPanel);
        window_buttons->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(window_buttons);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        hide = new QPushButton(window_buttons);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setMinimumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/minus-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon2);

        horizontalLayout_4->addWidget(hide);

        min_max = new QPushButton(window_buttons);
        min_max->setObjectName(QString::fromUtf8("min_max"));
        min_max->setMinimumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/maximize-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        min_max->setIcon(icon3);

        horizontalLayout_4->addWidget(min_max);

        close = new QPushButton(window_buttons);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/close-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon4);

        horizontalLayout_4->addWidget(close);


        horizontalLayout_2->addWidget(window_buttons, 0, Qt::AlignTop);


        verticalLayout->addWidget(top_bar, 0, Qt::AlignTop);

        main_frame = new QFrame(right_frame);
        main_frame->setObjectName(QString::fromUtf8("main_frame"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(main_frame->sizePolicy().hasHeightForWidth());
        main_frame->setSizePolicy(sizePolicy6);
        main_frame->setFrameShape(QFrame::StyledPanel);
        main_frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(main_frame);

        bottom_frame_right = new QFrame(right_frame);
        bottom_frame_right->setObjectName(QString::fromUtf8("bottom_frame_right"));
        bottom_frame_right->setStyleSheet(QString::fromUtf8("background-color: #272829;"));
        bottom_frame_right->setFrameShape(QFrame::StyledPanel);
        bottom_frame_right->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(bottom_frame_right);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        info_frame = new QFrame(bottom_frame_right);
        info_frame->setObjectName(QString::fromUtf8("info_frame"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(info_frame->sizePolicy().hasHeightForWidth());
        info_frame->setSizePolicy(sizePolicy7);
        info_frame->setFont(font);
        info_frame->setFrameShape(QFrame::StyledPanel);
        info_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(info_frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        version_label = new QLabel(info_frame);
        version_label->setObjectName(QString::fromUtf8("version_label"));
        sizePolicy7.setHeightForWidth(version_label->sizePolicy().hasHeightForWidth());
        version_label->setSizePolicy(sizePolicy7);
        version_label->setMinimumSize(QSize(84, 15));

        verticalLayout_4->addWidget(version_label);


        horizontalLayout_3->addWidget(info_frame, 0, Qt::AlignLeft|Qt::AlignBottom);

        size_drag_frame = new QFrame(bottom_frame_right);
        size_drag_frame->setObjectName(QString::fromUtf8("size_drag_frame"));
        size_drag_frame->setMinimumSize(QSize(10, 10));
        size_drag_frame->setFrameShape(QFrame::StyledPanel);
        size_drag_frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(size_drag_frame, 0, Qt::AlignRight|Qt::AlignBottom);


        verticalLayout->addWidget(bottom_frame_right);


        horizontalLayout->addWidget(right_frame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "NerChess", nullptr));
        toolBox->setItemText(toolBox->indexOf(presets_page), QCoreApplication::translate("MainWindow", "Presets", nullptr));
        toolBox->setItemText(toolBox->indexOf(Info_page), QCoreApplication::translate("MainWindow", "Info", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Made by Nergan", nullptr));
        pushButton->setText(QString());
        hide->setText(QString());
        min_max->setText(QString());
        close->setText(QString());
        version_label->setText(QCoreApplication::translate("MainWindow", "NerChess v0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UNTITLEDRJGQAR_H
