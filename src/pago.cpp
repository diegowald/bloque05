#include "pago.h"

Pago::Pago(QString NombreCompleto, QObject *parent) :
    QObject(parent)
{
    NombrePersona = NombreCompleto;
    IsValid = false;
}

int Pago::Mes2int(QString &mes)
{
    if (mes == "Enero")
        return 1;
    if (mes == "Febrero")
        return 2;
    if (mes == "Marzo")
        return 3;
    if (mes == "Abril")
        return 4;
    if (mes == "Mayo")
        return 5;
    if (mes == "Junio")
        return 6;
    if (mes == "Julio")
        return 7;
    if (mes == "Agosto")
        return 8;
    if (mes == "Septiembre")
        return 9;
    if (mes == "Octubre")
        return 10;
    if (mes == "Noviembre")
        return 11;
    if (mes == "Diciembre")
        return 12;
    return -1;
}

void Pago::parse(QString &s)
{
    QString Fecha = s.mid(0, 16);
    QStringList partes = s.mid(17).split(' ', QString::SkipEmptyParts);
    if (partes.count() == 4)
    {
        QString m = partes.at(2);
        MesPago = Mes2int(m);
        IsValid = (MesPago == -1) ? false : true;
    }
    FechaPago = QDateTime::fromString(Fecha, "dd/MM/yyyy hh:mm");
    AnioPago = FechaPago.date().year();
    //"05/12/2012 20:43 : Mes Diciembre PAGADO"
}

bool Pago::isValid() const
{
    return IsValid;
}

int Pago::mes() const
{
    return MesPago;
}

int Pago::anio() const
{
    return AnioPago;
}

QString Pago::nombrePersona() const
{
    return NombrePersona;
}

QDateTime Pago::fechaPago()
{
    return FechaPago;
}
