#ifndef UTIL_H
#define UTIL_H

#include <string>
#include "Types.h"

namespace u
{
	//! ������� ������ �� ��������� ansi � ��������� utf-8
	//! @param text - ������ � ��������� ansi
	//! @return - ������ � ��������� utf-8
	std::string a2u(const std::string& text);

	//! ������� ������ �� ��������� utf-8 � ��������� ansi
	//! @param text - ������ � ��������� utf-8
	//! @return - ������ � ��������� ansi
	std::string u2a(const std::string& text);

};

#endif
