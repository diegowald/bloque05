/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     113,   11,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     175,  170,   11,   11, 0x08,
     210,  170,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     306,   11,   11,   11, 0x08,
     338,   11,   11,   11, 0x08,
     361,   11,   11,   11, 0x08,
     383,   11,   11,   11, 0x08,
     409,  170,   11,   11, 0x08,
     455,  444,   11,   11, 0x08,
     479,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0nombrePersona\0"
    "personaSeleccionada(QString)\0"
    "on_action_Guardar_triggered()\0"
    "on_action_Salir_triggered()\0"
    "on_action_Nueva_triggered()\0"
    "on_action_Borrar_triggered()\0arg1\0"
    "on_txtApellido_textEdited(QString)\0"
    "on_txtNombres_textEdited(QString)\0"
    "on_txtDatosPersonales_textChanged()\0"
    "on_txtNotas_textChanged()\0"
    "on_action_Guardar_2_triggered()\0"
    "on_btnGrabar_pressed()\0on_btnPagar_pressed()\0"
    "on_btnAddNota_2_pressed()\0"
    "on_txtTelefono_textEdited(QString)\0"
    "Year,Month\0requestForData(int,int)\0"
    "on_actionPagos_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->personaSeleccionada((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_action_Guardar_triggered(); break;
        case 2: _t->on_action_Salir_triggered(); break;
        case 3: _t->on_action_Nueva_triggered(); break;
        case 4: _t->on_action_Borrar_triggered(); break;
        case 5: _t->on_txtApellido_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_txtNombres_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_txtDatosPersonales_textChanged(); break;
        case 8: _t->on_txtNotas_textChanged(); break;
        case 9: _t->on_action_Guardar_2_triggered(); break;
        case 10: _t->on_btnGrabar_pressed(); break;
        case 11: _t->on_btnPagar_pressed(); break;
        case 12: _t->on_btnAddNota_2_pressed(); break;
        case 13: _t->on_txtTelefono_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->requestForData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->on_actionPagos_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE