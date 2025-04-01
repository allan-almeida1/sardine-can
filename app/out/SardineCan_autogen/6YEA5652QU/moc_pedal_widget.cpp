/****************************************************************************
** Meta object code from reading C++ file 'pedal_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/pedal_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pedal_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sardine_can__PedalWidget_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sardine_can__PedalWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sardine_can__PedalWidget_t qt_meta_stringdata_sardine_can__PedalWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "sardine_can::PedalWidget"
QT_MOC_LITERAL(1, 25, 11), // "bankChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "enable_left_button"
QT_MOC_LITERAL(4, 57, 19), // "enable_right_button"
QT_MOC_LITERAL(5, 77, 10), // "bank_index"
QT_MOC_LITERAL(6, 88, 12), // "pedalClicked"
QT_MOC_LITERAL(7, 101, 11), // "pedal_index"
QT_MOC_LITERAL(8, 113, 13), // "nextPedalBank"
QT_MOC_LITERAL(9, 127, 17) // "previousPedalBank"

    },
    "sardine_can::PedalWidget\0bankChanged\0"
    "\0enable_left_button\0enable_right_button\0"
    "bank_index\0pedalClicked\0pedal_index\0"
    "nextPedalBank\0previousPedalBank"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sardine_can__PedalWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       6,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   44,    2, 0x0a /* Public */,
       9,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sardine_can::PedalWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PedalWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bankChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->pedalClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->nextPedalBank(); break;
        case 3: _t->previousPedalBank(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PedalWidget::*)(bool , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PedalWidget::bankChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PedalWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PedalWidget::pedalClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sardine_can::PedalWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_sardine_can__PedalWidget.data,
    qt_meta_data_sardine_can__PedalWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sardine_can::PedalWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sardine_can::PedalWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sardine_can__PedalWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sardine_can::PedalWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void sardine_can::PedalWidget::bankChanged(bool _t1, bool _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sardine_can::PedalWidget::pedalClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
