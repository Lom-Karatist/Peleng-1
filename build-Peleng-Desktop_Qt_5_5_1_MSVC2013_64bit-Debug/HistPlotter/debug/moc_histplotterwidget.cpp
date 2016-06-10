/****************************************************************************
** Meta object code from reading C++ file 'histplotterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/HistPlotter/histplotterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histplotterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HistPlotterWidget_t {
    QByteArrayData data[17];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistPlotterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistPlotterWidget_t qt_meta_stringdata_HistPlotterWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HistPlotterWidget"
QT_MOC_LITERAL(1, 18, 5), // "Close"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "HistPlotterWidget*"
QT_MOC_LITERAL(4, 44, 3), // "obj"
QT_MOC_LITERAL(5, 48, 25), // "on_leftSlider_sliderMoved"
QT_MOC_LITERAL(6, 74, 8), // "position"
QT_MOC_LITERAL(7, 83, 26), // "on_rightSlider_sliderMoved"
QT_MOC_LITERAL(8, 110, 26), // "on_leftSlider_valueChanged"
QT_MOC_LITERAL(9, 137, 5), // "value"
QT_MOC_LITERAL(10, 143, 27), // "on_rightSlider_valueChanged"
QT_MOC_LITERAL(11, 171, 11), // "PlotDefault"
QT_MOC_LITERAL(12, 183, 11), // "sumBoundary"
QT_MOC_LITERAL(13, 195, 5), // "Gauss"
QT_MOC_LITERAL(14, 201, 21), // "on_gaussChBox_clicked"
QT_MOC_LITERAL(15, 223, 7), // "checked"
QT_MOC_LITERAL(16, 231, 27) // "on_sumBoundaryChBox_clicked"

    },
    "HistPlotterWidget\0Close\0\0HistPlotterWidget*\0"
    "obj\0on_leftSlider_sliderMoved\0position\0"
    "on_rightSlider_sliderMoved\0"
    "on_leftSlider_valueChanged\0value\0"
    "on_rightSlider_valueChanged\0PlotDefault\0"
    "sumBoundary\0Gauss\0on_gaussChBox_clicked\0"
    "checked\0on_sumBoundaryChBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistPlotterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   67,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      16,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void HistPlotterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistPlotterWidget *_t = static_cast<HistPlotterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Close((*reinterpret_cast< HistPlotterWidget*(*)>(_a[1]))); break;
        case 1: _t->on_leftSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_rightSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_leftSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_rightSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->PlotDefault(); break;
        case 6: _t->sumBoundary(); break;
        case 7: _t->Gauss(); break;
        case 8: _t->on_gaussChBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_sumBoundaryChBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (HistPlotterWidget::*_t)(HistPlotterWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistPlotterWidget::Close)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HistPlotterWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HistPlotterWidget.data,
      qt_meta_data_HistPlotterWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HistPlotterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistPlotterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HistPlotterWidget.stringdata0))
        return static_cast<void*>(const_cast< HistPlotterWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int HistPlotterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HistPlotterWidget::Close(HistPlotterWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
