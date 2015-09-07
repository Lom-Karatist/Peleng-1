#include "HyperCube.h"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "GenericExc.h"

HyperCube::HyperCube(u::ptr* data, u::uint32 sizeCube, InfoData& infoData)
	: m_dataCube(data)
	, m_sizeCube(sizeCube) 
	, m_infoData(infoData)
{
}

HyperCube::~HyperCube() {

}

u::uint32 HyperCube::GetChannels() {
	return m_infoData.bands;
}

u::uint32 HyperCube::GetLines() {
	return m_infoData.lines;
}

u::uint32 HyperCube::GetColumns() {
	return m_infoData.samples;
}

u::uint8 HyperCube::GetBytesInElements() {
	return m_infoData.bytesType;
}

u::uint32 HyperCube::GetSizeCube() const {
	return m_sizeCube;
}

u::ptr* HyperCube::GetDataCube() {
    return m_dataCube;
}

u::uint32 HyperCube::GetSizeSpectrum() {
	return m_infoData.bands*m_infoData.bytesType;
}

void HyperCube::GetSpectrumPoint(u::uint32 x, u::uint32 y, u::ptr data) {
	if (x > m_infoData.lines) {
        throw GenericExc("������� ������ ��������� X");
	}
	if (y > m_infoData.samples) {
        throw GenericExc("������� ������ ��������� Y");
	}
	u::uint32 shift = (x*m_infoData.samples + y)*m_infoData.bytesType;
	try {
		for (int i = 0; i < m_infoData.bands; i++) {
			memcpy((u::int8*)data + i*m_infoData.bytesType, (u::int8*)m_dataCube[i] + shift, m_infoData.bytesType);
		}
	} catch(...) {
        throw GenericExc("������� ������� ������ ��� ���� ������");
	}
}


u::uint32 HyperCube::GetSizeChannel() {
	return m_infoData.lines*m_infoData.samples*m_infoData.bytesType;
}

void HyperCube::GetDataChannel(u::uint32 channel, u::ptr data) {
	if (channel > m_infoData.bands) {
        throw GenericExc("������� ������ �����");
	}
	try {
		memcpy(data, m_dataCube[channel], GetSizeChannel());
	} catch (...) {
        throw GenericExc("������� ������� ������ ��� ���� ������");
	}
}
