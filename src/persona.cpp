#include "persona.h"

Persona::Persona(QObject *parent) :
    QObject(parent)
{
}

Persona::Persona(QString Apellido, QString Nombres, QString Telefono, QString DatosPersonales, QString Notas, QObject *parent) :
    QObject(parent), apellido(Apellido), nombres(Nombres),
    datosPersonales(DatosPersonales), telefono(Telefono), notas(Notas)
{
}

QString Persona::Apellido()
{
    return apellido;
}

void Persona::setApellido(QString &newApellido)
{
    apellido = newApellido;
}

QString Persona::Nombres()
{
    return nombres;
}

void Persona::setNombres(QString &newNombre)
{
    nombres = newNombre;
}

QString Persona::DatosPersonales()
{
    return datosPersonales;
}

void Persona::setDatosPersonales(QString &newDatoPersonal)
{
    datosPersonales = newDatoPersonal;
}

QString Persona::Notas()
{
    return notas;
}

void Persona::setNotas(QString &newNota)
{
    notas = newNota;
}

void Persona::appendNota(QString &nota)
{
    notas.append("\n" + nota);
}

QString Persona::LetraApellido()
{
    return apellido.at(0).toUpper();
}

QString Persona::NombreCompleto()
{
    return apellido + ", " + nombres;
}

QString Persona::Telefono()
{
    return telefono;
}

void Persona::setTelefono(QString &newTelefono)
{
    telefono = newTelefono;
}

QDataStream &operator <<(QDataStream &stream, Persona &p)
{
    if (&p != NULL)
    {
        stream << p.apellido;
        stream << p.nombres;
        stream << p.datosPersonales;
        QString aux;
        aux = "<<" + p.telefono + ">>" + p.notas;
        stream << aux;
    }

    return stream;
}

QDataStream &operator >>(QDataStream &stream, Persona &p)
{
    stream >> p.apellido;
    stream >> p.nombres;
    stream >> p.datosPersonales;
    QString aux;
    stream >> aux;
    if (aux.startsWith("<<"))
    {
        QString s = aux.mid(2);
        p.telefono = s.left(s.indexOf(">>"));
        s = s.mid(p.telefono.length() + 2);
        p.notas = s;
    }

    return stream;
}

