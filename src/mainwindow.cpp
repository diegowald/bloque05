#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QDateTime>
#include <boost/make_shared.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    filename = "personas.data";
    cargarPersonas();
    cargarWidgetApellidos();
    ocultarLetrasSinDatos();
    dirty = false;
    dbDirty = false;
    loadingData = false;
    persona = NULL;
    listado = new DlgListado(this);
    connect(listado, SIGNAL(requestForData(int,int)), this, SLOT(requestForData(int,int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cargarWidgetApellidos()
{
    widgetLetras.clear();
    for (int i = 0; i < 26; i++)
    {
        QString letra = QString (QChar('A' + i));
        widgetLetraApellidos *w = new widgetLetraApellidos(this);
        ui->tabLetras->addTab(w, letra);
        widgetLetras[letra] = w;
        connect(w, SIGNAL(personaSeleccionada(QString)), this, SLOT(personaSeleccionada(QString)));
    }
    // Ahora cargo las personas en el widget
    foreach(Persona *p, personas)
    {
        widgetLetraApellidos *w = widgetLetras[p->LetraApellido()];
        w->addPersonaALista(p);
    }
}

void MainWindow::actualizarIndice(QString letra)
{
    widgetLetraApellidos *w = widgetLetras[letra];
    w->clearContents();
    foreach(Persona *p, personas)
    {
        if (p->LetraApellido() == letra)
        {
            w->addPersonaALista(p);
        }
    }
}

void MainWindow::cargarPersonas()
{
    // Cargo las personas desde la base de datos.
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly))
    {
        //no se puede abrir el archivo
        return; // false;
    }

    QDataStream dsIn(&file);

    int cantPersonas = 0;
    dsIn >> cantPersonas;

    for (int i = 0; i < cantPersonas; i++)
    {
        Persona *p = new Persona(this);
        dsIn >> (*p);
        personas[p->NombreCompleto()] = p;
    }
}

void MainWindow::ocultarLetrasSinDatos()
{
    ui->tabLetras->clear();
    foreach(QString tabName, widgetLetras.keys())
    {
        if (!widgetLetras[tabName]->vacio())
            ui->tabLetras->addTab(widgetLetras[tabName], tabName);
    }
}

void MainWindow::personaSeleccionada(QString nombrePersona)
{
    if (sePuedeCambiarDePersona())
    {
        persona = personas[nombrePersona];
        loadingData = true;
        ui->txtApellido->setText(persona->Apellido());
        ui->txtNombres->setText(persona->Nombres());
        ui->txtTelefono->setText(persona->Telefono());
        ui->txtDatosPersonales->setText(persona->DatosPersonales());
        ui->txtNotas->setText(persona->Notas());
        loadingData = false;
    }
}

void MainWindow::on_action_Guardar_triggered()
{
    // Cargo las personas desde la base de datos.
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly))
    {
        //no se puede abrir el archivo
        return; // false;
    }

    QDataStream dsOut(&file);

    dsOut << personas.size();

    foreach (Persona *p, personas)
    {
        dsOut << (*p);
    }
    dirty = false;
    loadingData = false;
    dbDirty = false;
}

void MainWindow::on_action_Salir_triggered()
{
    close();
}

void MainWindow::on_action_Nueva_triggered()
{
    if (sePuedeCambiarDePersona())
    {
        dirty = true;
        loadingData = false;
        persona = NULL;
        ui->txtApellido->clear();
        ui->txtNombres->clear();
        ui->txtTelefono->clear();
        ui->txtDatosPersonales->clear();
        ui->txtNotas->clear();
        loadingData = false;
    }
}

void MainWindow::on_action_Borrar_triggered()
{
    if (persona != NULL)
    {
        int r = QMessageBox::question(this, "Borrar Persona",
                                      "Desea borrar a " + persona->NombreCompleto() + "?",
                                      QMessageBox::Yes,
                                      QMessageBox::No | QMessageBox::Default | QMessageBox::Escape);

        if (r == QMessageBox::Yes)
        {
            QString key = persona->NombreCompleto();
            QString letra = persona->LetraApellido();
            delete personas[key];
            personas.remove(key);
            actualizarIndice(letra);
            on_action_Guardar_triggered();
            ocultarLetrasSinDatos();
            clearDatos();
        }
    }
}

void MainWindow::guardarPersona()
{
    Persona *personaActualizada = new Persona(ui->txtApellido->text(),
                                              ui->txtNombres->text(),
                                              ui->txtTelefono->text(),
                                              ui->txtDatosPersonales->toPlainText(),
                                              ui->txtNotas->toPlainText(),
                                              this);

    if (persona != NULL)
    {
        QString key = persona->NombreCompleto();
        QString letra = persona->LetraApellido();
        delete personas[key];
        personas.remove(key);
        actualizarIndice(letra);
    }

    personas[personaActualizada->NombreCompleto()] = personaActualizada;
    actualizarIndice(personaActualizada->LetraApellido());
    dirty = false;
    dbDirty = true;
}

bool MainWindow::sePuedeCambiarDePersona()
{
    if (dirty)
    {
        int r = QMessageBox::warning(this, "Cambiar Datos",
                                     "Se ha modificado la informacion. Acepta los cambios?",
                                     QMessageBox::Yes,
                                     QMessageBox::No,
                                     QMessageBox::Cancel | QMessageBox::Default | QMessageBox::Escape);

        if (r == QMessageBox::Yes)
        {
            guardarPersona();
            return true;
        }
        else if (r == QMessageBox::No)
        {
            return true;
        }
        else if(r == QMessageBox::Cancel)
        {
            return false;
        }
    }
    return true;
}

bool MainWindow::needsToSaveData()
{
    return dbDirty;
}

void MainWindow::on_txtApellido_textEdited(const QString &)
{
    if (!loadingData)
        dirty = true;
}

void MainWindow::on_txtNombres_textEdited(const QString &)
{
    if (!loadingData)
        dirty = true;
}

void MainWindow::on_txtDatosPersonales_textChanged()
{
    if (!loadingData)
        dirty = true;
}

void MainWindow::on_txtNotas_textChanged()
{
    if (!loadingData)
        dirty = true;
}

void MainWindow::on_txtTelefono_textEdited(const QString &)
{
    if (!loadingData)
        dirty = true;
}

void MainWindow::on_action_Guardar_2_triggered()
{
    guardarPersona();
}

void MainWindow::closeEvent(QCloseEvent *evt)
{
    if (sePuedeCambiarDePersona() && !needsToSaveData())
        evt->accept();
    else
    {
        if (needsToSaveData())
        {
            QMessageBox::information(this, "Guardar datos", "Debe guardar los datos.", QMessageBox::Ok);
        }
        evt->ignore();
    }
}

void MainWindow::on_btnGrabar_pressed()
{
    guardarPersona();
    on_action_Guardar_triggered();
    ocultarLetrasSinDatos();
    clearDatos();
}



void MainWindow::addNota(QString &nota)
{
    if (persona)
    {
        if (nota.size() > 0)
        {
            QString aux = QString("%1 : %2").arg(QDateTime::currentDateTime().toString("dd/MM/yyyy hh:mm"),
                                                 nota);
            persona->appendNota(aux);
            ui->txtNotas->setText(persona->Notas());
        }
    }
    else
    {
        QMessageBox::information(this, "Error", "Debe seleccionar una persona", QMessageBox::Ok);
    }
}

void MainWindow::on_btnAddNota_2_pressed()
{
    QString nota = ui->txtNuevaNota_2->text();
    addNota(nota);
    ui->txtNuevaNota_2->clear();
}

void MainWindow::on_btnPagar_pressed()
{
    QString mes(ui->cboMes->currentText());
    QString nota = QString("Mes %1 PAGADO").arg(mes);
    addNota(nota);
}

void MainWindow::clearDatos()
{
    loadingData = true;
    ui->txtApellido->clear();
    ui->txtNombres->clear();
    ui->txtTelefono->clear();
    ui->txtDatosPersonales->clear();
    ui->txtNotas->clear();
    ui->txtNuevaNota_2->clear();
    loadingData = false;
}

void MainWindow::requestForData(int Year, int Month)
{
    listado->setData(obtenerPagos(Month, Year));
}

PagoLst MainWindow::obtenerPagos(int mes, int anio)
{
    PagoLst result = boost::make_shared<QList<PagoPtr> >();
    foreach(Persona *p, personas)
    {
        PagoPtr pagoPersona = p->getPago(mes, anio);
        if (pagoPersona.get())
            result->push_back(pagoPersona);
    }
    return result;
}

void MainWindow::on_actionPagos_triggered()
{
    listado->exec();
}
