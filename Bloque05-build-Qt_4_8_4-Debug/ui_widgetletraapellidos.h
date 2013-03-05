/********************************************************************************
** Form generated from reading UI file 'widgetletraapellidos.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETLETRAAPELLIDOS_H
#define UI_WIDGETLETRAAPELLIDOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetLetraApellidos
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *widgetLetraApellidos)
    {
        if (widgetLetraApellidos->objectName().isEmpty())
            widgetLetraApellidos->setObjectName(QString::fromUtf8("widgetLetraApellidos"));
        widgetLetraApellidos->resize(400, 300);
        horizontalLayout = new QHBoxLayout(widgetLetraApellidos);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(widgetLetraApellidos);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        retranslateUi(widgetLetraApellidos);

        QMetaObject::connectSlotsByName(widgetLetraApellidos);
    } // setupUi

    void retranslateUi(QWidget *widgetLetraApellidos)
    {
        widgetLetraApellidos->setWindowTitle(QApplication::translate("widgetLetraApellidos", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class widgetLetraApellidos: public Ui_widgetLetraApellidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETLETRAAPELLIDOS_H
