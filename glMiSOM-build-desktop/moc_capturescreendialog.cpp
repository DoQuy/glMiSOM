/****************************************************************************
** Meta object code from reading C++ file 'capturescreendialog.h'
**
** Created: Sat Oct 15 11:51:56 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glMiSOM/UI/capturescreendialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capturescreendialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CaptureScreenDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      44,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CaptureScreenDialog[] = {
    "CaptureScreenDialog\0\0on_btnCancel_clicked()\0"
    "on_btnCapture_clicked()\0"
};

const QMetaObject CaptureScreenDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CaptureScreenDialog,
      qt_meta_data_CaptureScreenDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CaptureScreenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CaptureScreenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CaptureScreenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureScreenDialog))
        return static_cast<void*>(const_cast< CaptureScreenDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CaptureScreenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnCancel_clicked(); break;
        case 1: on_btnCapture_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
