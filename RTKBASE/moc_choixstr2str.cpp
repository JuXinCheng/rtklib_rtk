/****************************************************************************
** Meta object code from reading C++ file 'choixstr2str.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "choixstr2str.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choixstr2str.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChoixStr2Str[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   13,   13,   13, 0x0a,
      49,   13,   13,   13, 0x0a,
      63,   13,   13,   13, 0x0a,
      77,   13,   13,   13, 0x0a,
      91,   13,   13,   13, 0x0a,
     105,   13,   13,   13, 0x0a,
     119,   13,   13,   13, 0x0a,
     133,   13,   13,   13, 0x0a,
     147,   13,   13,   13, 0x0a,
     161,   13,   13,   13, 0x0a,
     176,   13,   13,   13, 0x0a,
     191,   13,   13,   13, 0x0a,
     206,   13,   13,   13, 0x0a,
     223,  215,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChoixStr2Str[] = {
    "ChoixStr2Str\0\0file\0Charge(QString)\0"
    "SelectBase1()\0SelectBase2()\0SelectBase3()\0"
    "SelectBase4()\0SelectBase5()\0SelectBase6()\0"
    "SelectBase7()\0SelectBase8()\0SelectBase9()\0"
    "SelectBase10()\0SelectBase11()\0"
    "SelectBase12()\0Retour()\0newName\0"
    "SauveNom(QString)\0"
};

void ChoixStr2Str::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChoixStr2Str *_t = static_cast<ChoixStr2Str *>(_o);
        switch (_id) {
        case 0: _t->Charge((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SelectBase1(); break;
        case 2: _t->SelectBase2(); break;
        case 3: _t->SelectBase3(); break;
        case 4: _t->SelectBase4(); break;
        case 5: _t->SelectBase5(); break;
        case 6: _t->SelectBase6(); break;
        case 7: _t->SelectBase7(); break;
        case 8: _t->SelectBase8(); break;
        case 9: _t->SelectBase9(); break;
        case 10: _t->SelectBase10(); break;
        case 11: _t->SelectBase11(); break;
        case 12: _t->SelectBase12(); break;
        case 13: _t->Retour(); break;
        case 14: _t->SauveNom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChoixStr2Str::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChoixStr2Str::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChoixStr2Str,
      qt_meta_data_ChoixStr2Str, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChoixStr2Str::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChoixStr2Str::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChoixStr2Str::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChoixStr2Str))
        return static_cast<void*>(const_cast< ChoixStr2Str*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChoixStr2Str::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ChoixStr2Str::Charge(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
