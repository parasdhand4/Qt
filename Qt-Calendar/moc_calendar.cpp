/****************************************************************************
** Meta object code from reading C++ file 'calendar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Desktop/Qt-Calendar/calendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calendar_t {
    QByteArrayData data[18];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calendar_t qt_meta_stringdata_Calendar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Calendar"
QT_MOC_LITERAL(1, 9, 18), // "startOfWeekChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "Qt::DayOfWeek"
QT_MOC_LITERAL(4, 43, 13), // "doubleClicked"
QT_MOC_LITERAL(5, 57, 1), // "x"
QT_MOC_LITERAL(6, 59, 1), // "y"
QT_MOC_LITERAL(7, 61, 12), // "cellsResized"
QT_MOC_LITERAL(8, 74, 14), // "loadMonthLists"
QT_MOC_LITERAL(9, 89, 17), // "freezeDoubleClick"
QT_MOC_LITERAL(10, 107, 12), // "showItemList"
QT_MOC_LITERAL(11, 120, 8), // "sha1List"
QT_MOC_LITERAL(12, 129, 8), // "numFiles"
QT_MOC_LITERAL(13, 138, 15), // "showEventDialog"
QT_MOC_LITERAL(14, 154, 4), // "sha1"
QT_MOC_LITERAL(15, 159, 4), // "date"
QT_MOC_LITERAL(16, 164, 20), // "showFileDetailDialog"
QT_MOC_LITERAL(17, 185, 8) // "itemSha1"

    },
    "Calendar\0startOfWeekChanged\0\0Qt::DayOfWeek\0"
    "doubleClicked\0x\0y\0cellsResized\0"
    "loadMonthLists\0freezeDoubleClick\0"
    "showItemList\0sha1List\0numFiles\0"
    "showEventDialog\0sha1\0date\0"
    "showFileDetailDialog\0itemSha1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calendar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    2,   62,    2, 0x0a /* Public */,
       7,    0,   67,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    2,   70,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,
      13,    1,   78,    2, 0x08 /* Private */,
      16,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QDate,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void Calendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calendar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startOfWeekChanged((*reinterpret_cast< Qt::DayOfWeek(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->cellsResized(); break;
        case 3: _t->loadMonthLists(); break;
        case 4: _t->freezeDoubleClick(); break;
        case 5: _t->showItemList((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->showEventDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->showEventDialog((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->showFileDetailDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calendar::staticMetaObject = { {
    &QCalendarWidget::staticMetaObject,
    qt_meta_stringdata_Calendar.data,
    qt_meta_data_Calendar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calendar.stringdata0))
        return static_cast<void*>(this);
    return QCalendarWidget::qt_metacast(_clname);
}

int Calendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCalendarWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
