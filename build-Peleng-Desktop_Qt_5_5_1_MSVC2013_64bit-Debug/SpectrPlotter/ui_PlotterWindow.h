/********************************************************************************
** Form generated from reading UI file 'PlotterWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTTERWINDOW_H
#define UI_PLOTTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../Library/QCustomPlot.h"

QT_BEGIN_NAMESPACE

class Ui_PlotterWindow
{
public:
    QAction *actionHold;
    QAction *actionSave;
    QAction *action_2;
    QAction *actionPoints;
    QAction *actionValues;
    QAction *actionInterplol;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *PlotWidget;
    QMenuBar *menuBar;
    QMenu *menuSpectrum;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PlotterWindow)
    {
        if (PlotterWindow->objectName().isEmpty())
            PlotterWindow->setObjectName(QStringLiteral("PlotterWindow"));
        PlotterWindow->resize(518, 360);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        PlotterWindow->setPalette(palette);
        actionHold = new QAction(PlotterWindow);
        actionHold->setObjectName(QStringLiteral("actionHold"));
        actionHold->setCheckable(true);
        actionHold->setChecked(false);
        actionSave = new QAction(PlotterWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        action_2 = new QAction(PlotterWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        actionPoints = new QAction(PlotterWindow);
        actionPoints->setObjectName(QStringLiteral("actionPoints"));
        actionPoints->setCheckable(true);
        actionValues = new QAction(PlotterWindow);
        actionValues->setObjectName(QStringLiteral("actionValues"));
        actionValues->setCheckable(true);
        actionInterplol = new QAction(PlotterWindow);
        actionInterplol->setObjectName(QStringLiteral("actionInterplol"));
        centralWidget = new QWidget(PlotterWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PlotWidget = new QCustomPlot(centralWidget);
        PlotWidget->setObjectName(QStringLiteral("PlotWidget"));

        verticalLayout->addWidget(PlotWidget);

        PlotterWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PlotterWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 21));
        menuSpectrum = new QMenu(menuBar);
        menuSpectrum->setObjectName(QStringLiteral("menuSpectrum"));
        menuSpectrum->setFocusPolicy(Qt::NoFocus);
        PlotterWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(PlotterWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PlotterWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSpectrum->menuAction());
        menuSpectrum->addAction(actionHold);
        menuSpectrum->addAction(actionPoints);
        menuSpectrum->addAction(actionValues);

        retranslateUi(PlotterWindow);

        QMetaObject::connectSlotsByName(PlotterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlotterWindow)
    {
        PlotterWindow->setWindowTitle(QApplication::translate("PlotterWindow", "\320\241\320\277\320\265\320\272\321\202\321\200", 0));
        actionHold->setText(QApplication::translate("PlotterWindow", "\320\235\320\260 \320\276\320\264\320\270\320\275 \320\263\321\200\320\260\321\204\320\270\320\272", 0));
        actionSave->setText(QApplication::translate("PlotterWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\321\203", 0));
        action_2->setText(QApplication::translate("PlotterWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        actionPoints->setText(QApplication::translate("PlotterWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214 \321\202\320\276\321\207\320\272\320\270 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", 0));
        actionValues->setText(QApplication::translate("PlotterWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\320\276\320\264 \320\272\321\203\321\200\321\201\320\276\321\200\320\276\320\274", 0));
        actionInterplol->setText(QApplication::translate("PlotterWindow", "\320\237\321\200\320\270\320\262\320\265\321\201\321\202\320\270 \320\272 \320\264\320\273\320\270\320\275\320\260\320\274 \320\262\320\276\320\273\320\275 \320\263\320\270\320\277\320\265\321\200\320\272\321\203\320\261\320\260", 0));
        menuSpectrum->setTitle(QApplication::translate("PlotterWindow", "\320\236\320\277\321\206\320\270\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class PlotterWindow: public Ui_PlotterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTTERWINDOW_H
