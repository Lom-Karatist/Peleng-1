/****************************************************************************
** Meta object code from reading C++ file 'Preview2D.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/Library/CustomPlotForPreview2D/Preview2D.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Preview2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Preview2D_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Preview2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Preview2D_t qt_meta_stringdata_Preview2D = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Preview2D"
QT_MOC_LITERAL(1, 10, 15), // "ShowContextMenu"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "pos"
QT_MOC_LITERAL(4, 31, 19), // "prepareToPlotSpectr"
QT_MOC_LITERAL(5, 51, 20), // "mousePressOnColorMap"
QT_MOC_LITERAL(6, 72, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 85, 1), // "e"
QT_MOC_LITERAL(8, 87, 25), // "on_SliderMin_valueChanged"
QT_MOC_LITERAL(9, 113, 5), // "value"
QT_MOC_LITERAL(10, 119, 25) // "on_SliderMax_valueChanged"

    },
    "Preview2D\0ShowContextMenu\0\0pos\0"
    "prepareToPlotSpectr\0mousePressOnColorMap\0"
    "QMouseEvent*\0e\0on_SliderMin_valueChanged\0"
    "value\0on_SliderMax_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Preview2D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       8,    1,   46,    2, 0x08 /* Private */,
      10,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void Preview2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Preview2D *_t = static_cast<Preview2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->prepareToPlotSpectr(); break;
        case 2: _t->mousePressOnColorMap((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->on_SliderMin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_SliderMax_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Preview2D::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Preview2D.data,
      qt_meta_data_Preview2D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Preview2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Preview2D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Preview2D.stringdata0))
        return static_cast<void*>(const_cast< Preview2D*>(this));
    return QWidget::qt_metacast(_clname);
}

int Preview2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE