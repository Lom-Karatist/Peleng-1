#ifndef READDATALIB_H
#define READDATALIB_H

#ifdef READDATALIB_EXPORT
#define READDATALIB_API extern "C++" __declspec(dllexport)
#else
#define READDATALIB_API extern "C++" __declspec(dllimport)
#endif

#include <list>
#include "Types.h"
#include "HyperCube.h"

namespace ReadData
{
	//! ��������� ������
	struct Version
	{
		u::uint32 major; //!< ������� ������ ���������
		u::uint32 minor; //!< ������� ������ ���������
		u::uint32 revision; //!< ������ ���������
	};

	//! ��������� ������
	struct Error
	{
		u::uint32 code; //!< ��� ������
		u::cstr message; //!< ����� ������
	};
};

//! �������� ��������� ���������� ���������
//! @param ctx - ��������� �� �������� ���������� ���������
//! @param headerFileName - ���
//! @return ��������� ����������
READDATALIB_API u::logic ReadDataLib_CreateContex(u::ptr& ctx);


READDATALIB_API u::logic ReadDataLib_LoadFile(u::ptr& ctx, u::cstr headerFileName);


//! �������� ��������� ���������� ���������
//! @param ctx - ��������� �� �������� ���������� ���������
READDATALIB_API void ReadDataLib_DestroyContex(u::ptr ctx);

//! ������� ��������� ������
//! @return - ������ ����������
READDATALIB_API ReadData::Version ReadDataLib_GetVersion();

//! ������ ������ �� ���������� ������
//! @param channel - �����
//! @param data - ��������� �� ���� ������
//! @return - ��������� ����������
//READDATALIB_API u::logic ReadDataLib_ReadChannel(u::ptr ctx, u::uint32 channel, u::ptr data);

//! ��������� ������ ���������� ���������
//! @return - ������ ������
READDATALIB_API ReadData::Error ReadDataLib_GetLastError(u::ptr ctx);

//! ������� ��������� �������� ��������� ��������� ������
//! @return - �������� ���������� � ���������
READDATALIB_API double ReadDataLib_GetProgress(u::ptr ctx);

READDATALIB_API HyperCube* ReadDataLib_CreateHyperCube(u::ptr ctx);

READDATALIB_API u::logic ReadDataLib_BreakOperation(u::ptr ctx);

READDATALIB_API std::list<double> ReadDataLib_GetListChannels(u::ptr ctx);
#endif