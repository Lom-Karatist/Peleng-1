/********************************************************************************
** Form generated from reading UI file 'PolygonManager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGONMANAGER_H
#define UI_POLYGONMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolygonManager
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QGridLayout *gridButtons;
    QPushButton *buttonAddRegion;
    QPushButton *buttonAddPolygon;
    QPushButton *buttonLoadregion;
    QPushButton *buttonRemoveRegion;
    QPushButton *buttonSaveRegion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PolygonManager)
    {
        if (PolygonManager->objectName().isEmpty())
            PolygonManager->setObjectName(QStringLiteral("PolygonManager"));
        PolygonManager->resize(456, 421);
        centralwidget = new QWidget(PolygonManager);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        gridButtons = new QGridLayout();
        gridButtons->setObjectName(QStringLiteral("gridButtons"));
        buttonAddRegion = new QPushButton(centralwidget);
        buttonAddRegion->setObjectName(QStringLiteral("buttonAddRegion"));

        gridButtons->addWidget(buttonAddRegion, 2, 0, 1, 1);

        buttonAddPolygon = new QPushButton(centralwidget);
        buttonAddPolygon->setObjectName(QStringLiteral("buttonAddPolygon"));
        buttonAddPolygon->setEnabled(false);
        buttonAddPolygon->setFocusPolicy(Qt::StrongFocus);
        buttonAddPolygon->setCheckable(false);
        buttonAddPolygon->setAutoDefault(false);
        buttonAddPolygon->setFlat(false);

        gridButtons->addWidget(buttonAddPolygon, 2, 1, 1, 1);

        buttonLoadregion = new QPushButton(centralwidget);
        buttonLoadregion->setObjectName(QStringLiteral("buttonLoadregion"));

        gridButtons->addWidget(buttonLoadregion, 3, 2, 1, 1);

        buttonRemoveRegion = new QPushButton(centralwidget);
        buttonRemoveRegion->setObjectName(QStringLiteral("buttonRemoveRegion"));
        buttonRemoveRegion->setEnabled(false);

        gridButtons->addWidget(buttonRemoveRegion, 3, 0, 1, 1);

        buttonSaveRegion = new QPushButton(centralwidget);
        buttonSaveRegion->setObjectName(QStringLiteral("buttonSaveRegion"));
        buttonSaveRegion->setEnabled(false);

        gridButtons->addWidget(buttonSaveRegion, 2, 2, 1, 1);


        verticalLayout->addLayout(gridButtons);

        verticalLayout->setStretch(0, 3);
        PolygonManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PolygonManager);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 456, 21));
        PolygonManager->setMenuBar(menubar);
        statusbar = new QStatusBar(PolygonManager);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PolygonManager->setStatusBar(statusbar);

        retranslateUi(PolygonManager);

        buttonAddPolygon->setDefault(false);


        QMetaObject::connectSlotsByName(PolygonManager);
    } // setupUi

    void retranslateUi(QMainWindow *PolygonManager)
    {
        PolygonManager->setWindowTitle(QApplication::translate("PolygonManager", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202 \320\262\321\213\320\261\320\276\321\200\320\260 \320\276\320\261\320\273\320\260\321\201\321\202\320\265\320\271", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PolygonManager", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PolygonManager", "\320\246\320\262\320\265\321\202", 0));
        buttonAddRegion->setText(QApplication::translate("PolygonManager", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\263\320\270\320\276\320\275 \320\270\320\275\321\202\320\265\321\200\320\265\321\201\320\260", 0));
        buttonAddPolygon->setText(QApplication::translate("PolygonManager", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\320\270\320\263\320\276\320\275", 0));
        buttonLoadregion->setText(QApplication::translate("PolygonManager", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", 0));
        buttonRemoveRegion->setText(QApplication::translate("PolygonManager", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\265\320\263\320\270\320\276\320\275 \320\270\320\275\321\202\320\265\321\200\320\265\321\201\320\260", 0));
        buttonSaveRegion->setText(QApplication::translate("PolygonManager", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class PolygonManager: public Ui_PolygonManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGONMANAGER_H
