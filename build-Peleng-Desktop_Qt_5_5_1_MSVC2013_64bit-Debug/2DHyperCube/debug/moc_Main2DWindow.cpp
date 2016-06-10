/****************************************************************************
** Meta object code from reading C++ file 'Main2DWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/2DHyperCube/Main2DWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Main2DWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Main2DWindow_t {
    QByteArrayData data[64];
    char stringdata0[796];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main2DWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main2DWindow_t qt_meta_stringdata_Main2DWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Main2DWindow"
QT_MOC_LITERAL(1, 13, 19), // "signalCurrentDataXY"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "signalDoubleCordsClicked"
QT_MOC_LITERAL(4, 59, 11), // "CloseWindow"
QT_MOC_LITERAL(5, 71, 11), // "drawHeatMap"
QT_MOC_LITERAL(6, 83, 7), // "minCMap"
QT_MOC_LITERAL(7, 91, 7), // "maxCMap"
QT_MOC_LITERAL(8, 99, 14), // "updateViewchan"
QT_MOC_LITERAL(9, 114, 4), // "chan"
QT_MOC_LITERAL(10, 119, 18), // "leftBorderContrast"
QT_MOC_LITERAL(11, 138, 4), // "left"
QT_MOC_LITERAL(12, 143, 19), // "rightBorderContrast"
QT_MOC_LITERAL(13, 163, 5), // "right"
QT_MOC_LITERAL(14, 169, 13), // "contrastImage"
QT_MOC_LITERAL(15, 183, 14), // "plotPointsOn2D"
QT_MOC_LITERAL(16, 198, 15), // "QVector<double>"
QT_MOC_LITERAL(17, 214, 1), // "x"
QT_MOC_LITERAL(18, 216, 1), // "y"
QT_MOC_LITERAL(19, 218, 10), // "closeEvent"
QT_MOC_LITERAL(20, 229, 12), // "QCloseEvent*"
QT_MOC_LITERAL(21, 242, 1), // "e"
QT_MOC_LITERAL(22, 244, 12), // "needToUpdate"
QT_MOC_LITERAL(23, 257, 3), // "res"
QT_MOC_LITERAL(24, 261, 12), // "needToResize"
QT_MOC_LITERAL(25, 274, 10), // "updateData"
QT_MOC_LITERAL(26, 285, 14), // "dataCubeResize"
QT_MOC_LITERAL(27, 300, 20), // "connectionsOfPlugins"
QT_MOC_LITERAL(28, 321, 18), // "plotFromAttributes"
QT_MOC_LITERAL(29, 340, 11), // "Attributes*"
QT_MOC_LITERAL(30, 352, 4), // "attr"
QT_MOC_LITERAL(31, 357, 20), // "mousePressOnColorMap"
QT_MOC_LITERAL(32, 378, 12), // "QMouseEvent*"
QT_MOC_LITERAL(33, 391, 19), // "mouseMoveOnColorMap"
QT_MOC_LITERAL(34, 411, 26), // "toggledActionInterpolation"
QT_MOC_LITERAL(35, 438, 4), // "flag"
QT_MOC_LITERAL(36, 443, 10), // "plotSpectr"
QT_MOC_LITERAL(37, 454, 19), // "prepareToPlotSpectr"
QT_MOC_LITERAL(38, 474, 14), // "startIsClicked"
QT_MOC_LITERAL(39, 489, 5), // "dataX"
QT_MOC_LITERAL(40, 495, 5), // "dataY"
QT_MOC_LITERAL(41, 501, 15), // "finishIsClicked"
QT_MOC_LITERAL(42, 517, 13), // "plotAlongLine"
QT_MOC_LITERAL(43, 531, 2), // "x1"
QT_MOC_LITERAL(44, 534, 2), // "x2"
QT_MOC_LITERAL(45, 537, 2), // "y1"
QT_MOC_LITERAL(46, 540, 2), // "y2"
QT_MOC_LITERAL(47, 543, 2), // "z1"
QT_MOC_LITERAL(48, 546, 2), // "z2"
QT_MOC_LITERAL(49, 549, 8), // "drawLine"
QT_MOC_LITERAL(50, 558, 2), // "p1"
QT_MOC_LITERAL(51, 561, 2), // "p2"
QT_MOC_LITERAL(52, 564, 21), // "createLinePlotterSlot"
QT_MOC_LITERAL(53, 586, 13), // "prepareToHist"
QT_MOC_LITERAL(54, 600, 9), // "addSpectr"
QT_MOC_LITERAL(55, 610, 18), // "contextMenuRequest"
QT_MOC_LITERAL(56, 629, 5), // "point"
QT_MOC_LITERAL(57, 635, 29), // "ActionSpectralDistanceToogled"
QT_MOC_LITERAL(58, 665, 14), // "setInitSliders"
QT_MOC_LITERAL(59, 680, 11), // "polygonTool"
QT_MOC_LITERAL(60, 692, 24), // "OnActionMedian3Triggered"
QT_MOC_LITERAL(61, 717, 24), // "OnActionMedian5Triggered"
QT_MOC_LITERAL(62, 742, 24), // "OnActionMedian7Triggered"
QT_MOC_LITERAL(63, 767, 28) // "on_action_saveENVI_triggered"

    },
    "Main2DWindow\0signalCurrentDataXY\0\0"
    "signalDoubleCordsClicked\0CloseWindow\0"
    "drawHeatMap\0minCMap\0maxCMap\0updateViewchan\0"
    "chan\0leftBorderContrast\0left\0"
    "rightBorderContrast\0right\0contrastImage\0"
    "plotPointsOn2D\0QVector<double>\0x\0y\0"
    "closeEvent\0QCloseEvent*\0e\0needToUpdate\0"
    "res\0needToResize\0updateData\0dataCubeResize\0"
    "connectionsOfPlugins\0plotFromAttributes\0"
    "Attributes*\0attr\0mousePressOnColorMap\0"
    "QMouseEvent*\0mouseMoveOnColorMap\0"
    "toggledActionInterpolation\0flag\0"
    "plotSpectr\0prepareToPlotSpectr\0"
    "startIsClicked\0dataX\0dataY\0finishIsClicked\0"
    "plotAlongLine\0x1\0x2\0y1\0y2\0z1\0z2\0"
    "drawLine\0p1\0p2\0createLinePlotterSlot\0"
    "prepareToHist\0addSpectr\0contextMenuRequest\0"
    "point\0ActionSpectralDistanceToogled\0"
    "setInitSliders\0polygonTool\0"
    "OnActionMedian3Triggered\0"
    "OnActionMedian5Triggered\0"
    "OnActionMedian7Triggered\0"
    "on_action_saveENVI_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main2DWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  194,    2, 0x06 /* Public */,
       3,    2,  199,    2, 0x06 /* Public */,
       4,    0,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,  205,    2, 0x0a /* Public */,
       8,    1,  210,    2, 0x0a /* Public */,
      10,    1,  213,    2, 0x0a /* Public */,
      12,    1,  216,    2, 0x0a /* Public */,
      14,    2,  219,    2, 0x0a /* Public */,
      15,    2,  224,    2, 0x0a /* Public */,
      19,    1,  229,    2, 0x0a /* Public */,
      22,    1,  232,    2, 0x0a /* Public */,
      24,    1,  235,    2, 0x0a /* Public */,
      25,    0,  238,    2, 0x0a /* Public */,
      26,    0,  239,    2, 0x0a /* Public */,
      27,    0,  240,    2, 0x0a /* Public */,
      28,    1,  241,    2, 0x0a /* Public */,
      31,    1,  244,    2, 0x08 /* Private */,
      33,    1,  247,    2, 0x08 /* Private */,
      34,    1,  250,    2, 0x08 /* Private */,
      36,    2,  253,    2, 0x08 /* Private */,
      37,    0,  258,    2, 0x08 /* Private */,
      38,    2,  259,    2, 0x08 /* Private */,
      41,    2,  264,    2, 0x08 /* Private */,
      42,    6,  269,    2, 0x08 /* Private */,
      49,    2,  282,    2, 0x08 /* Private */,
      52,    0,  287,    2, 0x08 /* Private */,
      53,    0,  288,    2, 0x08 /* Private */,
      54,    0,  289,    2, 0x08 /* Private */,
      55,    1,  290,    2, 0x08 /* Private */,
      57,    0,  293,    2, 0x08 /* Private */,
      58,    1,  294,    2, 0x08 /* Private */,
      59,    0,  297,    2, 0x08 /* Private */,
      60,    0,  298,    2, 0x08 /* Private */,
      61,    0,  299,    2, 0x08 /* Private */,
      62,    0,  300,    2, 0x08 /* Private */,
      63,    0,  301,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   13,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   21,
    QMetaType::Void, 0x80000000 | 32,   21,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   39,   40,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   39,   40,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   43,   44,   45,   46,   47,   48,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,   50,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main2DWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main2DWindow *_t = static_cast<Main2DWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCurrentDataXY((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->signalDoubleCordsClicked((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->CloseWindow(); break;
        case 3: _t->drawHeatMap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->updateViewchan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->leftBorderContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->rightBorderContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->contrastImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->plotPointsOn2D((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 9: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 10: _t->needToUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->needToResize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->updateData(); break;
        case 13: _t->dataCubeResize(); break;
        case 14: _t->connectionsOfPlugins(); break;
        case 15: _t->plotFromAttributes((*reinterpret_cast< Attributes*(*)>(_a[1]))); break;
        case 16: _t->mousePressOnColorMap((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 17: _t->mouseMoveOnColorMap((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 18: _t->toggledActionInterpolation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->plotSpectr((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 20: _t->prepareToPlotSpectr(); break;
        case 21: _t->startIsClicked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 22: _t->finishIsClicked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: _t->plotAlongLine((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6]))); break;
        case 24: _t->drawLine((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 25: _t->createLinePlotterSlot(); break;
        case 26: _t->prepareToHist(); break;
        case 27: _t->addSpectr(); break;
        case 28: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 29: _t->ActionSpectralDistanceToogled(); break;
        case 30: _t->setInitSliders((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->polygonTool(); break;
        case 32: _t->OnActionMedian3Triggered(); break;
        case 33: _t->OnActionMedian5Triggered(); break;
        case 34: _t->OnActionMedian7Triggered(); break;
        case 35: _t->on_action_saveENVI_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Main2DWindow::*_t)(uint , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Main2DWindow::signalCurrentDataXY)) {
                *result = 0;
            }
        }
        {
            typedef void (Main2DWindow::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Main2DWindow::signalDoubleCordsClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (Main2DWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Main2DWindow::CloseWindow)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Main2DWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Main2DWindow.data,
      qt_meta_data_Main2DWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Main2DWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main2DWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Main2DWindow.stringdata0))
        return static_cast<void*>(const_cast< Main2DWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Main2DWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void Main2DWindow::signalCurrentDataXY(uint _t1, uint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Main2DWindow::signalDoubleCordsClicked(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Main2DWindow::CloseWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
