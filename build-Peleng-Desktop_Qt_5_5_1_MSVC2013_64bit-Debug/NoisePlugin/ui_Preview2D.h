/********************************************************************************
** Form generated from reading UI file 'Preview2D.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEW2D_H
#define UI_PREVIEW2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preview2D
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameSliders;
    QGridLayout *gridLayout;
    QSlider *SliderMin;
    QSlider *SliderMax;
    QLabel *labelMin;
    QLabel *labelMax;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *Preview2D)
    {
        if (Preview2D->objectName().isEmpty())
            Preview2D->setObjectName(QStringLiteral("Preview2D"));
        Preview2D->resize(738, 638);
        QIcon icon;
        QString iconThemeName = QStringLiteral("title");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        Preview2D->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Preview2D);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameSliders = new QFrame(Preview2D);
        frameSliders->setObjectName(QStringLiteral("frameSliders"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameSliders->sizePolicy().hasHeightForWidth());
        frameSliders->setSizePolicy(sizePolicy);
        frameSliders->setFrameShape(QFrame::StyledPanel);
        frameSliders->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameSliders);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SliderMin = new QSlider(frameSliders);
        SliderMin->setObjectName(QStringLiteral("SliderMin"));
        SliderMin->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderMin, 0, 1, 1, 1);

        SliderMax = new QSlider(frameSliders);
        SliderMax->setObjectName(QStringLiteral("SliderMax"));
        SliderMax->setValue(0);
        SliderMax->setOrientation(Qt::Horizontal);
        SliderMax->setTickPosition(QSlider::NoTicks);

        gridLayout->addWidget(SliderMax, 1, 1, 1, 1);

        labelMin = new QLabel(frameSliders);
        labelMin->setObjectName(QStringLiteral("labelMin"));
        labelMin->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(labelMin, 0, 0, 1, 1);

        labelMax = new QLabel(frameSliders);
        labelMax->setObjectName(QStringLiteral("labelMax"));
        labelMax->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(labelMax, 1, 0, 1, 1);


        verticalLayout->addWidget(frameSliders);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(Preview2D);
        QObject::connect(SliderMin, SIGNAL(valueChanged(int)), labelMin, SLOT(setNum(int)));
        QObject::connect(SliderMax, SIGNAL(valueChanged(int)), labelMax, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Preview2D);
    } // setupUi

    void retranslateUi(QWidget *Preview2D)
    {
        Preview2D->setWindowTitle(QApplication::translate("Preview2D", "Form", 0));
        labelMin->setText(QString());
        labelMax->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Preview2D: public Ui_Preview2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEW2D_H
