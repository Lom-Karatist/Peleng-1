#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H

#include "../Library/Types.h"
#include <stdlib.h>
#include <stdio.h>
#include <list>
#include <string>
#include "../Library/HyperCube.h"

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
    u::logic LoadFile(std::string headerName, HyperCube& cube);

	//! ������� ��������� ��������� ���������
	//! @return - ��������
	double GetProgress() const;

	//! ������� �������� ����������� ��������
	void SetBreak();
	

private:
	//! �������, ������� ������ ����-���������
	//! @param headername - ��� ����� ���������
    void ParseHeaderFile(std::string headername, HyperCube& cube);
	
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
    u::logic OpenDataFile(const std::string& fileName, HyperCube& cube);

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
   // u::int8** m_buffer;


};

#endif //FILESOPERATION_H
