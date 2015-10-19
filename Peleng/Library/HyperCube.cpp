#include "HyperCube.h"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include "GenericExc.h"

HyperCube::HyperCube()
{

}

HyperCube::~HyperCube()
{

}

u::uint8 HyperCube::GetBytesFormat() {
    return m_infoData.bytesFormat;
}

// ��������, ����� �� ����� new ���������
void HyperCube::SetInfoData(const InfoData& infoData) // ������ ������ � ��� �������
{
    m_infoData = infoData;
    m_vectorCube.reserve(m_infoData.bands);
    m_vectorCube.resize(m_infoData.bands);
    for (u::uint32 i = 0; i < m_infoData.bands; i++) {        
        m_vectorCube[i].reserve(m_infoData.lines*m_infoData.samples*m_infoData.bytesFormat);
        m_vectorCube[i].resize(m_infoData.lines*m_infoData.samples*m_infoData.bytesType);
    }
}

void HyperCube::SetDataBuffer(u::uint32 channel, u::cptr data, u::uint32 size, u::uint32 iteratorBefore) {
    memcpy(m_vectorCube[channel].data() + iteratorBefore, data, size);
}

void HyperCube::DestroyCube() {
    for (u::uint32 i = 0; i < m_infoData.bands; i++)
    {
        m_vectorCube[i].clear();
    }
    m_vectorCube.clear();
}

u::uint32 HyperCube::GetCountofChannels()
{
	return m_infoData.bands;
}

QList<double> HyperCube::GetListOfChannels()
{
    return QList<double>::fromStdList(m_infoData.listChannels);
}

u::uint32 HyperCube::GetLines()
{
	return m_infoData.lines;
}

u::uint32 HyperCube::GetColumns()
{
	return m_infoData.samples;
}

u::uint8 HyperCube::GetBytesInElements()
{
	return m_infoData.bytesType;
}

u::uint32 HyperCube::GetSizeCube() const
{
	return m_sizeCube;
}

QVector<QVector<u::int8> >* HyperCube::GetDataCube()
{
    return &m_vectorCube;
}

u::uint32 HyperCube::GetSizeSpectrum()
{
	return m_infoData.bands*m_infoData.bytesType;
}

void HyperCube::GetSpectrumPoint(u::uint32 x, u::uint32 y, u::ptr data)
{
	if (x > m_infoData.lines) {
        throw GenericExc("������� ������ ��������� X", -1);
	}
	if (y > m_infoData.samples) {
        throw GenericExc("������� ������ ��������� Y", -1);
	}
	u::uint32 shift = (x*m_infoData.samples + y)*m_infoData.bytesType;
	try {
        for (u::uint32 i = 0; i < m_infoData.bands; i++) {
            memcpy((u::int8*)data + i*m_infoData.bytesType, m_vectorCube.at(i).data() + shift, m_infoData.bytesType);
		}
	} catch(...) {
        throw GenericExc("������� ������� ������ ��� ���� ������", -1);
	}
}


u::uint32 HyperCube::GetSizeChannel()
{
	return m_infoData.lines*m_infoData.samples*m_infoData.bytesType;
}

void HyperCube::GetDataChannel(u::uint32 channel, u::ptr data) {
	if (channel > m_infoData.bands) {
        throw GenericExc("������� ������ �����", -1);
	}
	try {
        memcpy(data, m_vectorCube.at(channel).data(), GetSizeChannel());
	} catch (...) {
        throw GenericExc("������� ������� ������ ��� ���� ������", -1);
	}
}
