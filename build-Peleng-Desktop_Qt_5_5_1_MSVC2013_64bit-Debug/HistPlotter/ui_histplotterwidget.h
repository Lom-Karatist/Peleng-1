/********************************************************************************
** Form generated from reading UI file 'histplotterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTPLOTTERWIDGET_H
#define UI_HISTPLOTTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include "../Library/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_HistPlotterWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QRadioButton *gaussChBox;
    QRadioButton *sumBoundaryChBox;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *beforeCustomPlot;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QSlider *leftSlider;
    QSlider *rightSlider;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *afterCustomPlot;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HistPlotterWidget)
    {
        if (HistPlotterWidget->objectName().isEmpty())
            HistPlotterWidget->setObjectName(QStringLiteral("HistPlotterWidget"));
        HistPlotterWidget->resize(616, 479);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons2Dcube/icons/histogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        HistPlotterWidget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HistPlotterWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(HistPlotterWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gaussChBox = new QRadioButton(groupBox_3);
        gaussChBox->setObjectName(QStringLiteral("gaussChBox"));

        gridLayout->addWidget(gaussChBox, 0, 1, 1, 1);

        sumBoundaryChBox = new QRadioButton(groupBox_3);
        sumBoundaryChBox->setObjectName(QStringLiteral("sumBoundaryChBox"));

        gridLayout->addWidget(sumBoundaryChBox, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        frame = new QFrame(HistPlotterWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        beforeCustomPlot = new QCustomPlot(groupBox);
        beforeCustomPlot->setObjectName(QStringLiteral("beforeCustomPlot"));

        verticalLayout_2->addWidget(beforeCustomPlot);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        leftSlider = new QSlider(frame_2);
        leftSlider->setObjectName(QStringLiteral("leftSlider"));
        leftSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(leftSlider);

        rightSlider = new QSlider(frame_2);
        rightSlider->setObjectName(QStringLiteral("rightSlider"));
        rightSlider->setValue(99);
        rightSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(rightSlider);


        verticalLayout_2->addWidget(frame_2);

        verticalLayout_2->setStretch(0, 1);

        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        afterCustomPlot = new QCustomPlot(groupBox_2);
        afterCustomPlot->setObjectName(QStringLiteral("afterCustomPlot"));

        verticalLayout_3->addWidget(afterCustomPlot);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(HistPlotterWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(1, 1);

        retranslateUi(HistPlotterWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), HistPlotterWidget, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HistPlotterWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(HistPlotterWidget);
    } // setupUi

    void retranslateUi(QDialog *HistPlotterWidget)
    {
        HistPlotterWidget->setWindowTitle(QApplication::translate("HistPlotterWidget", "\320\232\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        groupBox_3->setTitle(QApplication::translate("HistPlotterWidget", "\320\232\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        gaussChBox->setText(QApplication::translate("HistPlotterWidget", "\320\223\320\260\321\203\321\201\321\201\320\276\320\262\320\276", 0));
        sumBoundaryChBox->setText(QApplication::translate("HistPlotterWidget", "\320\241\321\203\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\320\260\320\275\320\270\321\206", 0));
        groupBox->setTitle(QApplication::translate("HistPlotterWidget", "\320\224\320\276 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0));
        groupBox_2->setTitle(QApplication::translate("HistPlotterWidget", "\320\237\320\276\321\201\320\273\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class HistPlotterWidget: public Ui_HistPlotterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTPLOTTERWIDGET_H
