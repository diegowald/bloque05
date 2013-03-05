/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Guardar;
    QAction *action_Salir;
    QAction *action_Nueva;
    QAction *action_Borrar;
    QAction *action_Guardar_2;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabLetras;
    QWidget *tabNotas;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtApellido;
    QLabel *label_2;
    QLineEdit *txtNombres;
    QLabel *Telefono;
    QLineEdit *txtTelefono;
    QVBoxLayout *verticalLayout;
    QTextEdit *txtDatosPersonales;
    QPushButton *btnGrabar;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout_3;
    QLabel *Mes;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cboMes;
    QPushButton *btnPagar;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txtNuevaNota_2;
    QPushButton *btnAddNota_2;
    QTextEdit *txtNotas;
    QMenuBar *menuBar;
    QMenu *menu_Archivo;
    QMenu *menu_Personas;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 426);
        MainWindow->setMinimumSize(QSize(600, 0));
        action_Guardar = new QAction(MainWindow);
        action_Guardar->setObjectName(QString::fromUtf8("action_Guardar"));
        action_Salir = new QAction(MainWindow);
        action_Salir->setObjectName(QString::fromUtf8("action_Salir"));
        action_Nueva = new QAction(MainWindow);
        action_Nueva->setObjectName(QString::fromUtf8("action_Nueva"));
        action_Borrar = new QAction(MainWindow);
        action_Borrar->setObjectName(QString::fromUtf8("action_Borrar"));
        action_Guardar_2 = new QAction(MainWindow);
        action_Guardar_2->setObjectName(QString::fromUtf8("action_Guardar_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabLetras = new QTabWidget(centralWidget);
        tabLetras->setObjectName(QString::fromUtf8("tabLetras"));
        tabLetras->setTabPosition(QTabWidget::West);

        horizontalLayout->addWidget(tabLetras);

        tabNotas = new QWidget(centralWidget);
        tabNotas->setObjectName(QString::fromUtf8("tabNotas"));
        tabNotas->setMinimumSize(QSize(500, 400));
        layoutWidget = new QWidget(tabNotas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 0, 471, 427));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(3);
        formLayout->setVerticalSpacing(3);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtApellido = new QLineEdit(layoutWidget);
        txtApellido->setObjectName(QString::fromUtf8("txtApellido"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtApellido);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtNombres = new QLineEdit(layoutWidget);
        txtNombres->setObjectName(QString::fromUtf8("txtNombres"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtNombres);

        Telefono = new QLabel(layoutWidget);
        Telefono->setObjectName(QString::fromUtf8("Telefono"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Telefono);

        txtTelefono = new QLineEdit(layoutWidget);
        txtTelefono->setObjectName(QString::fromUtf8("txtTelefono"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtTelefono);


        horizontalLayout_6->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        txtDatosPersonales = new QTextEdit(layoutWidget);
        txtDatosPersonales->setObjectName(QString::fromUtf8("txtDatosPersonales"));
        txtDatosPersonales->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(txtDatosPersonales);

        btnGrabar = new QPushButton(layoutWidget);
        btnGrabar->setObjectName(QString::fromUtf8("btnGrabar"));

        verticalLayout->addWidget(btnGrabar);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setHorizontalSpacing(3);
        formLayout_3->setVerticalSpacing(3);
        Mes = new QLabel(layoutWidget);
        Mes->setObjectName(QString::fromUtf8("Mes"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, Mes);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cboMes = new QComboBox(layoutWidget);
        cboMes->setObjectName(QString::fromUtf8("cboMes"));

        horizontalLayout_4->addWidget(cboMes);

        btnPagar = new QPushButton(layoutWidget);
        btnPagar->setObjectName(QString::fromUtf8("btnPagar"));

        horizontalLayout_4->addWidget(btnPagar);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);


        horizontalLayout_5->addLayout(formLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(3);
        formLayout_2->setVerticalSpacing(3);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        txtNuevaNota_2 = new QLineEdit(layoutWidget);
        txtNuevaNota_2->setObjectName(QString::fromUtf8("txtNuevaNota_2"));

        horizontalLayout_3->addWidget(txtNuevaNota_2);

        btnAddNota_2 = new QPushButton(layoutWidget);
        btnAddNota_2->setObjectName(QString::fromUtf8("btnAddNota_2"));

        horizontalLayout_3->addWidget(btnAddNota_2);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);


        horizontalLayout_5->addLayout(formLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        txtNotas = new QTextEdit(layoutWidget);
        txtNotas->setObjectName(QString::fromUtf8("txtNotas"));
        txtNotas->setMinimumSize(QSize(0, 300));
        txtNotas->setReadOnly(true);

        verticalLayout_2->addWidget(txtNotas);


        horizontalLayout->addWidget(tabNotas);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menu_Archivo = new QMenu(menuBar);
        menu_Archivo->setObjectName(QString::fromUtf8("menu_Archivo"));
        menu_Personas = new QMenu(menuBar);
        menu_Personas->setObjectName(QString::fromUtf8("menu_Personas"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_Archivo->menuAction());
        menuBar->addAction(menu_Personas->menuAction());
        menu_Archivo->addAction(action_Salir);
        menu_Personas->addAction(action_Nueva);
        menu_Personas->addAction(action_Borrar);

        retranslateUi(MainWindow);

        tabLetras->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Guardar->setText(QApplication::translate("MainWindow", "&Guardar", 0, QApplication::UnicodeUTF8));
        action_Salir->setText(QApplication::translate("MainWindow", "&Salir", 0, QApplication::UnicodeUTF8));
        action_Nueva->setText(QApplication::translate("MainWindow", "&Nueva", 0, QApplication::UnicodeUTF8));
        action_Borrar->setText(QApplication::translate("MainWindow", "&Borrar", 0, QApplication::UnicodeUTF8));
        action_Guardar_2->setText(QApplication::translate("MainWindow", "&Guardar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Apellido", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Nombres", 0, QApplication::UnicodeUTF8));
        Telefono->setText(QApplication::translate("MainWindow", "Telefono", 0, QApplication::UnicodeUTF8));
        btnGrabar->setText(QApplication::translate("MainWindow", "Guardar", 0, QApplication::UnicodeUTF8));
        Mes->setText(QApplication::translate("MainWindow", "Mes", 0, QApplication::UnicodeUTF8));
        cboMes->clear();
        cboMes->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Enero", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Febrero", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Marzo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Abril", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Mayo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Junio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Julio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Agosto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Septiembre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Octubre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Noviembre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Diciembre", 0, QApplication::UnicodeUTF8)
        );
        btnPagar->setText(QApplication::translate("MainWindow", "Pagar", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Nota", 0, QApplication::UnicodeUTF8));
        btnAddNota_2->setText(QApplication::translate("MainWindow", "Agregar", 0, QApplication::UnicodeUTF8));
        menu_Archivo->setTitle(QApplication::translate("MainWindow", "&Archivo", 0, QApplication::UnicodeUTF8));
        menu_Personas->setTitle(QApplication::translate("MainWindow", "&Personas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
