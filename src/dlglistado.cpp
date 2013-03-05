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
