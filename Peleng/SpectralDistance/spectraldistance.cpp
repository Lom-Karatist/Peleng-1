#include "spectraldistance.h"
#include "templatefunctions.h"

SpectralDistance::SpectralDistance(QObject *parent)
{
    is_cubemap_emty = true;
    view_range = 10;
    engine = NULL;
    preview_2d = NULL;
    is_evklid_distance = false;
}

SpectralDistance::~SpectralDistance()
{
    // delete window;
    //    delete engine;
    //    Destroy();
}

void SpectralDistance::callMethod(int methNumber)
{
    qDebug() << methNumber;
    switch (methNumber) {
    case 0:{
        CalcEvklidDistance(m_attr->GetXUnits(),m_attr->GetYUnits());//m_attr->GetPointsList().at(0).x, m_attr->GetPointsList().at(0).y
        return;
    }
    case 1:{
        CalcSpectralAngle(m_attr->GetXUnits(),m_attr->GetYUnits());
        return;
    }
    case 2:{
        CalcSpectralCorellation(m_attr->GetXUnits(),m_attr->GetYUnits());
        return;
    }
    default:
        return;
    }
}

void SpectralDistance::OnCloseEvent(QQuickCloseEvent*)
{
    //delete window;
    //delete engine;
    //    Destroy();
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
    if(engine == NULL)
    {
        engine = new QQmlApplicationEngine(this);
        engine->load(QUrl("qrc:/sdistancewin.qml"));
        window = qobject_cast<QQuickWindow*>(engine->rootObjects().value(0));
        connect(window, SIGNAL(closing(QQuickCloseEvent*)), this, SLOT(OnCloseEvent(QQuickCloseEvent*)));
        connect(engine->rootObjects().value(0), SIGNAL(calcMeth(int)), this, SLOT(callMethod(int)));
        connect(engine->rootObjects().value(0), SIGNAL(rangeChanged(int)), this, SLOT(changeRange(int)));
    }
    if(preview_2d == NULL)
    {
        preview_2d = new Preview2D(0);
        connect(preview_2d, SIGNAL(destroyed()), this, SLOT(onClosePreview()));
    }
    //window->setIcon();
    window->show();
    window->raise();
    window->showNormal();// если окно было свернуто
    m_pHyperCube = cube;
    m_attr = attr;
    m_xArr = m_attr->GetXUnits();
    m_yArr = m_attr->GetYUnits();

    
}

void SpectralDistance::CalcEvklidDistance(const QVector<double>& xArr, const QVector<double>& yArr)//int k, int l
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
    u::uint8 bytesInEl = m_pHyperCube->GetSizeOfFormatType();
    for (int i=0; i < line_count; i++)
    {
        cube_map[i].clear();
        cube_map[i].resize(row_count);
        for (int j=0; j < row_count - 1; j++)
        {
            double spectral_distance = 0.0;
            for (int z=0; z < chan_count - 1; z++)
            {
                switch (m_pHyperCube->GetFormatType()) {
                case type_int8:
                {
                    spectral_distance += evclidFunc<u::int8>(static_cast<u::int8*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_int16:
                {
                    spectral_distance += evclidFunc<u::int16>(static_cast<u::int16*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_int32:
                {
                    spectral_distance += evclidFunc<u::int32>(static_cast<u::int32*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_int64:
                {
                    spectral_distance += evclidFunc<u::int64>(static_cast<u::int64*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_uint8:
                {
                    spectral_distance += evclidFunc<u::uint8>(static_cast<u::uint8*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_uint16:
                {
                    spectral_distance += evclidFunc<u::uint16>(static_cast<u::uint16*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_uint32:
                {
                    spectral_distance += evclidFunc<u::uint32>(static_cast<u::uint32*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_float:
                {
                    spectral_distance += evclidFunc<float>(static_cast<float*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                case type_double:
                {
                    spectral_distance += evclidFunc<double>(static_cast<double*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z));
                    break;
                }
                default:
                    break;
                }
                //                char *data_ptr =  static_cast<char*>(m_pHyperCube->GetDataCube()[z]); //надо указатель на char, а потом умножать на размер элемента
                //                char datavalue[8]; char datavalueInverse[8]; memset(datavalue, 0, 8); memset(datavalueInverse, 0, 8);
                //                memcpy(datavalue, data_ptr + (j*line_count + i)*bytesInEl, bytesInEl);

                //                for (int i = 0; i < bytesInEl; i++)
                //                {
                //                    datavalueInverse[7-bytesInEl+i +1] = datavalue[i];
                //                }
                //                double value;
                //                memcpy(&value, datavalueInverse, 8);

                //                spectral_distance +=pow(value - yArr.at(z), 2);//было после минуса: (double)data_ptr[k * row_count + l]
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

void SpectralDistance::CalcSpectralAngle(const QVector<double>& xArr,const QVector<double>& yArr)
{
    is_evklid_distance = false;
    int execute_time = GetTickCount();
    int chan_count = m_pHyperCube->GetCountofChannels();
    int line_count = m_pHyperCube->GetLines();
    int row_count  = m_pHyperCube->GetColumns();

    cube_map.clear();
    cube_map.resize(line_count);

    max_value = 0;
    min_value = 10000000;
    u::uint8 bytesInEl = m_pHyperCube->GetSizeOfFormatType();
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
                //                short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
                //                local_val1 += (double)data_ptr[j * line_count + i] * yArr.at(z);
                //                local_val2 += pow((double)data_ptr[j * line_count + i],2);
                //                local_val3 += pow(yArr.at(z),2);
                switch (m_pHyperCube->GetFormatType()) {
                case type_int8:
                {
                    angleFunc<u::int8>(static_cast<u::int8*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_int16:
                {
                    angleFunc<u::int16>(static_cast<u::int16*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_int32:
                {
                    angleFunc<u::int32>(static_cast<u::int32*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_int64:
                {
                    angleFunc<u::int64>(static_cast<u::int64*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_uint8:
                {
                    angleFunc<u::uint8>(static_cast<u::uint8*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_uint16:
                {
                    angleFunc<u::uint16>(static_cast<u::uint16*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_uint32:
                {
                    angleFunc<u::uint32>(static_cast<u::uint32*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_float:
                {
                    angleFunc<float>(static_cast<float*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                case type_double:
                {
                    angleFunc<double>(static_cast<double*>(m_pHyperCube->GetDataCube()[z]),i,j,line_count,bytesInEl,yArr.at(z),local_val1,local_val2,local_val3);
                    break;
                }
                default:
                    break;
                }
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
    qDebug() << "execute time" << (GetTickCount() - execute_time) / 1000.0;
    is_cubemap_emty = false;
    selectRange();
}

void SpectralDistance::CalcSpectralCorellation(const QVector<double> &xArr, const QVector<double> &yArr)
{
    is_evklid_distance = false;
    int execute_time = GetTickCount();
    int chan_count = m_pHyperCube->GetCountofChannels();
    int line_count = m_pHyperCube->GetLines();
    int row_count  = m_pHyperCube->GetColumns();

    max_value = 0;
    min_value = 10000000;

    cube_map.clear();
    cube_map.resize(line_count);

    double average_kl = averageSpectralValue(yArr,chan_count);
    //    double chanel_sum = 0;
    //    for (int z=0; z < chan_count; z++)
    //    {
    //        chanel_sum += yArr.at(z);
    //    }
    //    double average_kl = chanel_sum / (double)chan_count;

    u::uint8 bytesInEl = m_pHyperCube->GetSizeOfFormatType();
    for (int i=0; i < line_count; i++)
    {
        cube_map[i].clear();
        cube_map[i].resize(row_count);
        for (int j = 0; j < row_count; j++)
        {
            double local_val1 = 0;
            double local_val2 = 0;
            double local_val3 = 0;
//            double average_ij = averageSpectralValue(i,j, false);
//            for (int z = 0; z < chan_count; z++)
//            {
//                short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
//                local_val1 += ((double)data_ptr[j*line_count + i] - average_ij) *
//                        (yArr.at(z) - average_kl);
//                local_val2 += pow((double)data_ptr[j*line_count + i] - average_ij, 2);
//                local_val3 += pow(yArr.at(z) - average_kl, 2);

//            }
            switch (m_pHyperCube->GetFormatType()) {
            case type_int8:
            {
                corellationFunc<u::int8>((u::int8**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                         ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_int16:
            {
                corellationFunc<u::int16>((u::int16**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                          ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_int32:
            {
                corellationFunc<u::int32>((u::int32**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                          ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_int64:
            {
                corellationFunc<u::int64>((u::int64**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                          ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_uint8:
            {
                corellationFunc<u::uint8>((u::uint8**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                          ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_uint16:
            {
                corellationFunc<u::uint16>((u::uint16**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                           ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_uint32:
            {
                corellationFunc<u::uint32>((u::uint32**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                           ,local_val1, local_val2, local_val3,  yArr, average_kl);
            }
            case type_float:
            {
                corellationFunc<float>((float**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                       ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            case type_double:
            {
                corellationFunc<double>((double**)m_pHyperCube->GetDataCube(), i, j, chan_count,  line_count,  row_count
                                        ,local_val1, local_val2, local_val3,  yArr, average_kl);
                break;
            }
            default:
                break;
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
    qDebug() << "execute time" << (GetTickCount() - execute_time) / 1000.0;
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
            preview_2d = new Preview2D(0);
            connect(preview_2d, SIGNAL(destroyed()), this, SLOT(onClosePreview()));
        }
        preview_2d->Plot(view_mem, line_count, row_count, "Сравнение спектральных кривых");
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

//double SpectralDistance::averageSpectralValue(const int _i, const int _j, bool isInverted) //в шаблонах
//{
//    int chan_count = m_pHyperCube->GetCountofChannels();
//    int line_count = m_pHyperCube->GetLines();
//    int row_count  = m_pHyperCube->GetColumns();


//    double chanel_sum = 0;
//    for (int z=0; z < chan_count; z++)
//    {
//        short int *data_ptr = static_cast<short int*>(m_pHyperCube->GetDataCube()[z]);
//        if (isInverted)
//        {
//            chanel_sum += data_ptr[_j*row_count + _i];
//        }else
//        {
//            chanel_sum += data_ptr[_j*line_count + _i];
//        }
//    }
//    return chanel_sum / (double)chan_count;
//}

double SpectralDistance::averageSpectralValue(QVector<double> yArr, int chan_count)
{
    double chanel_sum = 0;
    for (int z=0; z < chan_count; z++)
    {
        chanel_sum += yArr.at(z);
    }
    double average_kl = chanel_sum / (double)chan_count;
    return average_kl;
}

QObject *SpectralDistance::GetObjectPointer()
{
    return this;
}
