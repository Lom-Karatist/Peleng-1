#ifndef TYPES_H
#define TYPES_H

#include <QtGlobal>

//! ������������ ���� ����������� ����� � �������
//! 30.10 ��������� �� ������ �������� �� 32 ������ ������� ��� linux
//!
namespace u
{
	typedef bool           logic;	//!< ���������� ���
	typedef void*          ptr;		//!< ���������
	typedef const void*    cptr;	//!< ����������� ���������
    typedef qint8		   int8;	//!< �������� 1-�� �������� ���
    typedef qint16		   int16;	//!< �������� 2-� �������� ���
    typedef qint32		   int32;	//!< �������� 4-� �������� ���
    typedef qint64         int64;	//!< �������� 8-� �������� ���
    typedef quint8         uint8;   //!< ����������� 1-�� �������� ���
    typedef quint16        uint16;  //!< ����������� 2-� �������� ���
    typedef quint32        uint32;  //!< ����������� 4-� �������� ���
    typedef quint64        uint64;  //!< ����������� 8-� �������� ���

};

#endif //TYPES_H
