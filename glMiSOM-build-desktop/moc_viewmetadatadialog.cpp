/****************************************************************************
** Meta object code from reading C++ file 'viewmetadatadialog.h'
**
** Created: Sat Oct 15 11:20:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glMiSOM/UI/viewmetadatadialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewmetadatadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewMetadataDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   37,   19,   19, 0x08,
      95,   89,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewMetadataDialog[] = {
    "ViewMetadataDialog\0\0geo\0close(QRect)\0"
    "currentRow\0on_lstDescriptors_currentRowChanged(int)\0"
    "index\0on_cmbImage_currentIndexChanged(int)\0"
};

const QMetaObject ViewMetadataDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewMetadataDialog,
      qt_meta_data_ViewMetadataDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewMetadataDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewMetadataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewMetadataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewMetadataDialog))
        return static_cast<void*>(const_cast< ViewMetadataDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ViewMetadataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: close((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 1: on_lstDescriptors_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_cmbImage_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ViewMetadataDialog::close(QRect _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
