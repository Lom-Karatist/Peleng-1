#include "histplotterwidget.h"
#include "ui_histplotterwidget.h"

#include "templatehistplot.h"



HistPlotterWidget::HistPlotterWidget(HyperCube *cube, Attributes *attr, QWidget *parent) :
    QDialog(parent),  m_cube(cube), bars2(0),
    m_attributes(attr),
    ui(new Ui::HistPlotterWidget)
{
    ui->setupUi(this);
    HIST_COUNT = 100;
    leftLine = new QCPItemStraightLine(ui->beforeCustomPlot);
    ui->beforeCustomPlot->addItem(leftLine);

    rigthLine = new QCPItemStraightLine(ui->beforeCustomPlot);
    ui->beforeCustomPlot->addItem(rigthLine);


    bars = new QCPBars( ui->beforeCustomPlot->xAxis,  ui->beforeCustomPlot->yAxis);
    ui->beforeCustomPlot->addPlottable(bars);
    ui->beforeCustomPlot->yAxis->setScaleType(QCPAxis::stLogarithmic);

    bars2 = new QCPBars( ui->afterCustomPlot->xAxis,  ui->afterCustomPlot->yAxis);
    ui->afterCustomPlot->addPlottable(bars2);
    ui->afterCustomPlot->yAxis->setScaleType(QCPAxis::stLogarithmic);

    PlotDefault();

    ui->sumBoundaryChBox->setChecked(true);
    this->sumBoundary();


}

HistPlotterWidget::~HistPlotterWidget()
{
    emit Close(this);
    delete ui;
}

void HistPlotterWidget::accept()
{
    if (ui->sumBoundaryChBox->isChecked()) sumBoundary(true);
    else if (ui->gaussChBox->isChecked())  Gauss(true);
    QDialog::accept();
}


void  HistPlotterWidget::OnClose()
{

}


void HistPlotterWidget::PlotDefault()
{


    if (m_attributes->GetPointsList().size())
    {
        Channel = m_attributes->GetPointsList().at(0).z;
    }



    if (m_cube->GetSizeChannel()-1  < Channel) Channel = m_cube->GetSizeChannel()-1;
    QVector<double> key(HIST_COUNT+1),value(HIST_COUNT+1);
    switch (m_cube->GetFormatType()) {
        case type_int8: SumBoundary<qint8>(m_cube,Channel,HIST_COUNT, key, value, m_attributes); break;
        case type_uint8: SumBoundary<quint8>(m_cube,Channel,HIST_COUNT, key, value, m_attributes); break;
        case type_int16: SumBoundary<qint16>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_uint16: SumBoundary<quint16>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_int32: SumBoundary<qint32>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_uint32: SumBoundary<quint32>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_int64: SumBoundary<qint64>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_uint64: SumBoundary<quint64>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_float: SumBoundary<float>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        case type_double: SumBoundary<double>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
        default: SumBoundary<qint8>(m_cube,Channel,HIST_COUNT,key, value, m_attributes); break;
    }
    bars->setData(key,value);


    ui->beforeCustomPlot->rescaleAxes();
    ui->beforeCustomPlot->yAxis->setTickLabels(false);
    ui->beforeCustomPlot->replot();




    ui->leftSlider->setMaximum(ui->beforeCustomPlot->xAxis->range().upper);
    ui->rightSlider->setMaximum(ui->beforeCustomPlot->xAxis->range().upper);
    ui->rightSlider->setValue(ui->beforeCustomPlot->xAxis->range().upper);



    leftLine->point1->setCoords(0,0);
    leftLine->point2->setCoords(0,1);

    rigthLine->point1->setCoords(ui->beforeCustomPlot->xAxis->range().upper,0);
    rigthLine->point2->setCoords(ui->beforeCustomPlot->xAxis->range().upper,ui->beforeCustomPlot->yAxis->range().upper);


}

void HistPlotterWidget::on_leftSlider_sliderMoved(int position)
{
    leftLine->point1->setCoords(position,0);
    leftLine->point2->setCoords(position,ui->beforeCustomPlot->yAxis->range().upper);\
    ui->beforeCustomPlot->replot();
}



void HistPlotterWidget::on_rightSlider_sliderMoved(int position)
{
    rigthLine->point1->setCoords(position,0);
    rigthLine->point2->setCoords(position,ui->beforeCustomPlot->yAxis->range().upper);
    ui->beforeCustomPlot->replot();
}




void HistPlotterWidget::on_leftSlider_valueChanged(int value)
{
    if (ui->sumBoundaryChBox->isChecked()) sumBoundary();
    else if (ui->gaussChBox->isChecked())  Gauss();

}

void HistPlotterWidget::on_rightSlider_valueChanged(int value)
{
    if (ui->sumBoundaryChBox->isChecked()) sumBoundary();
    else if (ui->gaussChBox->isChecked())  Gauss();

}

void HistPlotterWidget::sumBoundary(bool updateAttributes)
{
    if (bars2) {
    bars2->data()->clear();
    QVector<double> key(HIST_COUNT+1),value(HIST_COUNT+1);
    qint32 leftBoundary = leftLine->point1->coords().x();
    qint32 rightBoundary = rigthLine->point1->coords().x();


    Attributes *attr = 0;
    if (updateAttributes) attr=m_attributes;

    switch (m_cube->GetFormatType()) {
        case type_int8: SumBoundary<qint8>(m_cube,Channel,HIST_COUNT, key, value, attr, leftBoundary, rightBoundary); break;
        case type_uint8: SumBoundary<quint8>(m_cube,Channel,HIST_COUNT, key, value, attr, leftBoundary, rightBoundary); break;
        case type_int16: SumBoundary<qint16>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_uint16: SumBoundary<quint16>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_int32: SumBoundary<qint32>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_uint32: SumBoundary<quint32>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_int64: SumBoundary<qint64>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_uint64: SumBoundary<quint64>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_float: SumBoundary<float>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        case type_double: SumBoundary<double>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
        default: SumBoundary<qint8>(m_cube,Channel,HIST_COUNT,key, value, attr, leftBoundary, rightBoundary); break;
    }
    bars2->setData(key,value);
    ui->afterCustomPlot->rescaleAxes();
    ui->afterCustomPlot->xAxis->setRange(leftBoundary,rightBoundary);
    ui->afterCustomPlot->yAxis->setTickLabels(false);
    ui->afterCustomPlot->replot();
    }
}


void HistPlotterWidget::Gauss(bool updateAttributes) {
    if (bars2) {
    bars2->data()->clear();
    QVector<double> key(HIST_COUNT+1),value(HIST_COUNT+1);
    qint32 x = leftLine->point1->coords().x();
    qint32 y = rigthLine->point1->coords().x();

    Attributes *attr = 0;
    if (updateAttributes) attr=m_attributes;

    switch (m_cube->GetFormatType()) {
        case type_int8: Gaussian<qint8>(m_cube,Channel,HIST_COUNT, key, value, x, y, attr); break;
        case type_uint8: Gaussian<quint8>(m_cube,Channel,HIST_COUNT, key, value, x, y, attr); break;
        case type_int16: Gaussian<qint16>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_uint16: Gaussian<quint16>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_int32: Gaussian<qint32>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_uint32: Gaussian<quint32>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_int64: Gaussian<qint64>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_uint64: Gaussian<quint64>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_float: Gaussian<float>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        case type_double: Gaussian<double>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
        default: Gaussian<qint8>(m_cube,Channel,HIST_COUNT,key, value, x, y, attr); break;
    }
    bars2->setData(key,value);
    ui->afterCustomPlot->rescaleAxes();
    //ui->afterCustomPlot->xAxis->setRange(ymin, ymax);
    ui->afterCustomPlot->yAxis->setTickLabels(false);
    ui->afterCustomPlot->replot();
    }
}


void HistPlotterWidget::on_gaussChBox_clicked(bool checked)
{
    if (checked) Gauss();
}

void HistPlotterWidget::on_sumBoundaryChBox_clicked(bool checked)
{
    if (checked) sumBoundary();
}