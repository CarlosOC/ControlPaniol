/********************************************************************************
** Form generated from reading UI file 'qdialog_verlistaautorizados.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_VERLISTAAUTORIZADOS_H
#define UI_QDIALOG_VERLISTAAUTORIZADOS_H

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

class Ui_QDialog_verlistaautorizados
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_listaautorizados;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Excel;

    void setupUi(QDialog *QDialog_verlistaautorizados)
    {
        if (QDialog_verlistaautorizados->objectName().isEmpty())
            QDialog_verlistaautorizados->setObjectName(QString::fromUtf8("QDialog_verlistaautorizados"));
        QDialog_verlistaautorizados->resize(400, 300);
        gridLayout = new QGridLayout(QDialog_verlistaautorizados);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_listaautorizados = new QTableWidget(QDialog_verlistaautorizados);
        tableWidget_listaautorizados->setObjectName(QString::fromUtf8("tableWidget_listaautorizados"));
        tableWidget_listaautorizados->setAlternatingRowColors(true);
        tableWidget_listaautorizados->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_listaautorizados, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Excel = new QPushButton(QDialog_verlistaautorizados);
        pushButton_Excel->setObjectName(QString::fromUtf8("pushButton_Excel"));

        horizontalLayout->addWidget(pushButton_Excel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(QDialog_verlistaautorizados);

        QMetaObject::connectSlotsByName(QDialog_verlistaautorizados);
    } // setupUi

    void retranslateUi(QDialog *QDialog_verlistaautorizados)
    {
        QDialog_verlistaautorizados->setWindowTitle(QCoreApplication::translate("QDialog_verlistaautorizados", "Dialog", nullptr));
        pushButton_Excel->setText(QCoreApplication::translate("QDialog_verlistaautorizados", "Convertir Tabla en Archivo CVS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialog_verlistaautorizados: public Ui_QDialog_verlistaautorizados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_VERLISTAAUTORIZADOS_H
