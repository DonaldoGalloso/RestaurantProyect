/****************************************************************************
** Meta object code from reading C++ file 'anfitrion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RestAu/anfitrion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'anfitrion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Anfitrion_t {
    QByteArrayData data[9];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Anfitrion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Anfitrion_t qt_meta_stringdata_Anfitrion = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Anfitrion"
QT_MOC_LITERAL(1, 10, 30), // "on_Dipinibilidad_Mesas_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_Disponibilidad_Mesas_clicked"
QT_MOC_LITERAL(4, 74, 17), // "on_salida_clicked"
QT_MOC_LITERAL(5, 92, 17), // "on_Mesa_1_clicked"
QT_MOC_LITERAL(6, 110, 17), // "on_Mesa_2_clicked"
QT_MOC_LITERAL(7, 128, 17), // "on_Mesa_3_clicked"
QT_MOC_LITERAL(8, 146, 17) // "on_Mesa_4_clicked"

    },
    "Anfitrion\0on_Dipinibilidad_Mesas_clicked\0"
    "\0on_Disponibilidad_Mesas_clicked\0"
    "on_salida_clicked\0on_Mesa_1_clicked\0"
    "on_Mesa_2_clicked\0on_Mesa_3_clicked\0"
    "on_Mesa_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Anfitrion[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Anfitrion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Anfitrion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Dipinibilidad_Mesas_clicked(); break;
        case 1: _t->on_Disponibilidad_Mesas_clicked(); break;
        case 2: _t->on_salida_clicked(); break;
        case 3: _t->on_Mesa_1_clicked(); break;
        case 4: _t->on_Mesa_2_clicked(); break;
        case 5: _t->on_Mesa_3_clicked(); break;
        case 6: _t->on_Mesa_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Anfitrion::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Anfitrion.data,
    qt_meta_data_Anfitrion,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Anfitrion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Anfitrion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Anfitrion.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Anfitrion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
