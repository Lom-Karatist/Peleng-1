#ifndef PLOTTERWINDOW_H
#define PLOTTERWINDOW_H

#include <QMainWindow>
#include "../../Library/QCustomPlot.h"
#include "../../Library/HyperCube.h"

namespace Ui {
class PlotterWindow;
}

class PlotterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlotterWindow(QWidget *parent = 0);
    ~PlotterWindow();

    void plotSpectr(HyperCube* ptrCube, uint dataX, uint dataY );
    bool getIsHold(){return m_hold;}
private slots:
    void on_actionHold_toggled(bool value);

private:
    bool m_hold;
    Ui::PlotterWindow *ui;
    QCustomPlot *m_customPlot;
    double minY;
    double maxY;
};

#endif // PLOTTERWINDOW_H
