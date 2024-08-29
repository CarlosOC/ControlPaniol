/********************************************************************************
** Form generated from reading UI file 'qdialogverlistaproducto.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGVERLISTAPRODUCTO_H
#define UI_QDIALOGVERLISTAPRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QDialogVerlistaProducto
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_listaproducto;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_excel;

    void setupUi(QDialog *QDialogVerlistaProducto)
    {
        if (QDialogVerlistaProducto->objectName().isEmpty())
            QDialogVerlistaProducto->setObjectName(QString::fromUtf8("QDialogVerlistaProducto"));
        QDialogVerlistaProducto->resize(400, 300);
        gridLayout = new QGridLayout(QDialogVerlistaProducto);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_listaproducto = new QTableWidget(QDialogVerlistaProducto);
        tableWidget_listaproducto->setObjectName(QString::fromUtf8("tableWidget_listaproducto"));
        tableWidget_listaproducto->setAlternatingRowColors(true);
        tableWidget_listaproducto->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_listaproducto, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_excel = new QPushButton(QDialogVerlistaProducto);
        pushButton_excel->setObjectName(QString::fromUtf8("pushButton_excel"));

        horizontalLayout->addWidget(pushButton_excel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(QDialogVerlistaProducto);

        QMetaObject::connectSlotsByName(QDialogVerlistaProducto);
    } // setupUi

    void retranslateUi(QDialog *QDialogVerlistaProducto)
    {
        QDialogVerlistaProducto->setWindowTitle(QCoreApplication::translate("QDialogVerlistaProducto", "Dialog", nullptr));
        pushButton_excel->setText(QCoreApplication::translate("QDialogVerlistaProducto", "Convertir Tabla a CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialogVerlistaProducto: public Ui_QDialogVerlistaProducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGVERLISTAPRODUCTO_H
