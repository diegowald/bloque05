#-------------------------------------------------
#
# Project created by QtCreator 2012-11-05T08:55:04
#
#-------------------------------------------------

QT       += core gui

TARGET = Bloque05
TEMPLATE = app

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

#win32 {
#INCLUDEPATH += c:/boost/boost_1_53_0
#}

SOURCES += main.cpp\
        mainwindow.cpp \
    widgetletraapellidos.cpp \
    persona.cpp \
    dlglistado.cpp \
    pago.cpp

HEADERS  += mainwindow.h \
    widgetletraapellidos.h \
    persona.h \
    dlglistado.h \
    pago.h

FORMS    += mainwindow.ui \
    widgetletraapellidos.ui \
    dlglistado.ui
