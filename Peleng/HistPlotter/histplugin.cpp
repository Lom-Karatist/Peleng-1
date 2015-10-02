#include "histplugin.h"

#include "../Library/QCustomPlot.h"
#include <QDebug>
#include "selectedline.h"




HistPlugin::HistPlugin(QObject *parent) : QObject(parent)
{

}





void HistPlugin::Execute(HyperCube *cube, IAttributes *attr)
{

    QCustomPlot *customPlot =  new QCustomPlot();
    customPlot->setGeometry(200,200,500,500);

    QCPBars *bars = new QCPBars(customPlot->xAxis, customPlot->yAxis);

    //line->setClipToAxisRect(false);



    customPlot->addPlottable(bars);
    customPlot->yAxis->setScaleType(QCPAxis::stLogarithmic);





    qint16 minValue = SHRT_MAX;
    qint16 maxValue = SHRT_MIN;
    qint16 *data = new qint16[cube->GetSizeChannel()];
    for (unsigned int i = 0; i < cube->GetCountofChannels(); i++) {
        cube->GetDataChannel(i,data);
        for (unsigned int j = 0; j <cube->GetSizeChannel(); j++ ) {
            if (data[i]==-50) continue;
            if (maxValue <= data[j]) maxValue = data[j];
            if (minValue >= data[j]) minValue = data[j];
        }
    }



    int step = (maxValue-minValue)/100;
    QVector<double> key,value;
    for (int k =0; k<100; k++) {
        key.append(maxValue+k*step);
        value.append(0);
    }


    for (unsigned int i = 0; i < cube->GetCountofChannels(); i++) {
            cube->GetDataChannel(i,data);
            for (unsigned int j = 0; j <cube->GetSizeChannel(); j++ ) {
                if (data[i]==-50) continue;
                value[100*data[j]/(maxValue-minValue)]++;
           }
    }



    bars->setData(key,value);
    customPlot->rescaleAxes();
    customPlot->replot();

    delete[] data;

    SelectedLine *line = new SelectedLine(customPlot);
    line->setSelectable(true);
    customPlot->addItem(line);

    line->setSelected(true);



    customPlot->show();
}


