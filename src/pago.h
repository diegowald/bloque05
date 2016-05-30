#ifndef PAGO_H
#define PAGO_H

#include <QObject>
#include <QDate>
//#include <boost/shared_ptr.hpp>
#include <QString>
#include <QStringList>

class Pago;
//typedef boost::shared_ptr<Pago> PagoPtr;
typedef QSharedPointer<Pago> PagoPtr;
//typedef boost::shared_ptr<QList<PagoPtr> > PagoLst;
typedef QSharedPointer<QList<PagoPtr>> PagoLst;


class Pago : public QObject
{
    Q_OBJECT
public:
    explicit Pago(QString NombrePersona, QObject *parent = 0);
    void parse(QString &s);
    bool isValid() const;
    int mes() const;
    int anio() const;
    QString nombrePersona() const;
    QDateTime fechaPago();

    int Mes2int(QString &mes);

signals:
    
public slots:
    
private:
    QDateTime FechaPago;
    int MesPago;
    int AnioPago;
    QString NombrePersona;
    bool IsValid;
};

#endif // PAGO_H
