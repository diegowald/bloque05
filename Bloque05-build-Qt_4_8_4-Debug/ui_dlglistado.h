/********************************************************************************
** Form generated from reading UI file 'dlglistado.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGLISTADO_H
#define UI_DLGLISTADO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DlgListado
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cboMeses;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QSpinBox *spinYear;
    QPushButton *btnBuscar;
    QTableWidget *tblListado;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DlgListado)
    {
        if (DlgListado->objectName().isEmpty())
            DlgListado->setObjectName(QString::fromUtf8("DlgListado"));
        DlgListado->resize(400, 300);
        verticalLayout = new QVBoxLayout(DlgListado);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        label = new QLabel(DlgListado);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cboMeses = new QComboBox(DlgListado);
        cboMeses->setObjectName(QString::fromUtf8("cboMeses"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cboMeses);


        horizontalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        label_2 = new QLabel(DlgListado);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        spinYear = new QSpinBox(DlgListado);
        spinYear->setObjectName(QString::fromUtf8("spinYear"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinYear);


        horizontalLayout->addLayout(formLayout_2);

        btnBuscar = new QPushButton(DlgListado);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));

        horizontalLayout->addWidget(btnBuscar);


        verticalLayout->addLayout(horizontalLayout);

        tblListado = new QTableWidget(DlgListado);
        if (tblListado->columnCount() < 2)
            tblListado->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblListado->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblListado->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tblListado->setObjectName(QString::fromUtf8("tblListado"));
        tblListado->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblListado->setProperty("showDropIndicator", QVariant(false));
        tblListado->setDragDropOverwriteMode(false);
        tblListado->setAlternatingRowColors(true);
        tblListado->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblListado->setSortingEnabled(true);

        verticalLayout->addWidget(tblListado);

        buttonBox = new QDialogButtonBox(DlgListado);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DlgListado);
        QObject::connect(buttonBox, SIGNAL(accepted()), DlgListado, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DlgListado, SLOT(reject()));

        QMetaObject::connectSlotsByName(DlgListado);
    } // setupUi

    void retranslateUi(QDialog *DlgListado)
    {
        DlgListado->setWindowTitle(QApplication::translate("DlgListado", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DlgListado", "Mes", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DlgListado", "A\303\261o", 0, QApplication::UnicodeUTF8));
        btnBuscar->setText(QApplication::translate("DlgListado", "Buscar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tblListado->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgListado", "Fecha de Pago", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tblListado->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgListado", "Persona", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgListado: public Ui_DlgListado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGLISTADO_H
