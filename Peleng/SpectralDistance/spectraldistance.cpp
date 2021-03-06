#include "spectraldistance.h"


SpectralDistance::SpectralDistance(QObject *parent)
{
    is_cubemap_emty = true;
    view_range = 50;
    m_specWindow = NULL;
    preview_2d = NULL;
    is_evklid_distance = false;
}

SpectralDistance::~SpectralDistance()
{
}

void SpectralDistance::callMethod(int methNumber)
{
    qDebug() << methNumber;
    switch (methNumber) {
    case 0:{
        CalcEvklidDistance(m_attr->GetPointsList().at(0).x, m_attr->GetPointsList().at(0).y);
        return;
    }
    case 1:{
        CalcSpectralAngle(m_attr->GetPointsList().at(0).x, m_attr->GetPointsList().at(0).y);
        return;
    }
    case 2:{
        CalcSpectralCorellation(m_attr->GetPointsList().at(0).x, m_attr->GetPointsList().at(0).y);
        return;
    }
    default:
        return;
    }
}



void SpectralDistance::Destroy()
{
    for (int i = 0; i < cube_map.size(); i++)
    {
        cube_map[i].clear();
    }
}

void SpectralDistance::onClosePreview()
{
    preview_2d = NULL;
}

void SpectralDistance::Execute(HyperCube *cube, Attributes *attr)
{
    if(m_specWindow == NULL)
    {
        m_specWindow = new SpecDistWindow();
        m_specWindow->setWindowIcon(QIcon(":/IconsCube/iconsCube/distance.png"));
        connect(m_specWindow, SIGNAL(calcMeth(int)), this, SLOT(callMethod(int)));
        connect(m_specWindow, SIGNAL(rangeChanged(int)), this, SLOT(changeRange(int)));
    }
    if(preview_2d == NULL)
    {
        preview_2d = new Preview2D(false);
        connect(preview_2d, SIGNAL(destroyed()), this, SLOT(onClosePreview()));
    }
    m_specWindow->show();
    m_specWindow->raise();
    m_specWindow->showNormal();// если окно было свернуто
    m_pHyperCube = cube;
    m_attr = attr;

    
}

void SpectralDistance::CalcEvklidDistance(int k, int l)
{
    is_evklid_distance = true;
    int execute_time = GetTickCount();
    int chan_count = m_pHyperCube->GetCountofChannels();
    int line_count = m_pHyperCube->GetLines();
    int row_count  = m_pHyperCube->GetColumns();

    cube_map.clear();
    cube_map.resize(line_count);

    max_value = 0;
    min_value = 10000000;
    for (int i=0; i < line_count; i++)
    {
        cube_map[i].clear();
        cube_map[i].resize(row_count);
        for (int j=0; j < row_count - 1; j++)
        {
            double spectral_distance = 0.0;
//            if ((l==i) && (k==j))
//            {
//                continue;
//            }
            for (int z=0; z < chan_count - 1; z++)
            {
                short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
                spectral_distance +=pow(data_ptr[j*line_count + i] - data_ptr[k * row_count + l], 2);
            }
            spectral_distance = sqrt(spectral_distance);
            if (spectral_distance > max_value)
            {
                max_value = spectral_distance;
            }
            if (spectral_distance < min_value)
            {
                min_value = spectral_distance;
            }
            cube_map[i][j] = spectral_distance;
        }
    }
    qDebug() << "min:" << min_value;
    qDebug() << "max:" << max_value;
    qDebug() << "execute time" << (GetTickCount() - execute_time) / 1000.0;
    is_cubemap_emty = false;
    selectRange();
}

void SpectralDistance::CalcSpectralAngle(int k, int l)
{
    is_evklid_distance = false;
    int chan_count = m_pHyperCube->GetCountofChannels();
    int line_count = m_pHyperCube->GetLines();
    int row_count  = m_pHyperCube->GetColumns();

    cube_map.clear();
    cube_map.resize(line_count);

    max_value = 0;
    min_value = 10000000;

    for (int i=0; i < line_count; i ++)
    {
        cube_map[i].clear();
        cube_map[i].resize(row_count);
        for (int j=0; j < row_count; j++)
        {
            double local_val1 = 0;
            double local_val2 = 0;
            double local_val3 = 0;
            for (int z = 0; z < chan_count; z++)
            {
                short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
                local_val1 += data_ptr[j * line_count + i] * data_ptr[k * row_count + l];
                local_val2 += pow(data_ptr[j * line_count + i],2);
                local_val3 += pow(data_ptr[k * row_count + l],2);
            }
            cube_map[i][j] = acos(local_val1 / (sqrt(local_val2) * sqrt(local_val3)));
            if (cube_map[i][j] > max_value)
            {
                max_value = cube_map[i][j];
            }
            if (cube_map[i][j] < min_value)
            {
                min_value = cube_map[i][j];
            }
        }
    }
    qDebug() << "min:" << min_value;
    qDebug() << "max:" << max_value;
    is_cubemap_emty = false;
    selectRange();
}

void SpectralDistance::CalcSpectralCorellation(int k, int l)
{
    is_evklid_distance = false;
    int chan_count = m_pHyperCube->GetCountofChannels();
    int line_count = m_pHyperCube->GetLines();
    int row_count  = m_pHyperCube->GetColumns();

    max_value = 0;
    min_value = 10000000;

    cube_map.clear();
    cube_map.resize(line_count);

    double average_kl = averageSpectralValue(l,k, true);

    for (int i=0; i < line_count; i++)
    {
        cube_map[i].clear();
        cube_map[i].resize(row_count);
        for (int j = 0; j < row_count; j++)
        {
            double local_val1 = 0;
            double local_val2 = 0;
            double local_val3 = 0;
            double average_ij = averageSpectralValue(i,j, false);
            for (int z = 0; z < chan_count; z++)
            {
                short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
                local_val1 += (data_ptr[j*line_count + i] - average_ij) *
                        (data_ptr[k * row_count + l] - average_kl);
                local_val2 += pow(data_ptr[j*line_count + i] - average_ij, 2);
                local_val3 += pow(data_ptr[k * row_count + l] - average_kl, 2);
            }
            cube_map[i][j] =  1.0 - local_val1 / (sqrt(local_val2) * sqrt(local_val3));
            if (cube_map[i][j] > max_value)
            {
                max_value = cube_map[i][j];
            }
            if (cube_map[i][j] < min_value)
            {
                min_value = cube_map[i][j];
            }
        }
    }

    is_cubemap_emty = false;
    selectRange();

}




void SpectralDistance::selectRange()
{
    if (!is_cubemap_emty)
    {
        //int chan_count = m_pHyperCube->GetCountofChannels();
        int line_count = m_pHyperCube->GetLines();
        int row_count  = m_pHyperCube->GetColumns();

        double dist_range = min_value + (max_value - min_value)*((100.0 - view_range) / 100.0);
        double* view_mem = (double*)malloc(sizeof(double) * line_count*row_count);
        for (int i = 0; i < cube_map.length(); i++)
        {
            for (int j=0; j < cube_map[i].length(); j++)
            {
                    if (cube_map[i][j] <= dist_range)
                    {
                        view_mem[i + cube_map.length() * j] = 1;
                    } else
                    {
                        view_mem[i + cube_map.length() * j] = 0;
                    }
            }
        }

        if(preview_2d == NULL)
        {
            preview_2d = new Preview2D(false);
            connect(preview_2d, SIGNAL(destroyed()), this, SLOT(onClosePreview()));
        }
        preview_2d->Plot(view_mem, line_count, row_count, "Сравнение спектральных кривых",m_pHyperCube,m_attr);
        QVector<double> x;
        QVector<double> y;
        x.append(m_attr->GetPointsList().at(0).x);
        y.append(m_attr->GetPointsList().at(0).y);
        preview_2d->plotPointsOn2D(x,y);
        free(view_mem);

    }
}

void SpectralDistance::changeRange(const int range)
{
    view_range = range;
    selectRange();
}

double SpectralDistance::averageSpectralValue(const int _i, const int _j, bool isInverted)
{
    int chan_count = m_pHyperCube->GetCountofChannels();
    int line_count = m_pHyperCube->GetLines();
    int row_count  = m_pHyperCube->GetColumns();


    double chanel_sum = 0;
    for (int z=0; z < chan_count; z++)
    {
        short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
        if (isInverted)
        {
            chanel_sum += data_ptr[_j*row_count + _i];
        }else
        {
            chanel_sum += data_ptr[_j*line_count + _i];
        }
    }
    return chanel_sum / (double)chan_count;
}

QObject *SpectralDistance::GetObjectPointer()
{
    return this;
}
