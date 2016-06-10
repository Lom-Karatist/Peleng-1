/****************************************************************************
** Meta object code from reading C++ file 'PlotterWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/SpectrPlotter/PlotterWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotterWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlotterWindow_t {
    QByteArrayData data[36];
    char stringdata0[711];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotterWindow_t qt_meta_stringdata_PlotterWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PlotterWindow"
QT_MOC_LITERAL(1, 14, 18), // "closePlotterWindow"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "PlotterWindow*"
QT_MOC_LITERAL(4, 49, 1), // "w"
QT_MOC_LITERAL(5, 51, 12), // "graphClicked"
QT_MOC_LITERAL(6, 64, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(7, 86, 9), // "plottable"
QT_MOC_LITERAL(8, 96, 18), // "contextMenuRequest"
QT_MOC_LITERAL(9, 115, 3), // "pos"
QT_MOC_LITERAL(10, 119, 16), // "mouseMoveRequest"
QT_MOC_LITERAL(11, 136, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 149, 1), // "e"
QT_MOC_LITERAL(13, 151, 19), // "removeSelectedGraph"
QT_MOC_LITERAL(14, 171, 28), // "removeAllExceptSelectedGraph"
QT_MOC_LITERAL(15, 200, 14), // "onActionValues"
QT_MOC_LITERAL(16, 215, 4), // "flag"
QT_MOC_LITERAL(17, 220, 14), // "onActionPoints"
QT_MOC_LITERAL(18, 235, 17), // "onActionInterplol"
QT_MOC_LITERAL(19, 253, 21), // "on_actionHold_toggled"
QT_MOC_LITERAL(20, 275, 5), // "value"
QT_MOC_LITERAL(21, 281, 21), // "on_actionSave_toggled"
QT_MOC_LITERAL(22, 303, 25), // "ActionNoise3MedianToggled"
QT_MOC_LITERAL(23, 329, 25), // "ActionNoise5MedianToggled"
QT_MOC_LITERAL(24, 355, 25), // "ActionNoise7MedianToggled"
QT_MOC_LITERAL(25, 381, 31), // "ActionNoiseSavitGolay2_5Toogled"
QT_MOC_LITERAL(26, 413, 31), // "ActionNoiseSavitGolay2_7Toogled"
QT_MOC_LITERAL(27, 445, 31), // "ActionNoiseSavitGolay2_9Toogled"
QT_MOC_LITERAL(28, 477, 31), // "ActionNoiseSavitGolay3_5Toogled"
QT_MOC_LITERAL(29, 509, 31), // "ActionNoiseSavitGolay3_7Toogled"
QT_MOC_LITERAL(30, 541, 31), // "ActionNoiseSavitGolay3_9Toogled"
QT_MOC_LITERAL(31, 573, 31), // "ActionNoiseSavitGolay4_7Toogled"
QT_MOC_LITERAL(32, 605, 31), // "ActionNoiseSavitGolay4_9Toogled"
QT_MOC_LITERAL(33, 637, 31), // "ActionNoiseSavitGolay5_7Toogled"
QT_MOC_LITERAL(34, 669, 31), // "ActionNoiseSavitGolay5_9Toogled"
QT_MOC_LITERAL(35, 701, 9) // "AddSpectr"

    },
    "PlotterWindow\0closePlotterWindow\0\0"
    "PlotterWindow*\0w\0graphClicked\0"
    "QCPAbstractPlottable*\0plottable\0"
    "contextMenuRequest\0pos\0mouseMoveRequest\0"
    "QMouseEvent*\0e\0removeSelectedGraph\0"
    "removeAllExceptSelectedGraph\0"
    "onActionValues\0flag\0onActionPoints\0"
    "onActionInterplol\0on_actionHold_toggled\0"
    "value\0on_actionSave_toggled\0"
    "ActionNoise3MedianToggled\0"
    "ActionNoise5MedianToggled\0"
    "ActionNoise7MedianToggled\0"
    "ActionNoiseSavitGolay2_5Toogled\0"
    "ActionNoiseSavitGolay2_7Toogled\0"
    "ActionNoiseSavitGolay2_9Toogled\0"
    "ActionNoiseSavitGolay3_5Toogled\0"
    "ActionNoiseSavitGolay3_7Toogled\0"
    "ActionNoiseSavitGolay3_9Toogled\0"
    "ActionNoiseSavitGolay4_7Toogled\0"
    "ActionNoiseSavitGolay4_9Toogled\0"
    "ActionNoiseSavitGolay5_7Toogled\0"
    "ActionNoiseSavitGolay5_9Toogled\0"
    "AddSpectr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  142,    2, 0x08 /* Private */,
       8,    1,  145,    2, 0x08 /* Private */,
      10,    1,  148,    2, 0x08 /* Private */,
      13,    0,  151,    2, 0x08 /* Private */,
      14,    0,  152,    2, 0x08 /* Private */,
      15,    1,  153,    2, 0x08 /* Private */,
      17,    1,  156,    2, 0x08 /* Private */,
      18,    0,  159,    2, 0x08 /* Private */,
      19,    1,  160,    2, 0x0a /* Public */,
      21,    0,  163,    2, 0x0a /* Public */,
      22,    0,  164,    2, 0x0a /* Public */,
      23,    0,  165,    2, 0x0a /* Public */,
      24,    0,  166,    2, 0x0a /* Public */,
      25,    0,  167,    2, 0x0a /* Public */,
      26,    0,  168,    2, 0x0a /* Public */,
      27,    0,  169,    2, 0x0a /* Public */,
      28,    0,  170,    2, 0x0a /* Public */,
      29,    0,  171,    2, 0x0a /* Public */,
      30,    0,  172,    2, 0x0a /* Public */,
      31,    0,  173,    2, 0x0a /* Public */,
      32,    0,  174,    2, 0x0a /* Public */,
      33,    0,  175,    2, 0x0a /* Public */,
      34,    0,  176,    2, 0x0a /* Public */,
      35,    0,  177,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlotterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotterWindow *_t = static_cast<PlotterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closePlotterWindow((*reinterpret_cast< PlotterWindow*(*)>(_a[1]))); break;
        case 1: _t->graphClicked((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1]))); break;
        case 2: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->mouseMoveRequest((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->removeSelectedGraph(); break;
        case 5: _t->removeAllExceptSelectedGraph(); break;
        case 6: _t->onActionValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onActionPoints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onActionInterplol(); break;
        case 9: _t->on_actionHold_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_actionSave_toggled(); break;
        case 11: _t->ActionNoise3MedianToggled(); break;
        case 12: _t->ActionNoise5MedianToggled(); break;
        case 13: _t->ActionNoise7MedianToggled(); break;
        case 14: _t->ActionNoiseSavitGolay2_5Toogled(); break;
        case 15: _t->ActionNoiseSavitGolay2_7Toogled(); break;
        case 16: _t->ActionNoiseSavitGolay2_9Toogled(); break;
        case 17: _t->ActionNoiseSavitGolay3_5Toogled(); break;
        case 18: _t->ActionNoiseSavitGolay3_7Toogled(); break;
        case 19: _t->ActionNoiseSavitGolay3_9Toogled(); break;
        case 20: _t->ActionNoiseSavitGolay4_7Toogled(); break;
        case 21: _t->ActionNoiseSavitGolay4_9Toogled(); break;
        case 22: _t->ActionNoiseSavitGolay5_7Toogled(); break;
        case 23: _t->ActionNoiseSavitGolay5_9Toogled(); break;
        case 24: _t->AddSpectr(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotterWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlotterWindow::*_t)(PlotterWindow * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlotterWindow::closePlotterWindow)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PlotterWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PlotterWindow.data,
      qt_meta_data_PlotterWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlotterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlotterWindow.stringdata0))
        return static_cast<void*>(const_cast< PlotterWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PlotterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void PlotterWindow::closePlotterWindow(PlotterWindow * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
