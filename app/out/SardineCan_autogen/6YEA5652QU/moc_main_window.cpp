/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sardine_can__MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sardine_can__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sardine_can__MainWindow_t qt_meta_stringdata_sardine_can__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "sardine_can::MainWindow"
QT_MOC_LITERAL(1, 24, 20), // "nextPedalBankClicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 24), // "previousPedalBankClicked"
QT_MOC_LITERAL(4, 71, 16), // "handleBankChange"
QT_MOC_LITERAL(5, 88, 18), // "enable_left_button"
QT_MOC_LITERAL(6, 107, 19), // "enable_right_button"
QT_MOC_LITERAL(7, 127, 10), // "bank_index"
QT_MOC_LITERAL(8, 138, 13), // "showScanModal"
QT_MOC_LITERAL(9, 152, 10), // "cancelScan"
QT_MOC_LITERAL(10, 163, 14), // "showSetupModal"
QT_MOC_LITERAL(11, 178, 12), // "saveSettings"
QT_MOC_LITERAL(12, 191, 15), // "NetworkSettings"
QT_MOC_LITERAL(13, 207, 8), // "settings"
QT_MOC_LITERAL(14, 216, 18), // "handlePedalClicked"
QT_MOC_LITERAL(15, 235, 11) // "pedal_index"

    },
    "sardine_can::MainWindow\0nextPedalBankClicked\0"
    "\0previousPedalBankClicked\0handleBankChange\0"
    "enable_left_button\0enable_right_button\0"
    "bank_index\0showScanModal\0cancelScan\0"
    "showSetupModal\0saveSettings\0NetworkSettings\0"
    "settings\0handlePedalClicked\0pedal_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sardine_can__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   56,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      14,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void sardine_can::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nextPedalBankClicked(); break;
        case 1: _t->previousPedalBankClicked(); break;
        case 2: _t->handleBankChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->showScanModal(); break;
        case 4: _t->cancelScan(); break;
        case 5: _t->showSetupModal(); break;
        case 6: _t->saveSettings((*reinterpret_cast< const NetworkSettings(*)>(_a[1]))); break;
        case 7: _t->handlePedalClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::nextPedalBankClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::previousPedalBankClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sardine_can::MainWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_sardine_can__MainWindow.data,
    qt_meta_data_sardine_can__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sardine_can::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sardine_can::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sardine_can__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int sardine_can::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void sardine_can::MainWindow::nextPedalBankClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void sardine_can::MainWindow::previousPedalBankClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
