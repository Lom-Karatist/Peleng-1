/****************************************************************************
** Meta object code from reading C++ file 'Hyper2dPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/2DHyperCube/Hyper2dPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hyper2dPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Hyper2dPlugin_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hyper2dPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hyper2dPlugin_t qt_meta_stringdata_Hyper2dPlugin = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Hyper2dPlugin"
QT_MOC_LITERAL(1, 14, 7), // "OnClose"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "Hyper2dPlugin\0OnClose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hyper2dPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Hyper2dPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hyper2dPlugin *_t = static_cast<Hyper2dPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnClose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Hyper2dPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Hyper2dPlugin.data,
      qt_meta_data_Hyper2dPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hyper2dPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hyper2dPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hyper2dPlugin.stringdata0))
        return static_cast<void*>(const_cast< Hyper2dPlugin*>(this));
    if (!strcmp(_clname, "ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< Hyper2dPlugin*>(this));
    if (!strcmp(_clname, "by.nomrec.ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< Hyper2dPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int Hyper2dPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    ',',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  's',  'p', 
    'e',  'c',  't',  'r',  0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0d, 0x00, 'H',  'y', 
    'p',  'e',  'r',  '2',  'd',  'P',  'l',  'u', 
    'g',  'i',  'n',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x10, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'T',  'y',  'p',  'e',  0x00, 0x00,
    0x10, 0x00, 'P',  'r',  'o',  'c',  'e',  's', 
    's',  'i',  'n',  'g',  'F',  'o',  'r',  'm', 
    'a',  't',  0x00, 0x00, 0x1b, 0x07, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x09, 0x00, '2',  'D',  'C',  'u',  'b',  'e', 
    ' ',  'U',  'I',  0x00, 0x1b, 0x0b, 0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x15, 0x00, ' ',  '2',  'D',  ' ',  'V',  'i', 
    'e',  'w',  ' ',  'o',  'f',  ' ',  'H',  'y', 
    'p',  'e',  'r',  'C',  'u',  'b',  'e',  0x00,
    0x1b, 0x10, 0x00, 0x00, 0x09, 0x00, 'E',  'x', 
    't',  'i',  'n',  's',  'i',  'o',  'n',  0x00,
    0x05, 0x00, '*',  '.',  'h',  'd',  'r',  0x00,
    'D',  0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'T',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    ',',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  's',  'p', 
    'e',  'c',  't',  'r',  0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x10, 0x00, 'P',  'r', 
    'o',  'c',  'e',  's',  's',  'i',  'n',  'g', 
    'F',  'o',  'r',  'm',  'a',  't',  0x00, 0x00,
    0x1b, 0x07, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x09, 0x00, '2',  'D', 
    'C',  'u',  'b',  'e',  ' ',  'U',  'I',  0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x15, 0x00, ' ',  '2', 
    'D',  ' ',  'V',  'i',  'e',  'w',  ' ',  'o', 
    'f',  ' ',  'H',  'y',  'p',  'e',  'r',  'C', 
    'u',  'b',  'e',  0x00, 0x1b, 0x10, 0x00, 0x00,
    0x09, 0x00, 'E',  'x',  't',  'i',  'n',  's', 
    'i',  'o',  'n',  0x00, 0x05, 0x00, '*',  '.', 
    'h',  'd',  'r',  0x00, 'D',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 0x1d, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0d, 0x00, 'H',  'y', 
    'p',  'e',  'r',  '2',  'd',  'P',  'l',  'u', 
    'g',  'i',  'n',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    0xdc, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00,
    0x08, 0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Hyper2dPlugin, Hyper2dPlugin)

QT_END_MOC_NAMESPACE
