/****************************************************************************
** Meta object code from reading C++ file 'CANThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Threads/CANThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CANThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CANThread_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CANThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CANThread_t qt_meta_stringdata_CANThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CANThread"
QT_MOC_LITERAL(1, 10, 8), // "finished"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "error"
QT_MOC_LITERAL(4, 26, 9), // "newPacket"
QT_MOC_LITERAL(5, 36, 13), // "CANDataPacket"
QT_MOC_LITERAL(6, 50, 6), // "packet"
QT_MOC_LITERAL(7, 57, 5), // "start"
QT_MOC_LITERAL(8, 63, 20), // "readPendingDatagrams"
QT_MOC_LITERAL(9, 84, 19), // "broadcastCANRequest"
QT_MOC_LITERAL(10, 104, 16), // "CANControlPacket"
QT_MOC_LITERAL(11, 121, 7) // "request"

    },
    "CANThread\0finished\0\0error\0newPacket\0"
    "CANDataPacket\0packet\0start\0"
    "readPendingDatagrams\0broadcastCANRequest\0"
    "CANControlPacket\0request"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CANThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       4,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void CANThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CANThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newPacket((*reinterpret_cast< CANDataPacket(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->readPendingDatagrams(); break;
        case 5: _t->broadcastCANRequest((*reinterpret_cast< CANControlPacket(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CANThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CANThread::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CANThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CANThread::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CANThread::*)(CANDataPacket );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CANThread::newPacket)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CANThread::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CANThread.data,
    qt_meta_data_CANThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CANThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CANThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CANThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CANThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CANThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CANThread::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CANThread::newPacket(CANDataPacket _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
