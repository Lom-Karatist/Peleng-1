/****************************************************************************
** Meta object code from reading C++ file 'CubePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/3DHyperCube/CubePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CubePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CubePlugin_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CubePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CubePlugin_t qt_meta_stringdata_CubePlugin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CubePlugin"
QT_MOC_LITERAL(1, 11, 14), // "StartOperation"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "EnabledContext"
QT_MOC_LITERAL(4, 42, 15), // "FinishOperation"
QT_MOC_LITERAL(5, 58, 12), // "needToUpdate"
QT_MOC_LITERAL(6, 71, 7), // "OnClose"
QT_MOC_LITERAL(7, 79, 11), // "MainWindow*"
QT_MOC_LITERAL(8, 91, 6), // "window"
QT_MOC_LITERAL(9, 98, 7), // "onStart"
QT_MOC_LITERAL(10, 106, 4), // "flag"
QT_MOC_LITERAL(11, 111, 8) // "onFinish"

    },
    "CubePlugin\0StartOperation\0\0EnabledContext\0"
    "FinishOperation\0needToUpdate\0OnClose\0"
    "MainWindow*\0window\0onStart\0flag\0"
    "onFinish"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CubePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,
      11,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void CubePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CubePlugin *_t = static_cast<CubePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartOperation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->FinishOperation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnClose((*reinterpret_cast< MainWindow*(*)>(_a[1]))); break;
        case 3: _t->onStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MainWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CubePlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CubePlugin::StartOperation)) {
                *result = 0;
            }
        }
        {
            typedef void (CubePlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CubePlugin::FinishOperation)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CubePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CubePlugin.data,
      qt_meta_data_CubePlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CubePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CubePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CubePlugin.stringdata0))
        return static_cast<void*>(const_cast< CubePlugin*>(this));
    if (!strcmp(_clname, "ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< CubePlugin*>(this));
    if (!strcmp(_clname, "by.nomrec.ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< CubePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int CubePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CubePlugin::StartOperation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CubePlugin::FinishOperation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x1c, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x08, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  '3',  'd', 
    'c',  'u',  'b',  'e',  0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'C',  'u', 
    'b',  'e',  'P',  'l',  'u',  'g',  'i',  'n', 
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x0f, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x10, 0x00, 'P',  'r', 
    'o',  'c',  'e',  's',  's',  'i',  'n',  'g', 
    'F',  'o',  'r',  'm',  'a',  't',  0x00, 0x00,
    0x1b, 0x07, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x09, 0x00, '3',  'D', 
    'C',  'u',  'b',  'e',  ' ',  'U',  'I',  0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x09, 0x00, 'H',  'y', 
    'p',  'e',  'r',  'C',  'u',  'b',  'e',  0x00,
    0x9b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'E',  'x', 
    't',  'i',  'n',  's',  'i',  'o',  'n',  0x00,
    0x05, 0x00, '*',  '.',  'h',  'd',  'r',  0x00,
    'D',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x1c, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x08, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  '3',  'd', 
    'c',  'u',  'b',  'e',  0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x10, 0x00, 'P',  'r', 
    'o',  'c',  'e',  's',  's',  'i',  'n',  'g', 
    'F',  'o',  'r',  'm',  'a',  't',  0x00, 0x00,
    0x1b, 0x07, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x09, 0x00, '3',  'D', 
    'C',  'u',  'b',  'e',  ' ',  'U',  'I',  0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x09, 0x00, 'H',  'y', 
    'p',  'e',  'r',  'C',  'u',  'b',  'e',  0x00,
    0x9b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'E',  'x', 
    't',  'i',  'n',  's',  'i',  'o',  'n',  0x00,
    0x05, 0x00, '*',  '.',  'h',  'd',  'r',  0x00,
    'D',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 0x1c, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0a, 0x00, 'C',  'u',  'b',  'e',  'P',  'l', 
    'u',  'g',  'i',  'n',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0x00,
    0xf8, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(CubePlugin, CubePlugin)

QT_END_MOC_NAMESPACE
