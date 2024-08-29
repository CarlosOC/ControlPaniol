/********************************************************************************
** Form generated from reading UI file 'qdialog_agregarproducto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_AGREGARPRODUCTO_H
#define UI_QDIALOG_AGREGARPRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qdialog_agregarproducto
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_producto;
    QLineEdit *lineEdit_producto;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_marca;
    QLineEdit *lineEdit_marca;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_descripcion;
    QTextEdit *textEdit_descripcion;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_codigosap;
    QLineEdit *lineEdit_codigosap;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_codigobarra;
    QLineEdit *lineEdit_codigobarra;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_ubicacion;
    QLineEdit *lineEdit_ubicacion;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_productoSHE;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_si;
    QRadioButton *radioButton_no;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_stock;
    QSpinBox *spinBox_stockminimo;
    QLabel *label_stock;
    QLabel *label_stockminimo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_agregarproducto;
    QPushButton *pushButton;

    void setupUi(QDialog *qdialog_agregarproducto)
    {
        if (qdialog_agregarproducto->objectName().isEmpty())
            qdialog_agregarproducto->setObjectName(QString::fromUtf8("qdialog_agregarproducto"));
        qdialog_agregarproducto->resize(610, 193);
        qdialog_agregarproducto->setMinimumSize(QSize(610, 191));
        qdialog_agregarproducto->setMaximumSize(QSize(610, 193));
        gridLayout_2 = new QGridLayout(qdialog_agregarproducto);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_producto = new QLabel(qdialog_agregarproducto);
        label_producto->setObjectName(QString::fromUtf8("label_producto"));

        verticalLayout->addWidget(label_producto);

        lineEdit_producto = new QLineEdit(qdialog_agregarproducto);
        lineEdit_producto->setObjectName(QString::fromUtf8("lineEdit_producto"));

        verticalLayout->addWidget(lineEdit_producto);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_marca = new QLabel(qdialog_agregarproducto);
        label_marca->setObjectName(QString::fromUtf8("label_marca"));

        verticalLayout_5->addWidget(label_marca);

        lineEdit_marca = new QLineEdit(qdialog_agregarproducto);
        lineEdit_marca->setObjectName(QString::fromUtf8("lineEdit_marca"));

        verticalLayout_5->addWidget(lineEdit_marca);


        gridLayout_2->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_descripcion = new QLabel(qdialog_agregarproducto);
        label_descripcion->setObjectName(QString::fromUtf8("label_descripcion"));

        verticalLayout_2->addWidget(label_descripcion);

        textEdit_descripcion = new QTextEdit(qdialog_agregarproducto);
        textEdit_descripcion->setObjectName(QString::fromUtf8("textEdit_descripcion"));

        verticalLayout_2->addWidget(textEdit_descripcion);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 2, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_codigosap = new QLabel(qdialog_agregarproducto);
        label_codigosap->setObjectName(QString::fromUtf8("label_codigosap"));

        verticalLayout_3->addWidget(label_codigosap);

        lineEdit_codigosap = new QLineEdit(qdialog_agregarproducto);
        lineEdit_codigosap->setObjectName(QString::fromUtf8("lineEdit_codigosap"));

        verticalLayout_3->addWidget(lineEdit_codigosap);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_codigobarra = new QLabel(qdialog_agregarproducto);
        label_codigobarra->setObjectName(QString::fromUtf8("label_codigobarra"));

        verticalLayout_4->addWidget(label_codigobarra);

        lineEdit_codigobarra = new QLineEdit(qdialog_agregarproducto);
        lineEdit_codigobarra->setObjectName(QString::fromUtf8("lineEdit_codigobarra"));

        verticalLayout_4->addWidget(lineEdit_codigobarra);


        gridLayout_2->addLayout(verticalLayout_4, 1, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_ubicacion = new QLabel(qdialog_agregarproducto);
        label_ubicacion->setObjectName(QString::fromUtf8("label_ubicacion"));

        verticalLayout_6->addWidget(label_ubicacion);

        lineEdit_ubicacion = new QLineEdit(qdialog_agregarproducto);
        lineEdit_ubicacion->setObjectName(QString::fromUtf8("lineEdit_ubicacion"));

        verticalLayout_6->addWidget(lineEdit_ubicacion);


        gridLayout_2->addLayout(verticalLayout_6, 2, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_productoSHE = new QLabel(qdialog_agregarproducto);
        label_productoSHE->setObjectName(QString::fromUtf8("label_productoSHE"));

        verticalLayout_7->addWidget(label_productoSHE);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_si = new QRadioButton(qdialog_agregarproducto);
        radioButton_si->setObjectName(QString::fromUtf8("radioButton_si"));

        horizontalLayout->addWidget(radioButton_si);

        radioButton_no = new QRadioButton(qdialog_agregarproducto);
        radioButton_no->setObjectName(QString::fromUtf8("radioButton_no"));

        horizontalLayout->addWidget(radioButton_no);


        verticalLayout_7->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_7, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox_stock = new QSpinBox(qdialog_agregarproducto);
        spinBox_stock->setObjectName(QString::fromUtf8("spinBox_stock"));
        spinBox_stock->setMaximum(999999);

        gridLayout->addWidget(spinBox_stock, 1, 0, 1, 1);

        spinBox_stockminimo = new QSpinBox(qdialog_agregarproducto);
        spinBox_stockminimo->setObjectName(QString::fromUtf8("spinBox_stockminimo"));

        gridLayout->addWidget(spinBox_stockminimo, 1, 1, 1, 1);

        label_stock = new QLabel(qdialog_agregarproducto);
        label_stock->setObjectName(QString::fromUtf8("label_stock"));

        gridLayout->addWidget(label_stock, 0, 0, 1, 1);

        label_stockminimo = new QLabel(qdialog_agregarproducto);
        label_stockminimo->setObjectName(QString::fromUtf8("label_stockminimo"));

        gridLayout->addWidget(label_stockminimo, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_agregarproducto = new QPushButton(qdialog_agregarproducto);
        pushButton_agregarproducto->setObjectName(QString::fromUtf8("pushButton_agregarproducto"));

        horizontalLayout_2->addWidget(pushButton_agregarproducto);

        pushButton = new QPushButton(qdialog_agregarproducto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 3);

        QWidget::setTabOrder(lineEdit_producto, lineEdit_codigosap);
        QWidget::setTabOrder(lineEdit_codigosap, lineEdit_codigobarra);
        QWidget::setTabOrder(lineEdit_codigobarra, spinBox_stock);
        QWidget::setTabOrder(spinBox_stock, textEdit_descripcion);
        QWidget::setTabOrder(textEdit_descripcion, pushButton_agregarproducto);
        QWidget::setTabOrder(pushButton_agregarproducto, pushButton);

        retranslateUi(qdialog_agregarproducto);

        QMetaObject::connectSlotsByName(qdialog_agregarproducto);
    } // setupUi

    void retranslateUi(QDialog *qdialog_agregarproducto)
    {
        qdialog_agregarproducto->setWindowTitle(QApplication::translate("qdialog_agregarproducto", "Dialog", nullptr));
        label_producto->setText(QApplication::translate("qdialog_agregarproducto", "Producto:", nullptr));
        label_marca->setText(QApplication::translate("qdialog_agregarproducto", "Marca:", nullptr));
        label_descripcion->setText(QApplication::translate("qdialog_agregarproducto", "Descripcion:", nullptr));
        label_codigosap->setText(QApplication::translate("qdialog_agregarproducto", "Codigo SAP:", nullptr));
        label_codigobarra->setText(QApplication::translate("qdialog_agregarproducto", "Codigo de Barra:", nullptr));
        label_ubicacion->setText(QApplication::translate("qdialog_agregarproducto", "Ubicacion:", nullptr));
        label_productoSHE->setText(QApplication::translate("qdialog_agregarproducto", "\302\277Es un articulo SHE?", nullptr));
        radioButton_si->setText(QApplication::translate("qdialog_agregarproducto", "Si", nullptr));
        radioButton_no->setText(QApplication::translate("qdialog_agregarproducto", "No", nullptr));
        label_stock->setText(QApplication::translate("qdialog_agregarproducto", "Stock:", nullptr));
        label_stockminimo->setText(QApplication::translate("qdialog_agregarproducto", "Stock Critico:", nullptr));
        pushButton_agregarproducto->setText(QApplication::translate("qdialog_agregarproducto", "Agregar Producto", nullptr));
        pushButton->setText(QApplication::translate("qdialog_agregarproducto", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_agregarproducto: public Ui_qdialog_agregarproducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_AGREGARPRODUCTO_H
