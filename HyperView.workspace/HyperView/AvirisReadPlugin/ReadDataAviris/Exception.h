#ifndef COMMANDEXCEPTION_H
#define COMMANDEXCEPTION_H

#include <string>
#include <exception>

#include "Types.h"
//! ����� ������ ���������� ������
class Exception : public std::exception
{
public:
	//! �����������
	//! @param code - ��� ������
	explicit Exception(u::uint32 code);
	//! ����������
	virtual ~Exception();
	//! �������� ���������������
	//! @param other - ������ ������ CommandException
	Exception(const Exception& other);
	//! �������� ������������
	//! @param other - ������ ������ CommandException
	Exception& operator=(const Exception& other);
	//! �������� ��� ������
	//! @return ��� ������
	u::uint32 GetCode() const;
	//! �������� �������� ������
	//! @return ������ �������� ������
	const std::string& GetDescription() const;
	//! �������� �������� ������
	//! @return �������� ������
	virtual u::cstr what() const throw();

private:
	u::uint32 m_code; //!< ��� ������
	std::string m_description; //!< �������� ������
};

#endif
