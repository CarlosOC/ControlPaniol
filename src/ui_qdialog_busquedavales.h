/********************************************************************************
** Form generated from reading UI file 'qdialog_busquedavales.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_BUSQUEDAVALES_H
#define UI_QDIALOG_BUSQUEDAVALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QDialog_BusquedaVales
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_busqueda_01;
    QLabel *label_busqueda_02;
    QLineEdit *lineEdit_busqueda_01;
    QLineEdit *lineEdit_busqueda_02;
    QComboBox *comboBox_busqueda;
    QLabel *label;
    QTableWidget *tableWidget_ResultadoBusqueda;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QDialog_BusquedaVales)
    {
        if (QDialog_BusquedaVales->objectName().isEmpty())
            QDialog_BusquedaVales->setObjectName(QString::fromUtf8("QDialog_BusquedaVales"));
        QDialog_BusquedaVales->resize(400, 391);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QDialog_BusquedaVales->sizePolicy().hasHeightForWidth());
        QDialog_BusquedaVales->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QDialog_BusquedaVales);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_busqueda_01 = new QLabel(QDialog_BusquedaVales);
        label_busqueda_01->setObjectName(QString::fromUtf8("label_busqueda_01"));

        gridLayout->addWidget(label_busqueda_01, 0, 0, 1, 1);

        label_busqueda_02 = new QLabel(QDialog_BusquedaVales);
        label_busqueda_02->setObjectName(QString::fromUtf8("label_busqueda_02"));

        gridLayout->addWidget(label_busqueda_02, 0, 1, 1, 1);

        lineEdit_busqueda_01 = new QLineEdit(QDialog_BusquedaVales);
        lineEdit_busqueda_01->setObjectName(QString::fromUtf8("lineEdit_busqueda_01"));

        gridLayout->addWidget(lineEdit_busqueda_01, 1, 0, 1, 1);

        lineEdit_busqueda_02 = new QLineEdit(QDialog_BusquedaVales);
        lineEdit_busqueda_02->setObjectName(QString::fromUtf8("lineEdit_busqueda_02"));

        gridLayout->addWidget(lineEdit_busqueda_02, 1, 1, 1, 1);

        comboBox_busqueda = new QComboBox(QDialog_BusquedaVales);
        comboBox_busqueda->setObjectName(QString::fromUtf8("comboBox_busqueda"));

        gridLayout->addWidget(comboBox_busqueda, 1, 2, 1, 1);

        label = new QLabel(QDialog_BusquedaVales);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidget_ResultadoBusqueda = new QTableWidget(QDialog_BusquedaVales);
        tableWidget_ResultadoBusqueda->setObjectName(QString::fromUtf8("tableWidget_ResultadoBusqueda"));
        tableWidget_ResultadoBusqueda->setAlternatingRowColors(true);
        tableWidget_ResultadoBusqueda->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget_ResultadoBusqueda, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QDialog_BusquedaVales);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_busqueda_01, lineEdit_busqueda_02);
        QWidget::setTabOrder(lineEdit_busqueda_02, comboBox_busqueda);
        QWidget::setTabOrder(comboBox_busqueda, tableWidget_ResultadoBusqueda);

        retranslateUi(QDialog_BusquedaVales);
        QObject::connect(buttonBox, SIGNAL(accepted()), QDialog_BusquedaVales, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QDialog_BusquedaVales, SLOT(reject()));

        QMetaObject::connectSlotsByName(QDialog_BusquedaVales);
    } // setupUi

    void retranslateUi(QDialog *QDialog_BusquedaVales)
    {
        QDialog_BusquedaVales->setWindowTitle(QApplication::translate("QDialog_BusquedaVales", "Dialog", nullptr));
        label_busqueda_01->setText(QString());
        label_busqueda_02->setText(QString());
        label->setText(QApplication::translate("QDialog_BusquedaVales", "Seleccion de Filtro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialog_BusquedaVales: public Ui_QDialog_BusquedaVales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_BUSQUEDAVALES_H
