/****************************************************************************
** Meta object code from reading C++ file 'affichesolutions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "affichesolutions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'affichesolutions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AfficheSolutions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   17,   17,   17, 0x0a,
      57,   17,   17,   17, 0x0a,
      71,   17,   17,   17, 0x0a,
      86,   17,   17,   17, 0x0a,
     103,   17,   17,   17, 0x0a,
     123,   17,   17,   17, 0x0a,
     140,   17,   17,   17, 0x0a,
     159,   17,   17,   17, 0x0a,
     176,   17,   17,   17, 0x0a,
     188,   17,   17,   17, 0x0a,
     204,   17,   17,   17, 0x0a,
     239,  237,   17,   17, 0x0a,
     280,  237,   17,   17, 0x0a,
     317,   17,   17,   17, 0x0a,
     342,   17,   17,   17, 0x0a,
     358,   17,   17,   17, 0x0a,
     372,   17,   17,   17, 0x0a,
     386,   17,   17,   17, 0x0a,
     399,   17,   17,   17, 0x0a,
     412,   17,   17,   17, 0x0a,
     425,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AfficheSolutions[] = {
    "AfficheSolutions\0\0typeAffichageEmit(int)\0"
    "OuvreOptions2()\0choixVue(int)\0"
    "ChoixVueSats()\0ChoixVueStatus()\0"
    "ChoixVueDoneesCom()\0ChoixVueObserv()\0"
    "ChoixVueNavidata()\0ChoixVueStream()\0"
    "FermeTout()\0initAffichage()\0"
    "recupedonneesStatus(QStringList)\0,\0"
    "recupedonneesSatellites(QStringList,int)\0"
    "recupedonneesStream(QStringList,int)\0"
    "affichePointNbr(QString)\0finThread(bool)\0"
    "unitchoice1()\0unitchoice2()\0satchoice1()\0"
    "satchoice2()\0satchoice3()\0sauvegardeoptions()\0"
};

void AfficheSolutions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AfficheSolutions *_t = static_cast<AfficheSolutions *>(_o);
        switch (_id) {
        case 0: _t->typeAffichageEmit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OuvreOptions2(); break;
        case 2: _t->choixVue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ChoixVueSats(); break;
        case 4: _t->ChoixVueStatus(); break;
        case 5: _t->ChoixVueDoneesCom(); break;
        case 6: _t->ChoixVueObserv(); break;
        case 7: _t->ChoixVueNavidata(); break;
        case 8: _t->ChoixVueStream(); break;
        case 9: _t->FermeTout(); break;
        case 10: _t->initAffichage(); break;
        case 11: _t->recupedonneesStatus((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 12: _t->recupedonneesSatellites((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->recupedonneesStream((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->affichePointNbr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->finThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->unitchoice1(); break;
        case 17: _t->unitchoice2(); break;
        case 18: _t->satchoice1(); break;
        case 19: _t->satchoice2(); break;
        case 20: _t->satchoice3(); break;
        case 21: _t->sauvegardeoptions(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AfficheSolutions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AfficheSolutions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AfficheSolutions,
      qt_meta_data_AfficheSolutions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AfficheSolutions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AfficheSolutions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AfficheSolutions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AfficheSolutions))
        return static_cast<void*>(const_cast< AfficheSolutions*>(this));
    return QDialog::qt_metacast(_clname);
}

int AfficheSolutions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void AfficheSolutions::typeAffichageEmit(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
