#ifndef DLGLISTADO_H
#define DLGLISTADO_H

#include <QDialog>

namespace Ui {
class DlgListado;
}

class DlgListado : public QDialog
{
    Q_OBJECT
    
public:
    explicit DlgListado(QWidget *parent = 0);
    ~DlgListado();
    
private:
    Ui::DlgListado *ui;
};

#endif // DLGLISTADO_H
