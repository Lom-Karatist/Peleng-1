/********************************************************************************
** Form generated from reading UI file 'Main2DWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN2DWINDOW_H
#define UI_MAIN2DWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../Library/QCustomPlot.h"

QT_BEGIN_NAMESPACE

class Ui_Main2DWindow
{
public:
    QAction *actionInterpolation;
    QAction *polygonTool;
    QAction *action_saveENVI;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSlider *SliderContrastMin;
    QSlider *SliderContrastMax;
    QLabel *LeftVal;
    QLabel *rightVal;
    QFrame *frameCustomPlot;
    QGridLayout *gridLayout_2;
    QCustomPlot *customPlot;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QMenu *subMenuImage;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Main2DWindow)
    {
        if (Main2DWindow->objectName().isEmpty())
            Main2DWindow->setObjectName(QStringLiteral("Main2DWindow"));
        Main2DWindow->resize(867, 511);
        actionInterpolation = new QAction(Main2DWindow);
        actionInterpolation->setObjectName(QStringLiteral("actionInterpolation"));
        actionInterpolation->setCheckable(true);
        polygonTool = new QAction(Main2DWindow);
        polygonTool->setObjectName(QStringLiteral("polygonTool"));
        action_saveENVI = new QAction(Main2DWindow);
        action_saveENVI->setObjectName(QStringLiteral("action_saveENVI"));
        centralwidget = new QWidget(Main2DWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(150, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(50, 0));

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        SliderContrastMin = new QSlider(frame_2);
        SliderContrastMin->setObjectName(QStringLiteral("SliderContrastMin"));
        SliderContrastMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderContrastMin, 0, 1, 1, 1);

        SliderContrastMax = new QSlider(frame_2);
        SliderContrastMax->setObjectName(QStringLiteral("SliderContrastMax"));
        SliderContrastMax->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderContrastMax, 1, 1, 1, 1);

        LeftVal = new QLabel(frame_2);
        LeftVal->setObjectName(QStringLiteral("LeftVal"));
        LeftVal->setMinimumSize(QSize(25, 0));

        gridLayout->addWidget(LeftVal, 0, 0, 1, 1);

        rightVal = new QLabel(frame_2);
        rightVal->setObjectName(QStringLiteral("rightVal"));

        gridLayout->addWidget(rightVal, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        frameCustomPlot = new QFrame(frame_2);
        frameCustomPlot->setObjectName(QStringLiteral("frameCustomPlot"));
        frameCustomPlot->setFrameShape(QFrame::NoFrame);
        frameCustomPlot->setFrameShadow(QFrame::Plain);
        frameCustomPlot->setLineWidth(1);
        gridLayout_2 = new QGridLayout(frameCustomPlot);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        customPlot = new QCustomPlot(frameCustomPlot);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);
        customPlot->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_2->addWidget(customPlot, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        gridLayout_2->setRowStretch(1, 999);
        gridLayout_2->setColumnStretch(1, 999);

        verticalLayout_2->addWidget(frameCustomPlot);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 8);

        horizontalLayout->addWidget(frame_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        Main2DWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Main2DWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Main2DWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(Main2DWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 867, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        subMenuImage = new QMenu(menuOptions);
        subMenuImage->setObjectName(QStringLiteral("subMenuImage"));
        Main2DWindow->setMenuBar(menubar);
        toolBar = new QToolBar(Main2DWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Main2DWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(subMenuImage->menuAction());
        menuOptions->addAction(polygonTool);
        menuOptions->addAction(action_saveENVI);
        subMenuImage->addAction(actionInterpolation);

        retranslateUi(Main2DWindow);
        QObject::connect(SliderContrastMin, SIGNAL(valueChanged(int)), LeftVal, SLOT(setNum(int)));
        QObject::connect(SliderContrastMax, SIGNAL(valueChanged(int)), rightVal, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Main2DWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Main2DWindow)
    {
        Main2DWindow->setWindowTitle(QApplication::translate("Main2DWindow", "\320\232\320\260\320\275\320\260\320\273\321\213 \320\263\320\270\320\277\320\265\321\200\320\272\321\203\320\261\320\260", 0));
        actionInterpolation->setText(QApplication::translate("Main2DWindow", "\320\230\320\275\321\202\320\265\321\200\320\277\320\276\320\273\321\217\321\206\320\270\321\217", 0));
        polygonTool->setText(QApplication::translate("Main2DWindow", "\320\222\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\276\320\261\320\273\320\260\321\201\321\202\320\270", 0));
        action_saveENVI->setText(QApplication::translate("Main2DWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202 ENVI", 0));
        LeftVal->setText(QString());
        rightVal->setText(QString());
        menuOptions->setTitle(QApplication::translate("Main2DWindow", "\320\236\320\277\321\206\320\270\320\270", 0));
        subMenuImage->setTitle(QApplication::translate("Main2DWindow", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", 0));
        toolBar->setWindowTitle(QApplication::translate("Main2DWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Main2DWindow: public Ui_Main2DWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN2DWINDOW_H
