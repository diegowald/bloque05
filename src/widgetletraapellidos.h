#ifndef WIDGETLETRAAPELLIDOS_H
#define WIDGETLETRAAPELLIDOS_H

#include <QWidget>
#include "persona.h"
#include <QModelIndex>

namespace Ui {
class widgetLetraApellidos;
}

class widgetLetraApellidos : public QWidget
{
    Q_OBJECT
    
public:
    explicit widgetLetraApellidos(QWidget *parent = 0);
    ~widgetLetraApellidos();

    bool vacio();
    void addPersonaALista(Persona *persona);
    void clearContents();
    
private slots:
    void on_listWidget_clicked(const QModelIndex &index);

signals:
    void personaSeleccionada(QString nombrePersona);

private:
    Ui::widgetLetraApellidos *ui;
};

#endif // WIDGETLETRAAPELLIDOS_H
