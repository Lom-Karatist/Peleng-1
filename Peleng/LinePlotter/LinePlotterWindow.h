#ifndef LINEPLOTTERWINDOW_H
#define LINEPLOTTERWINDOW_H

#include <QMainWindow>
#include "../Library/QCustomPlot.h"
#include "../Library/HyperCube.h"

class LinePlotterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LinePlotterWindow(QWidget *parent = 0);
    ~LinePlotterWindow();
    void plotSpectrLine(HyperCube* pCube, uint x1, uint x2, uint y1, uint y2, uint z1, uint z2);

protected:
    void closeEvent(QCloseEvent *);

signals:
    void closeLinePlotterWindow(LinePlotterWindow*);

private:

    void setupUI();
    QWidget *centralWidget;
    QCustomPlot* m_customPlot;
    QVBoxLayout *verticalLayout;
    QAction *actionHold;
    QMenuBar *menuBar;
    QMenu *menuLine;
    bool m_hold;
};

#endif // LINEPLOTTERWINDOW_H
