#include "histplotter.h"

#include "templatehistplot.h"
#include <QElapsedTimer>



HistPlotter::HistPlotter(HyperCube *cube, Attributes *attr)
    :  m_cube(cube)
    , m_attributes(attr)
{
    customPlot =  new QCustomPlot();
    HIST_COUNT = 100;
    connect(this,SIGNAL(replot()),SLOT(deleteLater()));
}


HistPlotter::~HistPlotter()
{
    delete customPlot;
}


void HistPlotter::plotLine(QCPAbstractPlottable *object, QMouseEvent *event)
{
    double x = object->parentPlot()->xAxis->pixelToCoord(event->pos().x());
    double y = object->parentPlot()->yAxis->pixelToCoord(event->pos().y());
    QCPItemStraightLine *line = new QCPItemStraightLine(object->parentPlot());
    line->point1->setCoords(x,y);
    line->point1->setCoords(x,y+1);
    object->parentPlot()->addItem(line);
}


void HistPlotter::mouseClick(QMouseEvent *event)
{
    if (customPlot->itemCount()!=1) {
        while (customPlot->itemCount()) {
            customPlot->removeItem(0);
        }
        double x = customPlot->xAxis->pixelToCoord(event->pos().x());
        double y = customPlot->yAxis->pixelToCoord(event->pos().y());
        QCPItemStraightLine *line = new QCPItemStraightLine(customPlot);
        line->point1->setCoords(x,y);
        line->point2->setCoords(x,y+1);
        customPlot->addItem(line);
    }
    else {
        double x = customPlot->xAxis->pixelToCoord(event->pos().x());
        //double y = customPlot->yAxis->pixelToCoord(event->pos().y());
        QCPItemRect  *rect= new QCPItemRect(customPlot);
        rect->topLeft->setCoords(((QCPItemStraightLine*)customPlot->item(0))->point1->key(),10e8);
        rect->bottomRight->setCoords(x,10e-8);
        QBrush brush(QColor(127,127,127,127));
        rect->setBrush(brush);
        customPlot->addItem(rect);
        switch (m_cube->GetFormatType()) {
            case 1: ModifyCube<qint8>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 11: ModifyCube<quint8>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 2: ModifyCube<qint16>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 22: ModifyCube<quint16>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 3: ModifyCube<qint32>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 33: ModifyCube<quint32>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 4: ModifyCube<qint64>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 44: ModifyCube<quint64>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 5: ModifyCube<float>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            case 6: ModifyCube<double>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
            default: ModifyCube<qint8>(m_cube,Channel,((QCPItemStraightLine*)customPlot->item(0))->point1->key(),x); break;
        }
        emit this->replot();
        customPlot->hide();
    }
}





void HistPlotter::Plot()
{
    customPlot->setGeometry(200,200,500,500);
    QCPBars *bars = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    customPlot->addPlottable(bars);
    customPlot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    if (m_attributes->GetPointsList().size())
    {
        Channel = m_attributes->GetPointsList().at(0).z;
    }

    if (m_cube->GetSizeChannel()-1  < Channel) Channel = m_cube->GetSizeChannel()-1;
    QVector<double> key(HIST_COUNT+1),value(HIST_COUNT+1);
    switch (m_cube->GetFormatType()) {
        case 1: CreateHistValue<qint8>(m_cube,Channel,HIST_COUNT, key, value); break;
        case 11: CreateHistValue<quint8>(m_cube,Channel,HIST_COUNT, key, value); break;
        case 2: CreateHistValue<qint16>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 22: CreateHistValue<quint16>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 3: CreateHistValue<qint32>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 33: CreateHistValue<quint32>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 4: CreateHistValue<qint64>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 44: CreateHistValue<quint64>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 5: CreateHistValue<float>(m_cube,Channel,HIST_COUNT,key, value); break;
        case 6: CreateHistValue<double>(m_cube,Channel,HIST_COUNT,key, value); break;
        default: CreateHistValue<qint8>(m_cube,Channel,HIST_COUNT,key, value); break;
    }
    bars->setData(key,value);
    customPlot->rescaleAxes();
    customPlot->setInteractions( QCP::iSelectPlottables);
    customPlot->replot();
    connect(customPlot, SIGNAL(plottableClick(QCPAbstractPlottable*,QMouseEvent*)),SLOT(plotLine(QCPAbstractPlottable*,QMouseEvent*)));
    connect(customPlot, SIGNAL(mousePress(QMouseEvent*)),SLOT(mouseClick(QMouseEvent*)));
    customPlot->show();
}



