/****************************************************************************
** Meta object code from reading C++ file 'choixconfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "choixconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choixconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChoixConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
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
      58,   12,   12,   12, 0x0a,
      70,   12,   12,   12, 0x0a,
      82,   12,   12,   12, 0x0a,
      93,   12,   12,   12, 0x0a,
     110,   12,   12,   12, 0x0a,
     130,   12,   12,   12, 0x0a,
     145,   12,   12,   12, 0x0a,
     160,   12,   12,   12, 0x0a,
     175,   12,   12,   12, 0x0a,
     190,   12,   12,   12, 0x0a,
     205,   12,   12,   12, 0x0a,
     220,   12,   12,   12, 0x0a,
     235,   12,   12,   12, 0x0a,
     250,   12,   12,   12, 0x0a,
     265,   12,   12,   12, 0x0a,
     281,   12,   12,   12, 0x0a,
     297,   12,   12,   12, 0x0a,
     313,   12,   12,   12, 0x0a,
     325,   12,   12,   12, 0x0a,
     334,   12,   12,   12, 0x0a,
     344,   12,   12,   12, 0x0a,
     354,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChoixConfig[] = {
    "ChoixConfig\0\0DemandeRetour()\0"
    "DemandeFerme()\0ouvreSingle()\0ouvreSBAS()\0"
    "ouvreDGPS()\0ouvrePPP()\0ouvreRTKstatic()\0"
    "ouvreRTKkinematic()\0OuvreConfig1()\0"
    "OuvreConfig2()\0OuvreConfig3()\0"
    "OuvreConfig4()\0OuvreConfig5()\0"
    "OuvreConfig6()\0OuvreConfig7()\0"
    "OuvreConfig8()\0OuvreConfig9()\0"
    "OuvreConfig10()\0OuvreConfig11()\0"
    "OuvreConfig12()\0OuvreEdit()\0Retour()\0"
    "MAJNoms()\0Affiche()\0FermeTout()\0"
};

void ChoixConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChoixConfig *_t = static_cast<ChoixConfig *>(_o);
        switch (_id) {
        case 0: _t->DemandeRetour(); break;
        case 1: _t->DemandeFerme(); break;
        case 2: _t->ouvreSingle(); break;
        case 3: _t->ouvreSBAS(); break;
        case 4: _t->ouvreDGPS(); break;
        case 5: _t->ouvrePPP(); break;
        case 6: _t->ouvreRTKstatic(); break;
        case 7: _t->ouvreRTKkinematic(); break;
        case 8: _t->OuvreConfig1(); break;
        case 9: _t->OuvreConfig2(); break;
        case 10: _t->OuvreConfig3(); break;
        case 11: _t->OuvreConfig4(); break;
        case 12: _t->OuvreConfig5(); break;
        case 13: _t->OuvreConfig6(); break;
        case 14: _t->OuvreConfig7(); break;
        case 15: _t->OuvreConfig8(); break;
        case 16: _t->OuvreConfig9(); break;
        case 17: _t->OuvreConfig10(); break;
        case 18: _t->OuvreConfig11(); break;
        case 19: _t->OuvreConfig12(); break;
        case 20: _t->OuvreEdit(); break;
        case 21: _t->Retour(); break;
        case 22: _t->MAJNoms(); break;
        case 23: _t->Affiche(); break;
        case 24: _t->FermeTout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChoixConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChoixConfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChoixConfig,
      qt_meta_data_ChoixConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChoixConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChoixConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChoixConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChoixConfig))
        return static_cast<void*>(const_cast< ChoixConfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChoixConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void ChoixConfig::DemandeRetour()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ChoixConfig::DemandeFerme()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
