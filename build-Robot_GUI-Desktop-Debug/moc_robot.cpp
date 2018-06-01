/****************************************************************************
** Meta object code from reading C++ file 'robot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Robot_GUI/robot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_robot_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_robot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_robot_t qt_meta_stringdata_robot = {
    {
QT_MOC_LITERAL(0, 0, 5), // "robot"
QT_MOC_LITERAL(1, 6, 21), // "on_initialize_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "on_terminate_clicked"
QT_MOC_LITERAL(4, 50, 15), // "on_home_clicked"
QT_MOC_LITERAL(5, 66, 14), // "on_jog_toggled"
QT_MOC_LITERAL(6, 81, 7), // "checked"
QT_MOC_LITERAL(7, 89, 15), // "on_move_clicked"
QT_MOC_LITERAL(8, 105, 17) // "on_raster_clicked"

    },
    "robot\0on_initialize_clicked\0\0"
    "on_terminate_clicked\0on_home_clicked\0"
    "on_jog_toggled\0checked\0on_move_clicked\0"
    "on_raster_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_robot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void robot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        robot *_t = static_cast<robot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_initialize_clicked(); break;
        case 1: _t->on_terminate_clicked(); break;
        case 2: _t->on_home_clicked(); break;
        case 3: _t->on_jog_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_move_clicked(); break;
        case 5: _t->on_raster_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject robot::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_robot.data,
      qt_meta_data_robot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *robot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *robot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_robot.stringdata0))
        return static_cast<void*>(const_cast< robot*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int robot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
