/****************************************************************************
** Meta object code from reading C++ file 'setup_dialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/setup_dialog.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sardine_can__SetupDialog_t {
    QByteArrayData data[14];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sardine_can__SetupDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sardine_can__SetupDialog_t qt_meta_stringdata_sardine_can__SetupDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "sardine_can::SetupDialog"
QT_MOC_LITERAL(1, 25, 12), // "saveSettings"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "NetworkSettings"
QT_MOC_LITERAL(4, 55, 8), // "settings"
QT_MOC_LITERAL(5, 64, 18), // "onNameInputChanged"
QT_MOC_LITERAL(6, 83, 4), // "text"
QT_MOC_LITERAL(7, 88, 16), // "onIPInputChanged"
QT_MOC_LITERAL(8, 105, 18), // "onPortInputChanged"
QT_MOC_LITERAL(9, 124, 23), // "validateAndCreateDevice"
QT_MOC_LITERAL(10, 148, 20), // "deleteSelectedDevice"
QT_MOC_LITERAL(11, 169, 18), // "enableDeleteButton"
QT_MOC_LITERAL(12, 188, 21), // "handleSaveButtonClick"
QT_MOC_LITERAL(13, 210, 11) // "clearInputs"

    },
    "sardine_can::SetupDialog\0saveSettings\0"
    "\0NetworkSettings\0settings\0onNameInputChanged\0"
    "text\0onIPInputChanged\0onPortInputChanged\0"
    "validateAndCreateDevice\0deleteSelectedDevice\0"
    "enableDeleteButton\0handleSaveButtonClick\0"
    "clearInputs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sardine_can__SetupDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sardine_can::SetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetupDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveSettings((*reinterpret_cast< const NetworkSettings(*)>(_a[1]))); break;
        case 1: _t->onNameInputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onIPInputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onPortInputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->validateAndCreateDevice(); break;
        case 5: _t->deleteSelectedDevice(); break;
        case 6: _t->enableDeleteButton(); break;
        case 7: _t->handleSaveButtonClick(); break;
        case 8: _t->clearInputs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetupDialog::*)(const NetworkSettings & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetupDialog::saveSettings)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sardine_can::SetupDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_sardine_can__SetupDialog.data,
    qt_meta_data_sardine_can__SetupDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sardine_can::SetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sardine_can::SetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sardine_can__SetupDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int sardine_can::SetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void sardine_can::SetupDialog::saveSettings(const NetworkSettings & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
