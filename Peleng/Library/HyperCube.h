#ifndef HYPERCUBE_H
#define HYPERCUBE_H

#include "Types.h"

#include <QList>
#include <QVector>

//! ��������� ���������� ��� ��������
struct InfoData {
    u::uint32 bands; //!< ���������� �������
    u::uint32 lines; //!< ���������� �����
    u::uint32 samples; //!< ���������� ��������
    u::uint8 bytesType; //!< ���������� ���� � ����� �������� (�������� ��������)

     // 1 - int8, 2 - int 16, 3 - int32, 4 - float, 5 - double, 9 -2*double, 12 - uint16; 1 - qint8, 11 - quint8, 2 - qint16, 22 - quint16, 4 - qint32,  44 - quint32, 5 - qint64, 55 -quint64, 6 - float, 7 - double


    u::uint8 formatType; //!< ������ ������, �������� ����
    std::list<double> listChannels; //!<  ������ ���� ����, ��������������� ������� ������
};

//! ����� ���������. ������ ������ ��������� � ����������)
class HyperCube {

public:
    //! �����������
    HyperCube();
    //! ����������
    virtual ~HyperCube();

    //! ������� ��������� ���������� � ��������. ����� ���������� ��������� ������ ��� ������
    //! @param infoData - ���������� ���������
    void SetInfoData(const InfoData& infoData);

    //! ������� ������ ������.
    //! @param channel - ����� ������, � ������� ��������� �������� ������
    //! @param data - ��������� �� ������ ������
    //! @param size - ������ ������ � ������, ������� ��������� ��������
    //! @param iteratorBefore - ������������ ��� ������ � �����, �������� � ������ ��� ������, �� ������� ����� ���������� ����� ������� ������
    void SetDataBuffer(u::uint32 channel, u::cptr data, u::uint32 size, u::uint32 iteratorBefore = 0);

    //! ������� �������� ������ �� ����. (��� ��������, ����� �� ������� ����������?)
    void DestroyCube();

    //! ������� ��������� ����� �������
    //! @return - ����� ������� ���������
    u::uint32 GetCountofChannels();

    //! ������� ��������� ������ ���� ����, ��������������� ������� ������
    //! @return - ������ ���� ����
    QList<double> GetListOfChannels();

    //! ������� ��������� ���������� ����� (�����)
    //! @return - ���������� ����� (�����)
	u::uint32 GetLines();
	
    //! ������� ��������� ���������� ��������
    //! @return - ���������� ��������
	u::uint32 GetColumns();
	
    //! ������� ��������� ���������� ���� � ����� �������� (�������� ��������)
    //! @return - ���������� ���� � ����� ��������
	u::uint8 GetBytesInElements();

    //! ������� ��������� ���� ������� ������, �������� ����:)
    //! @return - ������ ������
    u::uint8 GetFormatType();

    //! ������� ��������� ������� � ������ ������� ������
    //! @return - ������ ������
    u::uint8 GetSizeOfFormatType();

    //! ������� ��������� ������� ��������� � ������
    //! @return - ������ ��������� � ������
    u::uint32 GetSizeCube() const;

    //QVector<QVector<u::int8> >* GetDataCube();
    //! ������� ��������� ������ ���������
    //! @return ��������� �� ������ ��������� (��������� ������, ������� ����� �������� � ������ ����)
    u::ptr* GetDataCube() const;

    //! ������� ��������� ������� ������ ������� ����� ����� � ������
    //! //! @return - ������ ������ ������� � ������
    u::uint32 GetSizeSpectrum();

    //! ������� ��������� ������ ������� ����� �����
    //! @param x - ���������� �� �������
    //! @param y - ���������� �� ��������
    //! @param data - ��������� �� ������ ������, ���� ����� ������� ������ ( ��� ���� ��� ������ ���� �������� ������!)
	void GetSpectrumPoint(u::uint32 x, u::uint32 y, u::ptr data);

    //! ������� ��������� ������ ������� ����� �����
    //! @param x - ���������� �� �������
    //! @param y - ���������� �� ��������
    //! @param data - ������, ���� ����� ������� ������ ( ��� ���� ��� ������ ���� �������� ������!)
    void GetSpectrumPoint(u::uint32 x, u::uint32 y, QVector<double>& data);

    //! ������� ��������� ������� ������ ������ ������ � ������
    //! @return - ������ ������ ������ � ������
	u::uint32 GetSizeChannel();

    //! ������� ��������� ������ ������ ������
    //! @param channel - ����� ������
    //! @param data - ��������� �� ������ ������, ���� ����� �������� ������ ������ ������ ( ��� ���� ��� ������ ���� �������� ������!)
	void GetDataChannel(u::uint32 channel, u::ptr data);

    //! ������� ��������� ������ ������ ������
    //! @param channel - ����� ������
    //! @param data - ������, ���� ����� �������� ������ ������ ������ ( ��� ���� ��� ������ ���� �������� ������!)
    void GetDataChannel(u::uint32 channel, QVector<double>& data);


private:
   // QVector<QVector<u::int8> > m_vectorCube; //[bands][samples*lines]
    u::int8** m_dataCube; //!< ��������� ������ ������ ���������
    u::uint32 m_sizeCube; //!< ������ ����
    InfoData m_infoData; //!< ���������� ����
};

#endif
