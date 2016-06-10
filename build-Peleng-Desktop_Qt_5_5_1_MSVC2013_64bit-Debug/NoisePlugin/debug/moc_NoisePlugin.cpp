/****************************************************************************
** Meta object code from reading C++ file 'NoisePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/NoisePlugin/NoisePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NoisePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NoisePlugin_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoisePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoisePlugin_t qt_meta_stringdata_NoisePlugin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "NoisePlugin"
QT_MOC_LITERAL(1, 12, 14), // "StartOperation"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "EnabledContext"
QT_MOC_LITERAL(4, 43, 15), // "FinishOperation"
QT_MOC_LITERAL(5, 59, 12) // "needToUpdate"

    },
    "NoisePlugin\0StartOperation\0\0EnabledContext\0"
    "FinishOperation\0needToUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoisePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void NoisePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NoisePlugin *_t = static_cast<NoisePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartOperation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->FinishOperation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NoisePlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NoisePlugin::StartOperation)) {
                *result = 0;
            }
        }
        {
            typedef void (NoisePlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NoisePlugin::FinishOperation)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject NoisePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NoisePlugin.data,
      qt_meta_data_NoisePlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NoisePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoisePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NoisePlugin.stringdata0))
        return static_cast<void*>(const_cast< NoisePlugin*>(this));
    if (!strcmp(_clname, "ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< NoisePlugin*>(this));
    if (!strcmp(_clname, "by.nomrec.ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< NoisePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int NoisePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void NoisePlugin::StartOperation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NoisePlugin::FinishOperation(bool _t1)
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
    0x18, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x04, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  's',  'p', 
    'e',  'c',  't',  'r',  0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0b, 0x00, 'N',  'o', 
    'i',  's',  'e',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x10, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'T',  'y',  'p',  'e',  0x00, 0x00,
    0x10, 0x00, 'P',  'r',  'o',  'c',  'e',  's', 
    's',  'i',  'n',  'g',  'F',  'o',  'r',  'm', 
    'a',  't',  0x00, 0x00, 0x1b, 0x07, 0x00, 0x00,
    0x04, 0x00, 'N',  'a',  'm',  'e',  0x00, 0x00,
    0x0d, 0x00, 'N',  'o',  'i',  's',  'e',  ' ', 
    'R',  'e',  'm',  'o',  'v',  'e',  'r',  0x00,
    0x9b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x19, 0x00, 'R',  'e', 
    'm',  'o',  'v',  'e',  ' ',  'n',  'o',  'i', 
    's',  'e',  's',  ' ',  'f',  'r',  'o',  'm', 
    ' ',  'i',  'm',  'a',  'g',  'e',  's',  0x00,
    'H',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x04, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  's',  'p', 
    'e',  'c',  't',  'r',  0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x10, 0x00, 'P',  'r', 
    'o',  'c',  'e',  's',  's',  'i',  'n',  'g', 
    'F',  'o',  'r',  'm',  'a',  't',  0x00, 0x00,
    0x1b, 0x07, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0d, 0x00, 'N',  'o', 
    'i',  's',  'e',  ' ',  'R',  'e',  'm',  'o', 
    'v',  'e',  'r',  0x00, 0x9b, 0x0b, 0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x19, 0x00, 'R',  'e',  'm',  'o',  'v',  'e', 
    ' ',  'n',  'o',  'i',  's',  'e',  's',  ' ', 
    'f',  'r',  'o',  'm',  ' ',  'i',  'm',  'a', 
    'g',  'e',  's',  0x00, 'H',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 0x1b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0b, 0x00, 'N',  'o',  'i',  's',  'e',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xa0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
    0xe8, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(NoisePlugin, NoisePlugin)

QT_END_MOC_NAMESPACE
