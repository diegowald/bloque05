#ifndef PERSONA_H
#define PERSONA_H

#include <QObject>

class Persona : public QObject
{
    Q_OBJECT
public:
    explicit Persona(QString Apellido, QString Nombres,
                     QString Telefono,
                     QString DatosPersonales = "",
                     QString Notas = "",
                     QObject *parent = 0);
    explicit Persona(QObject *parent = 0);

    QString Apellido();
    void setApellido(QString &newApellido);
    QString Nombres();
    void setNombres(QString &newNombre);
    QString DatosPersonales();
    void setDatosPersonales(QString &newDatoPersonal);

    QString Notas();
    void setNotas(QString &newNota);
    void appendNota(QString &nota);

    QString Telefono();
    void setTelefono(QString &newTelefono);

    QString LetraApellido();
    QString NombreCompleto();

    friend QDataStream &operator <<(QDataStream &stream, Persona &p);
    friend QDataStream &operator >>(QDataStream &stream, Persona &p);
signals:
    
public slots:

private:
    QString apellido;
    QString nombres;
    QString datosPersonales;
    QString telefono;
    QString notas;
};

#endif // PERSONA_H
