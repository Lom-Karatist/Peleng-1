/****************************************************************************
** Meta object code from reading C++ file 'avirisreadplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/AvirisReadPlugin/avirisreadplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avirisreadplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AvirisReadPlugin_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvirisReadPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvirisReadPlugin_t qt_meta_stringdata_AvirisReadPlugin = {
    {
QT_MOC_LITERAL(0, 0, 16) // "AvirisReadPlugin"

    },
    "AvirisReadPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvirisReadPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AvirisReadPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AvirisReadPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AvirisReadPlugin.data,
      qt_meta_data_AvirisReadPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AvirisReadPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvirisReadPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AvirisReadPlugin.stringdata0))
        return static_cast<void*>(const_cast< AvirisReadPlugin*>(this));
    if (!strcmp(_clname, "FileReadInterface"))
        return static_cast< FileReadInterface*>(const_cast< AvirisReadPlugin*>(this));
    if (!strcmp(_clname, "by.nomrec.FileReadInterface"))
        return static_cast< FileReadInterface*>(const_cast< AvirisReadPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int AvirisReadPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    'l',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    'X',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  'a',  'v', 
    'i',  'r',  'i',  's',  0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x10, 0x00, 'A',  'v', 
    'i',  'r',  'i',  's',  'R',  'e',  'a',  'd', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x10, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x0a, 0x00, 'F',  'i', 
    'l',  'e',  'F',  'o',  'r',  'm',  'a',  't', 
    0x1b, 0x06, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0d, 0x00, 'A',  'V', 
    'I',  'R',  'I',  'S',  ' ',  'L',  'o',  'a', 
    'd',  'e',  'r',  0x00, 0x93, 0x0a, 0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    ')',  0x00, 0x00, 0x00, 0x17, 0x04, '0',  0x04,
    '3',  0x04, '>',  0x04, ';',  0x04, '>',  0x04,
    '2',  0x04, '>',  0x04, 'G',  0x04, '=',  0x04,
    'K',  0x04, '5',  0x04, ' ',  0x00, 'D',  0x04,
    '0',  0x04, '9',  0x04, ';',  0x04, 'K',  0x04,
    ' ',  0x00, '?',  0x04, '@',  0x04, '>',  0x04,
    '5',  0x04, ':',  0x04, 'B',  0x04, '0',  0x04,
    ' ',  0x00, 'A',  0x00, 'V',  0x00, 'I',  0x00,
    'R',  0x00, 'I',  0x00, 'S',  0x00, ' ',  0x00,
    '(',  0x00, '*',  0x00, '.',  0x00, 'h',  0x00,
    'd',  0x00, 'r',  0x00, ')',  0x00, 0x00, 0x00,
    0x9b, 0x17, 0x00, 0x00, 0x09, 0x00, 'E',  'x', 
    't',  'i',  'n',  's',  'i',  'o',  'n',  0x00,
    0x05, 0x00, '*',  '.',  'h',  'd',  'r',  0x00,
    '@',  0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 'h',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    'l',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    'X',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'b',  'y',  '.',  'n',  'o',  'm', 
    'r',  'e',  'c',  '.',  'h',  'y',  'p',  'e', 
    'r',  'v',  'i',  'e',  'w',  '.',  'a',  'v', 
    'i',  'r',  'i',  's',  0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'T',  'y', 
    'p',  'e',  0x00, 0x00, 0x0a, 0x00, 'F',  'i', 
    'l',  'e',  'F',  'o',  'r',  'm',  'a',  't', 
    0x1b, 0x06, 0x00, 0x00, 0x04, 0x00, 'N',  'a', 
    'm',  'e',  0x00, 0x00, 0x0d, 0x00, 'A',  'V', 
    'I',  'R',  'I',  'S',  ' ',  'L',  'o',  'a', 
    'd',  'e',  'r',  0x00, 0x93, 0x0a, 0x00, 0x00,
    0x0b, 0x00, 'D',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    ')',  0x00, 0x00, 0x00, 0x17, 0x04, '0',  0x04,
    '3',  0x04, '>',  0x04, ';',  0x04, '>',  0x04,
    '2',  0x04, '>',  0x04, 'G',  0x04, '=',  0x04,
    'K',  0x04, '5',  0x04, ' ',  0x00, 'D',  0x04,
    '0',  0x04, '9',  0x04, ';',  0x04, 'K',  0x04,
    ' ',  0x00, '?',  0x04, '@',  0x04, '>',  0x04,
    '5',  0x04, ':',  0x04, 'B',  0x04, '0',  0x04,
    ' ',  0x00, 'A',  0x00, 'V',  0x00, 'I',  0x00,
    'R',  0x00, 'I',  0x00, 'S',  0x00, ' ',  0x00,
    '(',  0x00, '*',  0x00, '.',  0x00, 'h',  0x00,
    'd',  0x00, 'r',  0x00, ')',  0x00, 0x00, 0x00,
    0x9b, 0x17, 0x00, 0x00, 0x09, 0x00, 'E',  'x', 
    't',  'i',  'n',  's',  'i',  'o',  'n',  0x00,
    0x05, 0x00, '*',  '.',  'h',  'd',  'r',  0x00,
    '@',  0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, '%',  0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x10, 0x00, 'A',  'v',  'i',  'r',  'i',  's', 
    'R',  'e',  'a',  'd',  'P',  'l',  'u',  'g', 
    'i',  'n',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  0xa0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, '<',  0x01, 0x00, 0x00,
    'H',  0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(AvirisReadPlugin, AvirisReadPlugin)

QT_END_MOC_NAMESPACE
