/****************************************************************************
** Meta object code from reading C++ file 'contactuserlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../contactuserlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactuserlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContactUserList_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactUserList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactUserList_t qt_meta_stringdata_ContactUserList = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ContactUserList"
QT_MOC_LITERAL(1, 16, 24), // "sig_loading_contact_user"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 28), // "sig_switch_apply_friend_page"
QT_MOC_LITERAL(4, 71, 27), // "sig_switch_friend_info_page"
QT_MOC_LITERAL(5, 99, 17), // "slot_item_clicked"
QT_MOC_LITERAL(6, 117, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 134, 4) // "item"

    },
    "ContactUserList\0sig_loading_contact_user\0"
    "\0sig_switch_apply_friend_page\0"
    "sig_switch_friend_info_page\0"
    "slot_item_clicked\0QListWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactUserList[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ContactUserList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactUserList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_loading_contact_user(); break;
        case 1: _t->sig_switch_apply_friend_page(); break;
        case 2: _t->sig_switch_friend_info_page(); break;
        case 3: _t->slot_item_clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactUserList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUserList::sig_loading_contact_user)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContactUserList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUserList::sig_switch_apply_friend_page)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ContactUserList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContactUserList::sig_switch_friend_info_page)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ContactUserList::staticMetaObject = { {
    &QListWidget::staticMetaObject,
    qt_meta_stringdata_ContactUserList.data,
    qt_meta_data_ContactUserList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContactUserList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactUserList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContactUserList.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int ContactUserList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void ContactUserList::sig_loading_contact_user()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ContactUserList::sig_switch_apply_friend_page()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ContactUserList::sig_switch_friend_info_page()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE