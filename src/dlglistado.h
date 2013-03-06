#ifndef DLGLISTADO_H
#define DLGLISTADO_H

#include <QDialog>
#include "pago.h"

namespace Ui {
class DlgListado;
}

class DlgListado : public QDialog
{
    Q_OBJECT
    
public:
    explicit DlgListado(QWidget *parent = 0);
    ~DlgListado();
    void setData(PagoLst data);
    
signals:
    void requestForData(int Year, int Month);
private slots:
    void on_btnBuscar_pressed();

private:
    Ui::DlgListado *ui;
};

#endif // DLGLISTADO_H
