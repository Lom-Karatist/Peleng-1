/********************************************************************************
** Form generated from reading UI file 'ContrastWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRASTWINDOW_H
#define UI_CONTRASTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContrastWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSlider *sliderMax;
    QSlider *sliderMin;
    QSpacerItem *verticalSpacer;
    QLabel *labelMin;
    QLabel *labelMax;
    QLabel *TextMin;
    QLabel *TextMax;

    void setupUi(QWidget *ContrastWindow)
    {
        if (ContrastWindow->objectName().isEmpty())
            ContrastWindow->setObjectName(QStringLiteral("ContrastWindow"));
        ContrastWindow->resize(425, 70);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ContrastWindow->sizePolicy().hasHeightForWidth());
        ContrastWindow->setSizePolicy(sizePolicy);
        ContrastWindow->setMinimumSize(QSize(425, 70));
        ContrastWindow->setMaximumSize(QSize(425, 70));
        verticalLayout_2 = new QVBoxLayout(ContrastWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sliderMax = new QSlider(ContrastWindow);
        sliderMax->setObjectName(QStringLiteral("sliderMax"));
        sliderMax->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderMax, 1, 2, 1, 1);

        sliderMin = new QSlider(ContrastWindow);
        sliderMin->setObjectName(QStringLiteral("sliderMin"));
        sliderMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderMin, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        labelMin = new QLabel(ContrastWindow);
        labelMin->setObjectName(QStringLiteral("labelMin"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelMin->sizePolicy().hasHeightForWidth());
        labelMin->setSizePolicy(sizePolicy1);
        labelMin->setMinimumSize(QSize(36, 0));

        gridLayout->addWidget(labelMin, 0, 1, 1, 1);

        labelMax = new QLabel(ContrastWindow);
        labelMax->setObjectName(QStringLiteral("labelMax"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelMax->sizePolicy().hasHeightForWidth());
        labelMax->setSizePolicy(sizePolicy2);
        labelMax->setMinimumSize(QSize(36, 0));

        gridLayout->addWidget(labelMax, 1, 1, 1, 1);

        TextMin = new QLabel(ContrastWindow);
        TextMin->setObjectName(QStringLiteral("TextMin"));

        gridLayout->addWidget(TextMin, 0, 0, 1, 1);

        TextMax = new QLabel(ContrastWindow);
        TextMax->setObjectName(QStringLiteral("TextMax"));

        gridLayout->addWidget(TextMax, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(ContrastWindow);
        QObject::connect(sliderMin, SIGNAL(valueChanged(int)), labelMin, SLOT(setNum(int)));
        QObject::connect(sliderMax, SIGNAL(valueChanged(int)), labelMax, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(ContrastWindow);
    } // setupUi

    void retranslateUi(QWidget *ContrastWindow)
    {
        ContrastWindow->setWindowTitle(QApplication::translate("ContrastWindow", "\320\232\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        labelMin->setText(QString());
        labelMax->setText(QString());
        TextMin->setText(QApplication::translate("ContrastWindow", "\320\234\320\270\320\275\320\270\320\274\321\203\320\274: ", 0));
        TextMax->setText(QApplication::translate("ContrastWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274: ", 0));
    } // retranslateUi

};

namespace Ui {
    class ContrastWindow: public Ui_ContrastWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRASTWINDOW_H
