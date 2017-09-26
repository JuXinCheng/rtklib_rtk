/****************************************************************************
** Meta object code from reading C++ file 'optionsstr2str.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsstr2str.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsstr2str.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsStr2str[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      32,   15,   15,   15, 0x0a,
      43,   15,   15,   15, 0x0a,
      59,   54,   15,   15, 0x0a,
      87,   15,   15,   15, 0x08,
     117,   15,   15,   15, 0x08,
     154,   15,   15,   15, 0x08,
     193,   15,   15,   15, 0x08,
     239,  230,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsStr2str[] = {
    "OptionsStr2str\0\0OuvreDefault1()\0"
    "SaveBase()\0LoadBase()\0line\0"
    "AppelleClavier(MyLineEdit*)\0"
    "on_pushButtonManual_clicked()\0"
    "on_radioButtonPositionAuto_clicked()\0"
    "on_radioButtonPositionManual_clicked()\0"
    "on_UpdateOptionspushButton_clicked()\0"
    "baseFile\0Charge(QString)\0"
};

void OptionsStr2str::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsStr2str *_t = static_cast<OptionsStr2str *>(_o);
        switch (_id) {
        case 0: _t->OuvreDefault1(); break;
        case 1: _t->SaveBase(); break;
        case 2: _t->LoadBase(); break;
        case 3: _t->AppelleClavier((*reinterpret_cast< MyLineEdit*(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonManual_clicked(); break;
        case 5: _t->on_radioButtonPositionAuto_clicked(); break;
        case 6: _t->on_radioButtonPositionManual_clicked(); break;
        case 7: _t->on_UpdateOptionspushButton_clicked(); break;
        case 8: _t->Charge((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionsStr2str::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsStr2str::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsStr2str,
      qt_meta_data_OptionsStr2str, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsStr2str::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsStr2str::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsStr2str::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsStr2str))
        return static_cast<void*>(const_cast< OptionsStr2str*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsStr2str::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
