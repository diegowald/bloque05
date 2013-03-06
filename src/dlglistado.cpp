#include "dlglistado.h"
#include "ui_dlglistado.h"

DlgListado::DlgListado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgListado)
{
    ui->setupUi(this);
}

DlgListado::~DlgListado()
{
    delete ui;
}

void DlgListado::on_btnBuscar_pressed()
{
    emit requestForData(ui->spinYear->value(), ui->cboMeses->itemData(ui->cboMeses->currentIndex(), Qt::UserRole).toInt());
}

void DlgListado::setData(PagoLst data)
{
}
