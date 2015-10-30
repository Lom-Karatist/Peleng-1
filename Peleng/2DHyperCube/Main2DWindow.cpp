#include "Main2DWindow.h"
#include "ui_Main2DWindow.h"

int cmp2(const void *a, const void *b);

Main2DWindow::Main2DWindow(HyperCube* cube, Attributes *attr, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main2DWindow)
    , m_initChanel(0)
    , m_dataX(0)
    , m_dataY(0)
    , firstWindowPlotter(true)
     ,m_pCube(cube)
    , m_attributes(attr)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    pStatusBarLabel = new QLabel(this);
    ui->statusbar->addWidget(pStatusBarLabel);
    this->setWindowIcon(QIcon(":/IconsCube/iconsCube/Heat Map-50.png"));//!!! почему-то можно поставить иконку только из qrc файла проекта 3Dcube (наверное, надо заинклудить qrc 2d куба в 3d проект)
    QPropertyAnimation* panim = new QPropertyAnimation(this, "windowOpacity");
    panim->setDuration(300);
    panim->setStartValue(0);
    panim->setEndValue(1);
    panim->setEasingCurve(QEasingCurve::InCirc);
    panim->start(QAbstractAnimation::DeleteWhenStopped);

    setInitCustomplotSettings();
    createMenus();
    setHyperCube(m_pCube);
    initArrChanLimits();
    fillChanList();
    if (m_attributes->GetPointsList().size())
    {
        setInitChanel(m_attributes->GetPointsList().at(0).z);
    }
    connect(ui->actionInterpolation,SIGNAL(toggled(bool)),SLOT(toggledActionInterpolation(bool)));
    connect(ui->customPlot,SIGNAL(customContextMenuRequested(QPoint)),SLOT(contextMenuRequest(QPoint)));
    //connect(ui->customPlot,SIGNAL(mousePress(QMouseEvent*)),SLOT(prepareToPlotSpectr())); //сделать как в GLwidget
    //connect(ui->customPlot,SIGNAL(plottableClick(QCPAbstractPlottable*,QMouseEvent*)),SLOT(colorMapClicked(QCPAbstractPlottable*,QMouseEvent*)));
    connect(ui->customPlot,SIGNAL(mouseMove(QMouseEvent*)),SLOT(mouseMoveOnColorMap(QMouseEvent*)));
    connect(ui->customPlot,SIGNAL(mousePress(QMouseEvent*)),SLOT(mousePressOnColorMap(QMouseEvent*)));

    ui->listWidget->setCurrentRow(m_initChanel);
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),SLOT(updateViewchan(int))); //раскомментить
    ui->listWidget->item(m_initChanel)->setSelected(true);
    ui->listWidget->setFocus();
    ui->listWidget->scrollToItem(ui->listWidget->item(m_initChanel));

    //проверить
    int minCMap, maxCMap;
    findMinMaxforColorMap(m_initChanel,minCMap, maxCMap);
    drawHeatMap(m_initChanel,minCMap, maxCMap);

}

Main2DWindow::~Main2DWindow()
{
    delete ui;
}

void Main2DWindow::setInitChanel(u::uint32 initChanel)
{
    m_initChanel = initChanel;
    ui->listWidget->item(m_initChanel)->setSelected(true);
    ui->listWidget->setFocus();
    ui->listWidget->scrollToItem(ui->listWidget->item(m_initChanel));
    //или update
    int minCMap, maxCMap;
    findMinMaxforColorMap(m_initChanel,minCMap, maxCMap);
    drawHeatMap(m_initChanel,minCMap, maxCMap);
}

void Main2DWindow::setHyperCube(HyperCube *ptrCube)
{
    m_pCube = ptrCube;
    rows = m_pCube->GetLines();
    cols = m_pCube->GetColumns();
    chnls = m_pCube->GetCountofChannels();
    data = (qint16**)ptrCube->GetDataCube();
    colorMap->data()->setSize(rows, cols);
    colorMap->data()->setRange(QCPRange(0, rows-1), QCPRange(0, cols-1));
    QSize mainSize = this->size();
    this->resize(mainSize.width()*1.5, mainSize.width() * cols / rows*1.5);
//    ui->customPlot->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Fixed);
//    ui->customPlot->resize(CPlotSize.width() ,CPlotSize.width() * cols / rows);
}

void Main2DWindow::setInitCustomplotSettings()
{
    colorMap = new QCPColorMap(ui->customPlot->xAxis, ui->customPlot->yAxis);
    ui->customPlot->yAxis->setTicks(false);
    ui->customPlot->xAxis->setTicks(false);
    ui->customPlot->xAxis->setTickLabels(false);
    ui->customPlot->yAxis->setTickLabels(false);
    ui->customPlot->xAxis->setVisible(false);
    ui->customPlot->yAxis->setVisible(false);
    ui->customPlot->axisRect()->setAutoMargins(QCP::msNone);
    ui->customPlot->axisRect()->setMargins(QMargins(0,0,0,-1));// -1 устраняет баг с полосой белых пикселей при 0
    colorMap->setKeyAxis(ui->customPlot->xAxis);
    colorMap->setValueAxis(ui->customPlot->yAxis);
    ui->customPlot->addPlottable(colorMap);
    ui->customPlot->setInteraction(QCP::iRangeDrag , true);
    ui->customPlot->setInteraction(QCP::iRangeZoom  , true);
    colorMap->setGradient(QCPColorGradient::gpGrayscale);
    colorMap->rescaleDataRange(true);

}
void Main2DWindow::fillChanList()
{
    QList<double> list = m_pCube->GetListOfChannels();
    int num = 0;
    foreach(double i , list) {
        ui->listWidget->addItem(QString("%1 - %2 нм").arg(num).arg(i));
        num++;
    }

}

void Main2DWindow::initArrChanLimits()
{
    ChnlLimits = new int*[chnls];
    for (int i = 0; i < chnls; ++i)
        ChnlLimits[i] = new int[2];

    for (int i = 0; i < chnls; ++i)
    {
        ChnlLimits[i][0] = 0;
        ChnlLimits[i][1] = 0;
    }
}

void Main2DWindow::drawHeatMap(int chan, int minCMap, int maxCMap)
{
    qint16 *dat =  new qint16[rows * cols];
    m_pCube->GetDataChannel(chan,dat);
    for (int x=0; x < rows; ++x) {
        for (int y=0; y < cols; ++y) {
            colorMap->data()->setCell(x, y,dat[x * cols + y] );
        }
    }
    ui->customPlot->rescaleAxes();
    colorMap->setInterpolate(m_interplolate);
    colorMap->setDataRange(QCPRange(minCMap,maxCMap));

    ui->customPlot->replot();
    delete dat;
}
void Main2DWindow::findMinMaxforColorMap(int chan, int &minCMap, int &maxCMap,float thresholdLow,float thresholdHigh)
//thresholdLow = 0.02 (первые 2% игнорируются), thresholdHigh = 0.98
{
    minCMap =  32767;
    maxCMap = -32767;
    qint16 *dataTemp = new qint16[rows*cols];
    for (int j = 0; j<rows*cols; ++j)
        dataTemp[j]=data[chan][j];
    QElapsedTimer timer3;
    timer3.start();
    qsort(dataTemp,cols*rows,sizeof(qint16),cmp2);
    qDebug()<<"сортировка"<<timer3.elapsed()<< " мс";
    minCMap = dataTemp[int(rows*cols*thresholdLow)];
    maxCMap = dataTemp[int(rows*cols*thresholdHigh)];
    delete[] dataTemp;
}

int cmp2(const void *a, const void *b)
{
    const qint16 *pa = (const qint16*)a;
    const qint16 *pb = (const qint16*)b;
    if (*pa < *pb)
        return -1;
    else if (*pa > *pb)
        return +1;
    else
        return 0;
}

void Main2DWindow::updateViewchan(int chan)
{
    if(ChnlLimits[chan][0] == 0 || ChnlLimits[chan][1] == 0 )
    {
        int minCMap, maxCMap;
        findMinMaxforColorMap(chan,minCMap, maxCMap);
        ChnlLimits[chan][0] = minCMap;
        ChnlLimits[chan][1] = maxCMap;
    }

    drawHeatMap(chan,ChnlLimits[chan][0], ChnlLimits[chan][1]);
}

void Main2DWindow::contrastImage(int left, int right)//left,right -  левая и правая граница гистограммы каналла. Т.е. 2 значения яркостей в data
{
    int chan = ui->listWidget->currentRow();
    if (left > right)
        std::swap(left,right);
    ChnlLimits[chan][0] = left;
    ChnlLimits[chan][1] = right;
    updateViewchan(chan);
    qDebug()<<"slot contrast "<<left<<" "<<right;
}

void Main2DWindow::plotPointsOn2D(QVector<double> x, QVector<double> y)
{
    ui->customPlot->clearGraphs(); //удаляем предыдущий график
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setData(x, y);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsNone);
    QCPScatterStyle myScatter;
    myScatter.setShape(QCPScatterStyle::ssCircle);
    myScatter.setPen(QPen(Qt::red));
    myScatter.setBrush(Qt::yellow);
    //myScatter.setSize(5);
    ui->customPlot->graph()->setScatterStyle(myScatter);
    ui->customPlot->replot();
}


void Main2DWindow::mousePressOnColorMap( QMouseEvent *e)
{
    int x = this->ui->customPlot->xAxis->pixelToCoord(e->pos().x());
    int y = this->ui->customPlot->yAxis->pixelToCoord(e->pos().y());
    if (x >= 0 && x < rows)
        m_dataX = x;
    if (y >= 0 && y < cols)
        m_dataY = y;
    emit signalCurrentDataXY(m_dataX,m_dataY);//Отправляем сигнал с координатами клика



    //тест отбражения точек, потом удалить
    int n = 100;
    QVector<double> xP(n), yP(n);
    for (int i=0; i<n; ++i)
    {
      xP[i] = rand()%rows;
      yP[i] = rand()%cols;
    }
    plotPointsOn2D(xP,yP);

}

void Main2DWindow::mouseMoveOnColorMap(QMouseEvent *e)
{
    int x = this->ui->customPlot->xAxis->pixelToCoord(e->pos().x());
    int y = this->ui->customPlot->yAxis->pixelToCoord(e->pos().y());
    int chan = ui->listWidget->currentRow();
    if (x >= 0 && x < rows && y >= 0 && y < cols)
    {
        qint16 bright = data[chan][x * cols + y];
        pStatusBarLabel->setText("X: " + QString().setNum(x) + "    Y: " + QString().setNum(y) + "    Значение:" + QString().setNum(bright));
    }
    else
        pStatusBarLabel->setText("");
}

void Main2DWindow::createMenus()
{
    pContextMenu = new QMenu();
    pContextMenu->setStyleSheet("border: 0px solid black;");
    pPlotAction = new QAction(QIcon(":/IconsCube/iconsCube/Plot.ico"),"Спектр",this);

    pPlotLineAction = new QAction(QIcon(":/IconsCube/iconsCube/PlotterLogo.ico"),"Спектральный срез", this);
    pPlotHistAction = new QAction("Гистограмма",this);

    if (m_attributes->GetAvailablePlugins().contains("Spectr UI"))
    {
        pContextMenu->addAction(pPlotAction);
        connect(pPlotAction,SIGNAL(triggered()),SLOT(prepareToPlotSpectr()));
        connect(this,SIGNAL(sendXYZ(uint,uint,uint)),SLOT(plotSpectr(uint,uint,uint) ));
    }
    if (m_attributes->GetAvailablePlugins().contains("Hist UI"))
    {
        pContextMenu->addAction(pPlotHistAction);
        connect(pPlotHistAction,SIGNAL(triggered()),SLOT(prepareToHist()));
    }
    if (m_attributes->GetAvailablePlugins().contains("Line Plotter UI"))
    {
        pContextMenu->addAction(pPlotLineAction);
        connect(pPlotLineAction,SIGNAL(triggered()),SLOT(createLinePlotterSlot()));
        connect(this, SIGNAL(signalPlotAlongLine(uint,uint,uint,uint,uint,uint)),SLOT(plotAlongLine(uint,uint,uint,uint,uint,uint)));
    }

}
void Main2DWindow::plotSpectr(uint x, uint y)
{
    m_attributes->ClearList();
    m_attributes->SetPoint(x, y, 0);
    m_attributes->GetAvailablePlugins().value("Spectr UI")->Execute(m_pCube, m_attributes);
}

void Main2DWindow::prepareToPlotSpectr()
{
    plotSpectr(m_dataX,m_dataY);
}
void Main2DWindow::createLinePlotterSlot()
{
    linePlotterIsActive = true;
    QString strForLineHelp = "Выберите начальную точку";
    setCursor(QCursor(QPixmap(":/IconsCube/iconsCube/start_flag.png"),10,29));
    //emit flagsToolTip(globalPos,"выберите начальную точку");
    connect(this,SIGNAL(signalCurrentDataXY(uint,uint)),this,SLOT(startIsClicked(uint,uint)));
    pContextMenu->hide();
    this->setToolTip(strForLineHelp);

}
void Main2DWindow::startIsClicked(uint dataX, uint dataY)
{
    linePlotterIsActive = true;
    m_x1 = dataX;
    m_y1 = dataY;
    m_z1 = ui->listWidget->currentRow();
    //emit flagsToolTip(globalPos,"выберите конечную точку");
    QString strForLineHelp = "выберите конечную точку";
    this->setToolTip(strForLineHelp);
    setCursor(QCursor(QPixmap(":/IconsCube/iconsCube/finish_flag.png"),10,29));
    disconnect(this,SIGNAL(signalCurrentDataXY(uint,uint)),this,SLOT(startIsClicked(uint,uint)));
    connect(this,SIGNAL(signalCurrentDataXY(uint,uint)),this,SLOT(finishIsClicked(uint,uint)));
}
void Main2DWindow::finishIsClicked(uint dataX, uint dataY)
{
    linePlotterIsActive = false;
    m_x2 = dataX;
    m_y2 = dataY;
    m_z2 = m_z1; //ui->listWidget->currentRow();
    QString strForLineHelp = "";
    setCursor(Qt::ArrowCursor);
    //emit signalPlotAlongLine(m_x1, m_x2, m_y1, m_y2, m_z1, m_z2); //так было в 3d кубе
    plotAlongLine(m_x1, m_x2, m_y1, m_y2, m_z1, m_z2);
    disconnect(this,SIGNAL(signalCurrentDataXY(uint,uint)),this,SLOT(startIsClicked(uint,uint)));
    disconnect(this,SIGNAL(signalCurrentDataXY(uint,uint)),this,SLOT(finishIsClicked(uint,uint)));
    this->setToolTip(strForLineHelp);
    //emit flagsToolTip(globalPos,"");
}
void Main2DWindow::plotAlongLine(uint x1, uint x2, uint y1, uint y2, uint z1, uint z2)
{
    m_attributes->ClearList();
    m_attributes->SetPoint(x1, y1, z1);
    m_attributes->SetPoint(x2, y2, z2);
    m_attributes->GetAvailablePlugins().value("Line Plotter UI")->Execute(m_pCube, m_attributes);
}

void Main2DWindow::prepareToHist()
{
    m_attributes->ClearList();
    m_attributes->SetPoint(0, 0, ui->listWidget->currentRow());
    m_attributes->GetAvailablePlugins().value("Hist UI")->Execute(m_pCube, m_attributes);
}

void Main2DWindow::contextMenuRequest(QPoint point)
{

    pContextMenu->exec(ui->customPlot->mapToGlobal(point));//centralwidget->viewport()->mapToGlobal(point));

}






