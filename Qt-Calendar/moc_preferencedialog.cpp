/****************************************************************************
** Meta object code from reading C++ file 'preferencedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Desktop/Qt-Calendar/preferencedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferencedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreferenceDialog_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferenceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferenceDialog_t qt_meta_stringdata_PreferenceDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PreferenceDialog"
QT_MOC_LITERAL(1, 17, 12), // "changeLocale"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "locate"
QT_MOC_LITERAL(4, 38, 17), // "changeStartOfWeek"
QT_MOC_LITERAL(5, 56, 13), // "Qt::DayOfWeek"
QT_MOC_LITERAL(6, 70, 3), // "day"
QT_MOC_LITERAL(7, 74, 17), // "changePreferences"
QT_MOC_LITERAL(8, 92, 6) // "accept"

    },
    "PreferenceDialog\0changeLocale\0\0locate\0"
    "changeStartOfWeek\0Qt::DayOfWeek\0day\0"
    "changePreferences\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferenceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       7,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QLocale,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PreferenceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreferenceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeLocale((*reinterpret_cast< const QLocale(*)>(_a[1]))); break;
        case 1: _t->changeStartOfWeek((*reinterpret_cast< Qt::DayOfWeek(*)>(_a[1]))); break;
        case 2: _t->changePreferences(); break;
        case 3: _t->accept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreferenceDialog::*)(const QLocale & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferenceDialog::changeLocale)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreferenceDialog::*)(Qt::DayOfWeek );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferenceDialog::changeStartOfWeek)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PreferenceDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferenceDialog::changePreferences)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PreferenceDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PreferenceDialog.data,
    qt_meta_data_PreferenceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreferenceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferenceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreferenceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PreferenceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void PreferenceDialog::changeLocale(const QLocale & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreferenceDialog::changeStartOfWeek(Qt::DayOfWeek _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PreferenceDialog::changePreferences()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
