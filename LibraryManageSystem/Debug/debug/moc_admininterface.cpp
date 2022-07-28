/****************************************************************************
** Meta object code from reading C++ file 'admininterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../admininterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admininterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminInterface_t {
    const uint offsetsAndSize[12];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AdminInterface_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AdminInterface_t qt_meta_stringdata_AdminInterface = {
    {
QT_MOC_LITERAL(0, 14), // "AdminInterface"
QT_MOC_LITERAL(15, 9), // "adminQuit"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 28), // "on_userManagementBtn_clicked"
QT_MOC_LITERAL(55, 28), // "on_bookManagementBtn_clicked"
QT_MOC_LITERAL(84, 21) // "on_AF_QuitBtn_clicked"

    },
    "AdminInterface\0adminQuit\0\0"
    "on_userManagementBtn_clicked\0"
    "on_bookManagementBtn_clicked\0"
    "on_AF_QuitBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminInterface[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adminQuit(); break;
        case 1: _t->on_userManagementBtn_clicked(); break;
        case 2: _t->on_bookManagementBtn_clicked(); break;
        case 3: _t->on_AF_QuitBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminInterface::adminQuit)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject AdminInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AdminInterface.offsetsAndSize,
    qt_meta_data_AdminInterface,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminInterface_t
, QtPrivate::TypeAndForceComplete<AdminInterface, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AdminInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdminInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AdminInterface::adminQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
