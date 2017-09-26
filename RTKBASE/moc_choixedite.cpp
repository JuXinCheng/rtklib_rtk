/****************************************************************************
** Meta object code from reading C++ file 'choixedite.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "choixedite.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choixedite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChoixEdite[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      28,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   11,   11,   11, 0x0a,
      59,   11,   11,   11, 0x0a,
      75,   11,   11,   11, 0x0a,
      91,   11,   11,   11, 0x0a,
     107,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x0a,
     139,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     171,   11,   11,   11, 0x0a,
     187,   11,   11,   11, 0x0a,
     204,   11,   11,   11, 0x0a,
     221,   11,   11,   11, 0x0a,
     238,   11,   11,   11, 0x0a,
     247,   11,   11,   11, 0x0a,
     257,   11,   11,   11, 0x0a,
     277,  269,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChoixEdite[] = {
    "ChoixEdite\0\0DemandeRetour()\0DemandeFerme()\0"
    "SelectConfig1()\0SelectConfig2()\0"
    "SelectConfig3()\0SelectConfig4()\0"
    "SelectConfig5()\0SelectConfig6()\0"
    "SelectConfig7()\0SelectConfig8()\0"
    "SelectConfig9()\0SelectConfig10()\0"
    "SelectConfig11()\0SelectConfig12()\0"
    "Retour()\0Affiche()\0FermeTout()\0newname\0"
    "SauveNom(QString)\0"
};

void ChoixEdite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChoixEdite *_t = static_cast<ChoixEdite *>(_o);
        switch (_id) {
        case 0: _t->DemandeRetour(); break;
        case 1: _t->DemandeFerme(); break;
        case 2: _t->SelectConfig1(); break;
        case 3: _t->SelectConfig2(); break;
        case 4: _t->SelectConfig3(); break;
        case 5: _t->SelectConfig4(); break;
        case 6: _t->SelectConfig5(); break;
        case 7: _t->SelectConfig6(); break;
        case 8: _t->SelectConfig7(); break;
        case 9: _t->SelectConfig8(); break;
        case 10: _t->SelectConfig9(); break;
        case 11: _t->SelectConfig10(); break;
        case 12: _t->SelectConfig11(); break;
        case 13: _t->SelectConfig12(); break;
        case 14: _t->Retour(); break;
        case 15: _t->Affiche(); break;
        case 16: _t->FermeTout(); break;
        case 17: _t->SauveNom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChoixEdite::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChoixEdite::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChoixEdite,
      qt_meta_data_ChoixEdite, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChoixEdite::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChoixEdite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChoixEdite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChoixEdite))
        return static_cast<void*>(const_cast< ChoixEdite*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChoixEdite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ChoixEdite::DemandeRetour()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ChoixEdite::DemandeFerme()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
