#include "widgetletraapellidos.h"
#include "ui_widgetletraapellidos.h"

widgetLetraApellidos::widgetLetraApellidos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgetLetraApellidos)
{
    ui->setupUi(this);
}

widgetLetraApellidos::~widgetLetraApellidos()
{
    delete ui;
}

bool widgetLetraApellidos::vacio()
{
    return ui->listWidget->count() == 0;
}

void widgetLetraApellidos::addPersonaALista(Persona *persona)
{
    QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
    item->setText(persona->NombreCompleto());
    //item->setData(Qt::UserRole, *persona);
}

void widgetLetraApellidos::clearContents()
{
    ui->listWidget->clear();
}

void widgetLetraApellidos::on_listWidget_clicked(const QModelIndex &)
{
    emit personaSeleccionada(ui->listWidget->selectedItems().at(0)->text());
}
