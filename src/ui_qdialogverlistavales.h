/********************************************************************************
** Form generated from reading UI file 'qdialogverlistavales.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGVERLISTAVALES_H
#define UI_QDIALOGVERLISTAVALES_H

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

class Ui_QdialogVerListaVales
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_listavales;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_excel;

    void setupUi(QDialog *QdialogVerListaVales)
    {
        if (QdialogVerListaVales->objectName().isEmpty())
            QdialogVerListaVales->setObjectName(QString::fromUtf8("QdialogVerListaVales"));
        QdialogVerListaVales->setWindowModality(Qt::ApplicationModal);
        QdialogVerListaVales->resize(400, 300);
        gridLayout = new QGridLayout(QdialogVerListaVales);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_listavales = new QTableWidget(QdialogVerListaVales);
        tableWidget_listavales->setObjectName(QString::fromUtf8("tableWidget_listavales"));
        tableWidget_listavales->setAlternatingRowColors(true);
        tableWidget_listavales->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_listavales, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_excel = new QPushButton(QdialogVerListaVales);
        pushButton_excel->setObjectName(QString::fromUtf8("pushButton_excel"));

        horizontalLayout->addWidget(pushButton_excel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(QdialogVerListaVales);

        QMetaObject::connectSlotsByName(QdialogVerListaVales);
    } // setupUi

    void retranslateUi(QDialog *QdialogVerListaVales)
    {
        QdialogVerListaVales->setWindowTitle(QCoreApplication::translate("QdialogVerListaVales", "Dialog", nullptr));
        pushButton_excel->setText(QCoreApplication::translate("QdialogVerListaVales", "Convertir Tabla a CVS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QdialogVerListaVales: public Ui_QdialogVerListaVales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGVERLISTAVALES_H
