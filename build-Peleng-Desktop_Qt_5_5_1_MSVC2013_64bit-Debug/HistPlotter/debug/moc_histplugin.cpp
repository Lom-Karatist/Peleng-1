/****************************************************************************
** Meta object code from reading C++ file 'histplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/HistPlotter/histplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HistPlugin_t {
    QByteArrayData data[8];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistPlugin_t qt_meta_stringdata_HistPlugin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HistPlugin"
QT_MOC_LITERAL(1, 11, 12), // "ReplotSignal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "Attributes*"
QT_MOC_LITERAL(4, 37, 4), // "attr"
QT_MOC_LITERAL(5, 42, 7), // "OnClose"
QT_MOC_LITERAL(6, 50, 18), // "HistPlotterWidget*"
QT_MOC_LITERAL(7, 69, 1) // "w"

    },
    "HistPlugin\0ReplotSignal\0\0Attributes*\0"
    "attr\0OnClose\0HistPlotterWidget*\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void HistPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistPlugin *_t = static_cast<HistPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReplotSignal((*reinterpret_cast< Attributes*(*)>(_a[1]))); break;
        case 1: _t->OnClose((*reinterpret_cast< HistPlotterWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HistPlotterWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HistPlugin::*_t)(Attributes * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistPlugin::ReplotSignal)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HistPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HistPlugin.data,
      qt_meta_data_HistPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HistPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HistPlugin.stringdata0))
        return static_cast<void*>(const_cast< HistPlugin*>(this));
    if (!strcmp(_clname, "ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< HistPlugin*>(this));
    if (!strcmp(_clname, "by.nomrec.ProcessingPluginsInterface"))
        return static_cast< ProcessingPluginsInterface*>(const_cast< HistPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int HistPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HistPlugin::ReplotSignal(Attributes * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
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
    0x18, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  'h',  'i', 
    's',  't',  0x00, 0x00, 0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'H',  'i', 
    's',  't',  'P',  'l',  'u',  'g',  'i',  'n', 
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
    'm',  'e',  0x00, 0x00, 0x07, 0x00, 'H',  'i', 
    's',  't',  ' ',  'U',  'I',  0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0a, 0x00, 'H',  'i', 
    's',  't',  'o',  'g',  'r',  'a',  'm',  'm', 
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
    0x18, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  'h',  'i', 
    's',  't',  0x00, 0x00, 0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x10, 0x00, 'P',  'r', 
    'o',  'c',  'e',  's',  's',  'i',  'n',  'g', 
    'F',  'o',  'r',  'm',  'a',  't',  0x00, 0x00,
    0x1b, 0x07, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x07, 0x00, 'H',  'i', 
    's',  't',  ' ',  'U',  'I',  0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x0b, 0x00, 'D',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0a, 0x00, 'H',  'i', 
    's',  't',  'o',  'g',  'r',  'a',  'm',  'm', 
    0x9b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'E',  'x', 
    't',  'i',  'n',  's',  'i',  'o',  'n',  0x00,
    0x05, 0x00, '*',  '.',  'h',  'd',  'r',  0x00,
    'D',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 0x1c, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0a, 0x00, 'H',  'i',  's',  't',  'P',  'l', 
    'u',  'g',  'i',  'n',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0x00,
    0xf8, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(HistPlugin, HistPlugin)

QT_END_MOC_NAMESPACE
