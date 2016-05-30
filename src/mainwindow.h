#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include "persona.h"
#include <QCloseEvent>
#include "widgetletraapellidos.h"
//#include <boost/shared_ptr.hpp>
#include "pago.h"
#include "dlglistado.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QMap<QString, widgetLetraApellidos*> widgetLetras;
    QMap<QString, Persona*> personas;
    Persona *persona;
    QString filename;
    bool dirty;
    bool dbDirty;
    bool loadingData;

    void cargarWidgetApellidos();
    void cargarPersonas();
    void ocultarLetrasSinDatos();
    bool sePuedeCambiarDePersona();
    bool needsToSaveData();
    void actualizarIndice(QString letra);
    void guardarPersona();
    void addNota(QString &nota);

    void clearDatos();

    PagoLst obtenerPagos(int mes, int anio);
    DlgListado *listado;

protected:
    void closeEvent(QCloseEvent *evt);

private slots:
    void personaSeleccionada(QString nombrePersona);

    void on_action_Guardar_triggered();
    void on_action_Salir_triggered();
    void on_action_Nueva_triggered();
    void on_action_Borrar_triggered();
    void on_txtApellido_textEdited(const QString &arg1);
    void on_txtNombres_textEdited(const QString &arg1);
    void on_txtDatosPersonales_textChanged();
    void on_txtNotas_textChanged();
    void on_action_Guardar_2_triggered();

    void on_btnGrabar_pressed();
    void on_btnPagar_pressed();
    void on_btnAddNota_2_pressed();
    void on_txtTelefono_textEdited(const QString &arg1);
    void requestForData(int Year, int Month);
    void on_actionPagos_triggered();
};

#endif // MAINWINDOW_H
