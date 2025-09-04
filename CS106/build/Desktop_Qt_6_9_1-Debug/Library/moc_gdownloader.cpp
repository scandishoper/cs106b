/****************************************************************************
** Meta object code from reading C++ file 'gdownloader.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Library/graphics/gdownloader.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gdownloader.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11GDownloaderE_t {};
} // unnamed namespace

template <> constexpr inline auto GDownloader::qt_create_metaobjectdata<qt_meta_tag_ZN11GDownloaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GDownloader",
        "downloaded",
        "",
        "downloadInternal",
        "fileDownloadError",
        "QNetworkReply::NetworkError",
        "reportNoSSL",
        "saveDownloadedData",
        "std::string",
        "member",
        "filename",
        "sslErrorsNam",
        "QNetworkReply*",
        "QList<QSslError>",
        "sslErrorsReply",
        "waitForDownload"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'downloaded'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'downloadInternal'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fileDownloadError'
        QtMocHelpers::SlotData<void(QNetworkReply::NetworkError)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'reportNoSSL'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveDownloadedData'
        QtMocHelpers::SlotData<void(const std::string &, const std::string &)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 8, 10 },
        }}),
        // Slot 'saveDownloadedData'
        QtMocHelpers::SlotData<void(const std::string &)>(7, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'sslErrorsNam'
        QtMocHelpers::SlotData<void(QNetworkReply *, QList<QSslError>)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 2 }, { 0x80000000 | 13, 2 },
        }}),
        // Slot 'sslErrorsReply'
        QtMocHelpers::SlotData<void(QList<QSslError>)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Slot 'waitForDownload'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GDownloader, qt_meta_tag_ZN11GDownloaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GDownloaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GDownloaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11GDownloaderE_t>.metaTypes,
    nullptr
} };

void GDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GDownloader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->downloaded(); break;
        case 1: _t->downloadInternal(); break;
        case 2: _t->fileDownloadError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 3: _t->reportNoSSL(); break;
        case 4: _t->saveDownloadedData((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2]))); break;
        case 5: _t->saveDownloadedData((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 6: _t->sslErrorsNam((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[2]))); break;
        case 7: _t->sslErrorsReply((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 8: _t->waitForDownload(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GDownloader::*)()>(_a, &GDownloader::downloaded, 0))
            return;
    }
}

const QMetaObject *GDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GDownloaderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GDownloader::downloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
