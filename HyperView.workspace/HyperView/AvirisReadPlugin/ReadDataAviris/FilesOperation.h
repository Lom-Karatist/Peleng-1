#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H

#include "Types.h"
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <string>
#include "HyperCube.h"
//! ����� �������� ��������
class FilesOperation {

public:
	//! �����������
	//! @param headername - ��� �����-���������
	FilesOperation(std::string headerName);

	//! ����������
	~FilesOperation();
	
	//! ������� ��������� ��������� ���������
	//! @return - ��������
	u::uint32 GetProgress() const;

	//! ������� ��������� ������� ����� ������ � ����� ������
	//! @return - ������ ����� ������ � ����� ������ � ������
////	u::uint32 GetSizeBlock() const;
	
	//! ������� ��������� ���������� �����
	//! @return - ���������� �����
	u::uint32 GetLines() const;

	//! ������� ��������� ���������� ��������
	//! @return - ���������� ��������
//	u::uint32 GetSamples() const;

	//! ������� ��������� ������� ������� ��� ����� �����
	//! @return - ������ ������� ��� ����� �����
//	u::uint32 GetSizeSpectrum();

	//! ������� ������ ������ ��� ������ ������
	//! @param channel - ����� ������
	//! @param data - ��������� �� ���� ������
//	void ReadChannel(u::uint32 channel, u::ptr data);

	//! ������� ������ ������� ������ ��� ����� �����
	//! @param x - ���������� ����� �� ������ (�������)
	//! @rapam y - ���������� ����� �� ������ (�������)
	//! @param data - ��������� �� ���� ������
	//! @return - ��������� ����������
//	void ReadSpectrumOfPoint(u::uint32 x, u::uint32 y, u::ptr data);

	//! ������� ��������� ������ ���� ����, ��������������� ������ ������
	//! @return - ������ ���� ����
	std::list<double> GetListChannels();

	void SetBreak();
	HyperCube* CreateHyperCube();
private:

	//! �������, ������� ������ ����-���������
	//! @param headername - ��� ����� ���������
	void ParseHeaderFile(std::string headername);
	
	//! �������, ������� ������������� ������
	//! @param parametr_id - id-����� ����������
	//! @param data - ������, ��� ���������
	void SetData(int parameter_id, const char* data);
	void SetFileName(std::string headerName);
	u::uint32 GetNumberOfBytesFromData(u::int32 format);
	u::uint32 ConvertStrtoInt(const char* data);
	u::uint32 GetFileSize(const std::string& fileName);
	u::logic OpenDataFile(const std::string& fileName, u::uint32 fileSize);

private:
	u::uint32 m_sizeBlock;
	u::uint32 m_sizeCube;
	double m_progress;
	std::string m_fileName;
	std::list<double> m_listChannel;

	u::uint32 m_samples;
	u::uint32 m_lines;
	u::uint32 m_bands;
	u::uint32 m_headerOffset;
	u::uint32 m_dataType;
	u::uint32 m_interleave;
	u::uint32 m_byteorder;
	u::uint8* m_buffer;
	u::logic m_break;
	HyperCube* hyperCube;

};

#endif //FILESOPERATION_H