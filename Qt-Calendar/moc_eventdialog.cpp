/****************************************************************************
** Meta object code from reading C++ file 'eventdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Desktop/Qt-Calendar/eventdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventDialog_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventDialog_t qt_meta_stringdata_EventDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EventDialog"
QT_MOC_LITERAL(1, 12, 13), // "repeatModeSet"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "repeatModeChanged"
QT_MOC_LITERAL(4, 45, 16), // "checkInputsLegal"
QT_MOC_LITERAL(5, 62, 29), // "checkStartEndTimeRelationship"
QT_MOC_LITERAL(6, 92, 13) // "confirmDelete"

    },
    "EventDialog\0repeatModeSet\0\0repeatModeChanged\0"
    "checkInputsLegal\0checkStartEndTimeRelationship\0"
    "confirmDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EventDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->repeatModeSet(); break;
        case 1: _t->repeatModeChanged(); break;
        case 2: _t->checkInputsLegal(); break;
        case 3: _t->checkStartEndTimeRelationship(); break;
        case 4: _t->confirmDelete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EventDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_EventDialog.data,
    qt_meta_data_EventDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EventDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EventDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
