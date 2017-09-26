/****************************************************************************
** Meta object code from reading C++ file 'editeconfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editeconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editeconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditeConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      29,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   12,   12,   12, 0x0a,
      53,   12,   12,   12, 0x0a,
      66,   60,   12,   12, 0x0a,
      85,   60,   12,   12, 0x0a,
     106,   60,   12,   12, 0x0a,
     129,   60,   12,   12, 0x0a,
     152,   60,   12,   12, 0x0a,
     175,   60,   12,   12, 0x0a,
     198,   12,   12,   12, 0x0a,
     216,   12,   12,   12, 0x0a,
     234,   12,   12,   12, 0x0a,
     251,   12,   12,   12, 0x0a,
     266,   12,   12,   12, 0x0a,
     281,   12,   12,   12, 0x0a,
     296,   12,   12,   12, 0x0a,
     311,   12,   12,   12, 0x0a,
     330,   12,   12,   12, 0x0a,
     349,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditeConfig[] = {
    "EditeConfig\0\0DemandeRetour()\0"
    "DemandeFerme()\0Retour()\0Save()\0index\0"
    "ChangePosMode(int)\0ChangeSolFormat(int)\0"
    "ChangeInpstrtype2(int)\0ChangeInpstrtype3(int)\0"
    "ChangeOutstr1type(int)\0ChangeLogstr1type(int)\0"
    "ChoixSatantfile()\0ChoixRcvantfile()\0"
    "ChoixGeoidfile()\0ChoixDCBfile()\0"
    "ChoixEOPfile()\0ChoixBLQfile()\0"
    "ChoixTempdir()\0ChoixImpstr2path()\0"
    "ChoixOutstr1path()\0ChoixLogstr1path()\0"
};

void EditeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditeConfig *_t = static_cast<EditeConfig *>(_o);
        switch (_id) {
        case 0: _t->DemandeRetour(); break;
        case 1: _t->DemandeFerme(); break;
        case 2: _t->Retour(); break;
        case 3: _t->Save(); break;
        case 4: _t->ChangePosMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ChangeSolFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ChangeInpstrtype2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ChangeInpstrtype3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->ChangeOutstr1type((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->ChangeLogstr1type((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->ChoixSatantfile(); break;
        case 11: _t->ChoixRcvantfile(); break;
        case 12: _t->ChoixGeoidfile(); break;
        case 13: _t->ChoixDCBfile(); break;
        case 14: _t->ChoixEOPfile(); break;
        case 15: _t->ChoixBLQfile(); break;
        case 16: _t->ChoixTempdir(); break;
        case 17: _t->ChoixImpstr2path(); break;
        case 18: _t->ChoixOutstr1path(); break;
        case 19: _t->ChoixLogstr1path(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditeConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditeConfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditeConfig,
      qt_meta_data_EditeConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditeConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditeConfig))
        return static_cast<void*>(const_cast< EditeConfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void EditeConfig::DemandeRetour()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EditeConfig::DemandeFerme()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
