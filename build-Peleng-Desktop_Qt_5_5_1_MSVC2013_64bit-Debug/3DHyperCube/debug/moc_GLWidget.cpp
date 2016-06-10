/****************************************************************************
** Meta object code from reading C++ file 'GLWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/3DHyperCube/GLWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLWidget_t {
    QByteArrayData data[64];
    char stringdata0[1098];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLWidget_t qt_meta_stringdata_GLWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GLWidget"
QT_MOC_LITERAL(1, 9, 7), // "clicked"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "sendXYZ"
QT_MOC_LITERAL(4, 26, 16), // "signalPlotSpectr"
QT_MOC_LITERAL(5, 43, 19), // "signalPlotAlongLine"
QT_MOC_LITERAL(6, 63, 9), // "drawLabel"
QT_MOC_LITERAL(7, 73, 20), // "signalCurrentDataXYZ"
QT_MOC_LITERAL(8, 94, 12), // "flagsToolTip"
QT_MOC_LITERAL(9, 107, 13), // "redrawSliders"
QT_MOC_LITERAL(10, 121, 9), // "CanDelete"
QT_MOC_LITERAL(11, 131, 21), // "sliderCh1ValueChanged"
QT_MOC_LITERAL(12, 153, 5), // "value"
QT_MOC_LITERAL(13, 159, 21), // "sliderCh2ValueChanged"
QT_MOC_LITERAL(14, 181, 20), // "sliderX1ValueChanged"
QT_MOC_LITERAL(15, 202, 20), // "sliderX2ValueChanged"
QT_MOC_LITERAL(16, 223, 20), // "sliderY1ValueChanged"
QT_MOC_LITERAL(17, 244, 20), // "sliderY2ValueChanged"
QT_MOC_LITERAL(18, 265, 10), // "plotSpectr"
QT_MOC_LITERAL(19, 276, 1), // "x"
QT_MOC_LITERAL(20, 278, 1), // "y"
QT_MOC_LITERAL(21, 280, 1), // "z"
QT_MOC_LITERAL(22, 282, 13), // "plotAlongLine"
QT_MOC_LITERAL(23, 296, 2), // "x1"
QT_MOC_LITERAL(24, 299, 2), // "x2"
QT_MOC_LITERAL(25, 302, 2), // "y1"
QT_MOC_LITERAL(26, 305, 2), // "y2"
QT_MOC_LITERAL(27, 308, 2), // "z1"
QT_MOC_LITERAL(28, 311, 2), // "z2"
QT_MOC_LITERAL(29, 314, 9), // "addSpectr"
QT_MOC_LITERAL(30, 324, 27), // "OnActionMedian1D_3Triggered"
QT_MOC_LITERAL(31, 352, 27), // "OnActionMedian1D_5Triggered"
QT_MOC_LITERAL(32, 380, 27), // "OnActionMedian1D_7Triggered"
QT_MOC_LITERAL(33, 408, 27), // "OnActionMedian2D_3Triggered"
QT_MOC_LITERAL(34, 436, 27), // "OnActionMedian2D_5Triggered"
QT_MOC_LITERAL(35, 464, 27), // "OnActionMedian2D_7Triggered"
QT_MOC_LITERAL(36, 492, 31), // "ActionNoiseSavitGolay2_5Toogled"
QT_MOC_LITERAL(37, 524, 31), // "ActionNoiseSavitGolay2_7Toogled"
QT_MOC_LITERAL(38, 556, 31), // "ActionNoiseSavitGolay2_9Toogled"
QT_MOC_LITERAL(39, 588, 31), // "ActionNoiseSavitGolay3_5Toogled"
QT_MOC_LITERAL(40, 620, 31), // "ActionNoiseSavitGolay3_7Toogled"
QT_MOC_LITERAL(41, 652, 31), // "ActionNoiseSavitGolay3_9Toogled"
QT_MOC_LITERAL(42, 684, 31), // "ActionNoiseSavitGolay4_7Toogled"
QT_MOC_LITERAL(43, 716, 31), // "ActionNoiseSavitGolay4_9Toogled"
QT_MOC_LITERAL(44, 748, 31), // "ActionNoiseSavitGolay5_7Toogled"
QT_MOC_LITERAL(45, 780, 31), // "ActionNoiseSavitGolay5_9Toogled"
QT_MOC_LITERAL(46, 812, 29), // "ActionSpectralDistanceToogled"
QT_MOC_LITERAL(47, 842, 26), // "ActionRGBCorrectionToogled"
QT_MOC_LITERAL(48, 869, 15), // "saveCubeForENVI"
QT_MOC_LITERAL(49, 885, 19), // "prepareToPlotSpectr"
QT_MOC_LITERAL(50, 905, 14), // "startIsClicked"
QT_MOC_LITERAL(51, 920, 15), // "finishIsClicked"
QT_MOC_LITERAL(52, 936, 21), // "createLinePlotterSlot"
QT_MOC_LITERAL(53, 958, 9), // "run2DCube"
QT_MOC_LITERAL(54, 968, 13), // "contrastSides"
QT_MOC_LITERAL(55, 982, 15), // "contrastTopSide"
QT_MOC_LITERAL(56, 998, 24), // "repaintSidesWithContrast"
QT_MOC_LITERAL(57, 1023, 3), // "min"
QT_MOC_LITERAL(58, 1027, 3), // "max"
QT_MOC_LITERAL(59, 1031, 22), // "repaintTopWithContrast"
QT_MOC_LITERAL(60, 1054, 10), // "updateCube"
QT_MOC_LITERAL(61, 1065, 12), // "needToUpdate"
QT_MOC_LITERAL(62, 1078, 15), // "ShowContextMenu"
QT_MOC_LITERAL(63, 1094, 3) // "pos"

    },
    "GLWidget\0clicked\0\0sendXYZ\0signalPlotSpectr\0"
    "signalPlotAlongLine\0drawLabel\0"
    "signalCurrentDataXYZ\0flagsToolTip\0"
    "redrawSliders\0CanDelete\0sliderCh1ValueChanged\0"
    "value\0sliderCh2ValueChanged\0"
    "sliderX1ValueChanged\0sliderX2ValueChanged\0"
    "sliderY1ValueChanged\0sliderY2ValueChanged\0"
    "plotSpectr\0x\0y\0z\0plotAlongLine\0x1\0x2\0"
    "y1\0y2\0z1\0z2\0addSpectr\0OnActionMedian1D_3Triggered\0"
    "OnActionMedian1D_5Triggered\0"
    "OnActionMedian1D_7Triggered\0"
    "OnActionMedian2D_3Triggered\0"
    "OnActionMedian2D_5Triggered\0"
    "OnActionMedian2D_7Triggered\0"
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
    "ActionSpectralDistanceToogled\0"
    "ActionRGBCorrectionToogled\0saveCubeForENVI\0"
    "prepareToPlotSpectr\0startIsClicked\0"
    "finishIsClicked\0createLinePlotterSlot\0"
    "run2DCube\0contrastSides\0contrastTopSide\0"
    "repaintSidesWithContrast\0min\0max\0"
    "repaintTopWithContrast\0updateCube\0"
    "needToUpdate\0ShowContextMenu\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  259,    2, 0x06 /* Public */,
       3,    3,  260,    2, 0x06 /* Public */,
       4,    0,  267,    2, 0x06 /* Public */,
       5,    6,  268,    2, 0x06 /* Public */,
       6,    3,  281,    2, 0x06 /* Public */,
       7,    3,  288,    2, 0x06 /* Public */,
       8,    2,  295,    2, 0x06 /* Public */,
       9,    0,  300,    2, 0x06 /* Public */,
      10,    0,  301,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  302,    2, 0x0a /* Public */,
      13,    1,  305,    2, 0x0a /* Public */,
      14,    1,  308,    2, 0x0a /* Public */,
      15,    1,  311,    2, 0x0a /* Public */,
      16,    1,  314,    2, 0x0a /* Public */,
      17,    1,  317,    2, 0x0a /* Public */,
      18,    3,  320,    2, 0x0a /* Public */,
      22,    6,  327,    2, 0x0a /* Public */,
      29,    0,  340,    2, 0x0a /* Public */,
      30,    0,  341,    2, 0x0a /* Public */,
      31,    0,  342,    2, 0x0a /* Public */,
      32,    0,  343,    2, 0x0a /* Public */,
      33,    0,  344,    2, 0x0a /* Public */,
      34,    0,  345,    2, 0x0a /* Public */,
      35,    0,  346,    2, 0x0a /* Public */,
      36,    0,  347,    2, 0x0a /* Public */,
      37,    0,  348,    2, 0x0a /* Public */,
      38,    0,  349,    2, 0x0a /* Public */,
      39,    0,  350,    2, 0x0a /* Public */,
      40,    0,  351,    2, 0x0a /* Public */,
      41,    0,  352,    2, 0x0a /* Public */,
      42,    0,  353,    2, 0x0a /* Public */,
      43,    0,  354,    2, 0x0a /* Public */,
      44,    0,  355,    2, 0x0a /* Public */,
      45,    0,  356,    2, 0x0a /* Public */,
      46,    0,  357,    2, 0x0a /* Public */,
      47,    0,  358,    2, 0x0a /* Public */,
      48,    0,  359,    2, 0x0a /* Public */,
      49,    0,  360,    2, 0x08 /* Private */,
      50,    0,  361,    2, 0x08 /* Private */,
      51,    0,  362,    2, 0x08 /* Private */,
      52,    0,  363,    2, 0x08 /* Private */,
      53,    0,  364,    2, 0x08 /* Private */,
      54,    0,  365,    2, 0x08 /* Private */,
      55,    0,  366,    2, 0x08 /* Private */,
      56,    2,  367,    2, 0x08 /* Private */,
      59,    2,  372,    2, 0x08 /* Private */,
      60,    0,  377,    2, 0x08 /* Private */,
      61,    1,  378,    2, 0x08 /* Private */,
      62,    1,  381,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   19,   20,   21,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   23,   24,   25,   26,   27,   28,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   57,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   57,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::QPoint,   63,

       0        // eod
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLWidget *_t = static_cast<GLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->sendXYZ((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->signalPlotSpectr(); break;
        case 3: _t->signalPlotAlongLine((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6]))); break;
        case 4: _t->drawLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->signalCurrentDataXYZ((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 6: _t->flagsToolTip((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->redrawSliders(); break;
        case 8: _t->CanDelete(); break;
        case 9: _t->sliderCh1ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sliderCh2ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sliderX1ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sliderX2ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->sliderY1ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->sliderY2ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->plotSpectr((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 16: _t->plotAlongLine((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6]))); break;
        case 17: _t->addSpectr(); break;
        case 18: _t->OnActionMedian1D_3Triggered(); break;
        case 19: _t->OnActionMedian1D_5Triggered(); break;
        case 20: _t->OnActionMedian1D_7Triggered(); break;
        case 21: _t->OnActionMedian2D_3Triggered(); break;
        case 22: _t->OnActionMedian2D_5Triggered(); break;
        case 23: _t->OnActionMedian2D_7Triggered(); break;
        case 24: _t->ActionNoiseSavitGolay2_5Toogled(); break;
        case 25: _t->ActionNoiseSavitGolay2_7Toogled(); break;
        case 26: _t->ActionNoiseSavitGolay2_9Toogled(); break;
        case 27: _t->ActionNoiseSavitGolay3_5Toogled(); break;
        case 28: _t->ActionNoiseSavitGolay3_7Toogled(); break;
        case 29: _t->ActionNoiseSavitGolay3_9Toogled(); break;
        case 30: _t->ActionNoiseSavitGolay4_7Toogled(); break;
        case 31: _t->ActionNoiseSavitGolay4_9Toogled(); break;
        case 32: _t->ActionNoiseSavitGolay5_7Toogled(); break;
        case 33: _t->ActionNoiseSavitGolay5_9Toogled(); break;
        case 34: _t->ActionSpectralDistanceToogled(); break;
        case 35: _t->ActionRGBCorrectionToogled(); break;
        case 36: _t->saveCubeForENVI(); break;
        case 37: _t->prepareToPlotSpectr(); break;
        case 38: _t->startIsClicked(); break;
        case 39: _t->finishIsClicked(); break;
        case 40: _t->createLinePlotterSlot(); break;
        case 41: _t->run2DCube(); break;
        case 42: _t->contrastSides(); break;
        case 43: _t->contrastTopSide(); break;
        case 44: _t->repaintSidesWithContrast((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->repaintTopWithContrast((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->updateCube(); break;
        case 47: _t->needToUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (GLWidget::*_t)(uint , uint , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::sendXYZ)) {
                *result = 1;
            }
        }
        {
            typedef void (GLWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::signalPlotSpectr)) {
                *result = 2;
            }
        }
        {
            typedef void (GLWidget::*_t)(uint , uint , uint , uint , uint , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::signalPlotAlongLine)) {
                *result = 3;
            }
        }
        {
            typedef void (GLWidget::*_t)(int , int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::drawLabel)) {
                *result = 4;
            }
        }
        {
            typedef void (GLWidget::*_t)(uint , uint , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::signalCurrentDataXYZ)) {
                *result = 5;
            }
        }
        {
            typedef void (GLWidget::*_t)(QPoint , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::flagsToolTip)) {
                *result = 6;
            }
        }
        {
            typedef void (GLWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::redrawSliders)) {
                *result = 7;
            }
        }
        {
            typedef void (GLWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::CanDelete)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject GLWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget.data,
      qt_meta_data_GLWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget.stringdata0))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(const_cast< GLWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GLWidget::sendXYZ(uint _t1, uint _t2, uint _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLWidget::signalPlotSpectr()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void GLWidget::signalPlotAlongLine(uint _t1, uint _t2, uint _t3, uint _t4, uint _t5, uint _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GLWidget::drawLabel(int _t1, int _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GLWidget::signalCurrentDataXYZ(uint _t1, uint _t2, uint _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GLWidget::flagsToolTip(QPoint _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GLWidget::redrawSliders()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void GLWidget::CanDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
