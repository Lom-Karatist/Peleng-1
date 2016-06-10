/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *OpenFileAction;
    QAction *ExitAction;
    QAction *CreateTableAction;
    QAction *PlotHeatMapAction;
    QAction *CreateProjectAction;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_fileProjectInfo;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget_infoProject;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_Actions;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_loadCube;
    QPushButton *pushButton_loadAvirisData;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(751, 624);
        OpenFileAction = new QAction(MainWindow);
        OpenFileAction->setObjectName(QStringLiteral("OpenFileAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/tab/icons/Open Folder-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenFileAction->setIcon(icon);
        OpenFileAction->setIconVisibleInMenu(true);
        ExitAction = new QAction(MainWindow);
        ExitAction->setObjectName(QStringLiteral("ExitAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/tab/icons/Exit-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExitAction->setIcon(icon1);
        CreateTableAction = new QAction(MainWindow);
        CreateTableAction->setObjectName(QStringLiteral("CreateTableAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/tab/icons/Data Sheet-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        CreateTableAction->setIcon(icon2);
        PlotHeatMapAction = new QAction(MainWindow);
        PlotHeatMapAction->setObjectName(QStringLiteral("PlotHeatMapAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/tab/icons/Heat Map-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        PlotHeatMapAction->setIcon(icon3);
        CreateProjectAction = new QAction(MainWindow);
        CreateProjectAction->setObjectName(QStringLiteral("CreateProjectAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_fileProjectInfo = new QWidget(centralWidget);
        widget_fileProjectInfo->setObjectName(QStringLiteral("widget_fileProjectInfo"));
        horizontalLayout_2 = new QHBoxLayout(widget_fileProjectInfo);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listWidget_infoProject = new QListWidget(widget_fileProjectInfo);
        listWidget_infoProject->setObjectName(QStringLiteral("listWidget_infoProject"));
        listWidget_infoProject->setMinimumSize(QSize(450, 0));

        horizontalLayout_2->addWidget(listWidget_infoProject);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addWidget(widget_fileProjectInfo);

        widget_Actions = new QWidget(centralWidget);
        widget_Actions->setObjectName(QStringLiteral("widget_Actions"));
        verticalLayout = new QVBoxLayout(widget_Actions);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_loadCube = new QPushButton(widget_Actions);
        pushButton_loadCube->setObjectName(QStringLiteral("pushButton_loadCube"));

        verticalLayout->addWidget(pushButton_loadCube);

        pushButton_loadAvirisData = new QPushButton(widget_Actions);
        pushButton_loadAvirisData->setObjectName(QStringLiteral("pushButton_loadAvirisData"));

        verticalLayout->addWidget(pushButton_loadAvirisData);


        horizontalLayout->addWidget(widget_Actions);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(OpenFileAction);
        menu->addAction(CreateProjectAction);
        menu->addAction(ExitAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\260\321\202\320\270\320\272-\320\230\320\275\321\204\320\276 \320\262\320\265\321\200\321\201\320\270\321\217 1.1", 0));
        OpenFileAction->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        OpenFileAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        ExitAction->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        ExitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        CreateTableAction->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\275\320\260\320\273", 0));
        PlotHeatMapAction->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272 \320\272\320\260\320\275\320\260\320\273\320\260", 0));
        CreateProjectAction->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        pushButton_loadCube->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \n"
" \320\263\320\270\320\277\320\265\321\200\320\272\321\203\320\261", 0));
        pushButton_loadAvirisData->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 Aviris\n"
" \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
