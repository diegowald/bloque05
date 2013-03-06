#include "dlglistado.h"
#include "ui_dlglistado.h"

DlgListado::DlgListado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgListado)
{
    ui->setupUi(this);

    ui->spinYear->setMinimum(2012);
    ui->spinYear->setMaximum(2020);
    ui->spinYear->setValue(QDateTime::currentDateTime().date().year());

    ui->cboMeses->addItem("Enero", 1);
    ui->cboMeses->addItem("Febrero", 2);
    ui->cboMeses->addItem("Marzo", 3);
    ui->cboMeses->addItem("Abril", 4);
    ui->cboMeses->addItem("Mayo", 5);
    ui->cboMeses->addItem("Junio", 6);
    ui->cboMeses->addItem("Julio", 7);
    ui->cboMeses->addItem("Agosto", 8);
    ui->cboMeses->addItem("Septiembre", 9);
    ui->cboMeses->addItem("Octubre", 10);
    ui->cboMeses->addItem("Noviembre", 11);
    ui->cboMeses->addItem("Diciembre", 12);


    ui->cboMeses->setCurrentIndex(
                ui->cboMeses->findData(QDateTime::currentDateTime().date().month()));
}

DlgListado::~DlgListado()
{
    delete ui;
}

void DlgListado::on_btnBuscar_pressed()
{
    while(ui->tblListado->rowCount() > 0)
        ui->tblListado->removeRow(0);
    emit requestForData(ui->spinYear->value(), ui->cboMeses->itemData(ui->cboMeses->currentIndex(), Qt::UserRole).toInt());
}

void DlgListado::setData(PagoLst data)
{
    foreach(PagoPtr pago, *data)
    {
        ui->tblListado->insertRow(ui->tblListado->rowCount());
        QTableWidgetItem *item = new QTableWidgetItem(pago->fechaPago().toString("dd/MM/yyyy hh:mm"));
        ui->tblListado->setItem(ui->tblListado->rowCount() - 1, 0, item);
        item = new QTableWidgetItem(pago->nombrePersona());
        ui->tblListado->setItem(ui->tblListado->rowCount() - 1, 1, item);
    }
    ui->tblListado->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);
    ui->tblListado->horizontalHeader()->setStretchLastSection(true);
}
