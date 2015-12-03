#include "Preview2D.h"
#include "ui_Preview2D.h"

#include "../Library/Utils/Compare.h"
#include "../Library/Types.h"

Preview2D::Preview2D(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Preview2D)
{
    m_ui->setupUi(this);
    m_cPlot = new QCustomPlot(this);
    m_ui->verticalLayout_2->addWidget(m_cPlot);

    //TODO
    //setWindowIcon(QIcon(":/logo/IconsPlotter/PlotterLogo.ico"));
    setAttribute(Qt::WA_DeleteOnClose, true);
}

Preview2D::~Preview2D()
{
    delete m_ui;
}

void Preview2D::Plot(double* data, const int rows, const int cols, const int numberOfActiveChannel)
{
    qDebug() << "start Plot Noise";
    if(rows>cols)
         this->resize(this->width(), this->width() * cols / rows);
    else
        this->resize(this->width() * rows / cols, this->width() );
    setWindowTitle(QString("Предпросмотр изображения канала: %1 канал").arg(numberOfActiveChannel));
    int minCMap =  32767;
    int maxCMap = -32767;
    QCPColorMap* colorMap = new QCPColorMap(m_cPlot->xAxis, m_cPlot->yAxis);
    colorMap->setKeyAxis(m_cPlot->xAxis);
    colorMap->setValueAxis(m_cPlot->yAxis);
    colorMap->data()->setSize(rows, cols);
    colorMap->data()->setRange(QCPRange(0, rows-1), QCPRange(0, cols-1));
    qDebug()<<"colorMap setSize";
    m_cPlot->addPlottable(colorMap);
    for (u::uint32 x = 0; x < rows; x++) {
        for (u::uint32 y = 0; y < cols; y++) {
            colorMap->data()->setCell(x, y, data[x * cols + y] );
        }
    }
    qsort(data, rows*cols, sizeof(double), Compare::CompareVariables<double>);
    qDebug()<<"qsort";
    minCMap = data[int(rows*cols*0.02)];
    maxCMap = data[int(rows*cols*0.98)];
    m_cPlot->rescaleAxes();
    colorMap->rescaleDataRange(true);
    colorMap->setDataRange(QCPRange(minCMap,maxCMap));
    colorMap->setGradient(QCPColorGradient::gpGrayscale);
    colorMap->setInterpolate(false);
    m_cPlot->setInteraction(QCP::iRangeZoom,true);
    m_cPlot->setInteraction(QCP::iRangeDrag,true);
    m_cPlot->replot();
    this->show();
    qDebug() << "finish plot noise";;

}
