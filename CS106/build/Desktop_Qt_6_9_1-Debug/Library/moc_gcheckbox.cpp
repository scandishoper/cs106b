/****************************************************************************
** Meta object code from reading C++ file 'gcheckbox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Library/graphics/gcheckbox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gcheckbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN19_Internal_QCheckBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto _Internal_QCheckBox::qt_create_metaobjectdata<qt_meta_tag_ZN19_Internal_QCheckBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "_Internal_QCheckBox",
        "doubleClicked",
        "",
        "handleStateChange"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleStateChange'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<_Internal_QCheckBox, qt_meta_tag_ZN19_Internal_QCheckBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject _Internal_QCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19_Internal_QCheckBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19_Internal_QCheckBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19_Internal_QCheckBoxE_t>.metaTypes,
    nullptr
} };

void _Internal_QCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<_Internal_QCheckBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        case 1: _t->handleStateChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (_Internal_QCheckBox::*)()>(_a, &_Internal_QCheckBox::doubleClicked, 0))
            return;
    }
}

const QMetaObject *_Internal_QCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_Internal_QCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19_Internal_QCheckBoxE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "_Internal_QWidget"))
        return static_cast< _Internal_QWidget*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int _Internal_QCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void _Internal_QCheckBox::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
