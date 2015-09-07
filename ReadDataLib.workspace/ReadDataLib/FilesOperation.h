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
	FilesOperation();

	//! ����������
	~FilesOperation();

	//! ������� �������� �����-���������
	//! @param headerName - ���� � �����
	//! @return - ��������� ���������� ���������
	u::logic LoadFile(std::string headerName);

	//! ������� ��������� ��������� ���������
	//! @return - ��������
	double GetProgress() const;

	//! ������� ��������� ���������� �����
	//! @return - ���������� �����
	u::uint32 GetLines() const;

	//! ������� ��������� ������ ���� ����, ��������������� ������ ������
	//! @return - ������ ���� ����
	std::list<double> GetListChannels();

	//! ������� �������� ����������� ��������
	void SetBreak();
	
	//! ��������� ��������� �� ������ ������ HyperCube
	//! @return - ��������� �� ������ ������ HyperCube
	HyperCube* CreateHyperCube();

private:
	//! �������, ������� ������ ����-���������
	//! @param headername - ��� ����� ���������
	void ParseHeaderFile(std::string headername);
	
	//! �������, ������� ������������� ������
	//! @param parametr_id - id-����� ����������
	//! @param data - ������, ��� ���������
	void SetData(int parameter_id, const char* data);

	//! ������� ��������� ����� �����-������
	//! @param headerName- ��� �����-���������
	void SetFileName(std::string headerName);

	//! ������� ��������� ���������� ���� � ����� ��������
	//! @param format - ������ ������, ���������� �� �����-���������
	u::uint32 GetNumberOfBytesFromData(u::int32 format);

	u::uint32 ConvertStrtoInt(const char* data);
	u::uint32 GetFileSize(const std::string& fileName);
	u::logic OpenDataFile(const std::string& fileName);

private:
	u::uint32 m_sizeBlock;
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
	u::uint8** m_buffer;
	u::logic m_break;
	HyperCube* m_hyperCube;

};

#endif //FILESOPERATION_H