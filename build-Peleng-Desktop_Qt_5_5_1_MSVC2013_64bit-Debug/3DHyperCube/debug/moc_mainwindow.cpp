/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Peleng/3DHyperCube/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 5), // "Close"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "MainWindow*"
QT_MOC_LITERAL(4, 30, 1), // "w"
QT_MOC_LITERAL(5, 32, 14), // "StartOperation"
QT_MOC_LITERAL(6, 47, 10), // "setEnabled"
QT_MOC_LITERAL(7, 58, 15), // "FinishOperation"
QT_MOC_LITERAL(8, 74, 12), // "needToUpdate"
QT_MOC_LITERAL(9, 87, 11), // "labelBright"
QT_MOC_LITERAL(10, 99, 1), // "x"
QT_MOC_LITERAL(11, 101, 1), // "y"
QT_MOC_LITERAL(12, 103, 11), // "brightValue"
QT_MOC_LITERAL(13, 115, 17), // "showLabel_toggled"
QT_MOC_LITERAL(14, 133, 5), // "value"
QT_MOC_LITERAL(15, 139, 11), // "cubeResized"
QT_MOC_LITERAL(16, 151, 19), // "prepareToResizeCube"
QT_MOC_LITERAL(17, 171, 20), // "connectionsOfPlugins"
QT_MOC_LITERAL(18, 192, 18), // "setDisabledMenuBar"
QT_MOC_LITERAL(19, 211, 17), // "setEnabledMenuBar"
QT_MOC_LITERAL(20, 229, 7), // "X1chngd"
QT_MOC_LITERAL(21, 237, 3), // "num"
QT_MOC_LITERAL(22, 241, 7), // "X2chngd"
QT_MOC_LITERAL(23, 249, 24) // "on_action_ENVI_triggered"

    },
    "MainWindow\0Close\0\0MainWindow*\0w\0"
    "StartOperation\0setEnabled\0FinishOperation\0"
    "needToUpdate\0labelBright\0x\0y\0brightValue\0"
    "showLabel_toggled\0value\0cubeResized\0"
    "prepareToResizeCube\0connectionsOfPlugins\0"
    "setDisabledMenuBar\0setEnabledMenuBar\0"
    "X1chngd\0num\0X2chngd\0on_action_ENVI_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   88,    2, 0x0a /* Public */,
      13,    1,   95,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x0a /* Public */,
      16,    0,   99,    2, 0x0a /* Public */,
      17,    0,  100,    2, 0x0a /* Public */,
      18,    1,  101,    2, 0x0a /* Public */,
      19,    1,  104,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x08 /* Private */,
      22,    1,  110,    2, 0x08 /* Private */,
      23,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   10,   11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Close((*reinterpret_cast< MainWindow*(*)>(_a[1]))); break;
        case 1: _t->StartOperation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->FinishOperation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->labelBright((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->showLabel_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cubeResized(); break;
        case 6: _t->prepareToResizeCube(); break;
        case 7: _t->connectionsOfPlugins(); break;
        case 8: _t->setDisabledMenuBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setEnabledMenuBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->X1chngd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->X2chngd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_action_ENVI_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (MainWindow::*_t)(MainWindow * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Close)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartOperation)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::FinishOperation)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::Close(MainWindow * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::StartOperation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::FinishOperation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
