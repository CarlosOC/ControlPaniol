/********************************************************************************
** Form generated from reading UI file 'qdialog_buscarproducto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_BUSCARPRODUCTO_H
#define UI_QDIALOG_BUSCARPRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_qdialog_buscarproducto
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_resultado;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_producto_resultado;
    QLineEdit *lineEdit_producto_resultado;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_marca_resultado;
    QLineEdit *lineEdit_marca_resultado;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_codigobarra_resultado;
    QLineEdit *lineEdit_codigobarra_resultado;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_stock_resultado;
    QSpinBox *spinBox_stock_resultado;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_codigosap_2;
    QLineEdit *lineEdit_codigosap_resultado;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_stockminimo;
    QSpinBox *spinBox_stockminimo_resultado;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_ubicacion_resultado;
    QLineEdit *lineEdit_ubicacion_resultado;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_productoSHE_resultado;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_si_resultado;
    QRadioButton *radioButton_no_resultado;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_descripcion_resultado;
    QTextEdit *textEdit_descripcion_resultado;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancelarmodificacion;
    QPushButton *pushButton_aceptarmodificacion;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_modificar;
    QVBoxLayout *verticalLayout;
    QLabel *label_producto_busqueda;
    QLineEdit *lineEdit_producto_busqueda;
    QLabel *label_sap_busqueda;
    QLineEdit *lineEdit_sap_busqueda;
    QLabel *label_codigodebarra_busqueda;
    QLineEdit *lineEdit_codigodebarra;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_buscar;

    void setupUi(QDialog *qdialog_buscarproducto)
    {
        if (qdialog_buscarproducto->objectName().isEmpty())
            qdialog_buscarproducto->setObjectName(QString::fromUtf8("qdialog_buscarproducto"));
        qdialog_buscarproducto->resize(587, 462);
        gridLayout_2 = new QGridLayout(qdialog_buscarproducto);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_resultado = new QGroupBox(qdialog_buscarproducto);
        groupBox_resultado->setObjectName(QString::fromUtf8("groupBox_resultado"));
        verticalLayout_11 = new QVBoxLayout(groupBox_resultado);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_producto_resultado = new QLabel(groupBox_resultado);
        label_producto_resultado->setObjectName(QString::fromUtf8("label_producto_resultado"));

        verticalLayout_9->addWidget(label_producto_resultado);

        lineEdit_producto_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_producto_resultado->setObjectName(QString::fromUtf8("lineEdit_producto_resultado"));

        verticalLayout_9->addWidget(lineEdit_producto_resultado);


        gridLayout->addLayout(verticalLayout_9, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_marca_resultado = new QLabel(groupBox_resultado);
        label_marca_resultado->setObjectName(QString::fromUtf8("label_marca_resultado"));

        verticalLayout_3->addWidget(label_marca_resultado);

        lineEdit_marca_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_marca_resultado->setObjectName(QString::fromUtf8("lineEdit_marca_resultado"));

        verticalLayout_3->addWidget(lineEdit_marca_resultado);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_codigobarra_resultado = new QLabel(groupBox_resultado);
        label_codigobarra_resultado->setObjectName(QString::fromUtf8("label_codigobarra_resultado"));

        verticalLayout_8->addWidget(label_codigobarra_resultado);

        lineEdit_codigobarra_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_codigobarra_resultado->setObjectName(QString::fromUtf8("lineEdit_codigobarra_resultado"));

        verticalLayout_8->addWidget(lineEdit_codigobarra_resultado);


        gridLayout->addLayout(verticalLayout_8, 1, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_stock_resultado = new QLabel(groupBox_resultado);
        label_stock_resultado->setObjectName(QString::fromUtf8("label_stock_resultado"));

        verticalLayout_12->addWidget(label_stock_resultado);

        spinBox_stock_resultado = new QSpinBox(groupBox_resultado);
        spinBox_stock_resultado->setObjectName(QString::fromUtf8("spinBox_stock_resultado"));

        verticalLayout_12->addWidget(spinBox_stock_resultado);


        gridLayout->addLayout(verticalLayout_12, 3, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_codigosap_2 = new QLabel(groupBox_resultado);
        label_codigosap_2->setObjectName(QString::fromUtf8("label_codigosap_2"));

        verticalLayout_7->addWidget(label_codigosap_2);

        lineEdit_codigosap_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_codigosap_resultado->setObjectName(QString::fromUtf8("lineEdit_codigosap_resultado"));

        verticalLayout_7->addWidget(lineEdit_codigosap_resultado);


        gridLayout->addLayout(verticalLayout_7, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_stockminimo = new QLabel(groupBox_resultado);
        label_stockminimo->setObjectName(QString::fromUtf8("label_stockminimo"));

        verticalLayout_2->addWidget(label_stockminimo);

        spinBox_stockminimo_resultado = new QSpinBox(groupBox_resultado);
        spinBox_stockminimo_resultado->setObjectName(QString::fromUtf8("spinBox_stockminimo_resultado"));

        verticalLayout_2->addWidget(spinBox_stockminimo_resultado);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_ubicacion_resultado = new QLabel(groupBox_resultado);
        label_ubicacion_resultado->setObjectName(QString::fromUtf8("label_ubicacion_resultado"));

        verticalLayout_4->addWidget(label_ubicacion_resultado);

        lineEdit_ubicacion_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_ubicacion_resultado->setObjectName(QString::fromUtf8("lineEdit_ubicacion_resultado"));

        verticalLayout_4->addWidget(lineEdit_ubicacion_resultado);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_productoSHE_resultado = new QLabel(groupBox_resultado);
        label_productoSHE_resultado->setObjectName(QString::fromUtf8("label_productoSHE_resultado"));

        verticalLayout_13->addWidget(label_productoSHE_resultado);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_si_resultado = new QRadioButton(groupBox_resultado);
        radioButton_si_resultado->setObjectName(QString::fromUtf8("radioButton_si_resultado"));

        horizontalLayout->addWidget(radioButton_si_resultado);

        radioButton_no_resultado = new QRadioButton(groupBox_resultado);
        radioButton_no_resultado->setObjectName(QString::fromUtf8("radioButton_no_resultado"));

        horizontalLayout->addWidget(radioButton_no_resultado);


        verticalLayout_13->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_13, 2, 1, 1, 1);


        verticalLayout_11->addLayout(gridLayout);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_descripcion_resultado = new QLabel(groupBox_resultado);
        label_descripcion_resultado->setObjectName(QString::fromUtf8("label_descripcion_resultado"));

        verticalLayout_10->addWidget(label_descripcion_resultado);

        textEdit_descripcion_resultado = new QTextEdit(groupBox_resultado);
        textEdit_descripcion_resultado->setObjectName(QString::fromUtf8("textEdit_descripcion_resultado"));

        verticalLayout_10->addWidget(textEdit_descripcion_resultado);


        verticalLayout_11->addLayout(verticalLayout_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_cancelarmodificacion = new QPushButton(groupBox_resultado);
        pushButton_cancelarmodificacion->setObjectName(QString::fromUtf8("pushButton_cancelarmodificacion"));

        horizontalLayout_4->addWidget(pushButton_cancelarmodificacion);

        pushButton_aceptarmodificacion = new QPushButton(groupBox_resultado);
        pushButton_aceptarmodificacion->setObjectName(QString::fromUtf8("pushButton_aceptarmodificacion"));

        horizontalLayout_4->addWidget(pushButton_aceptarmodificacion);


        verticalLayout_11->addLayout(horizontalLayout_4);


        gridLayout_2->addWidget(groupBox_resultado, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_modificar = new QPushButton(qdialog_buscarproducto);
        pushButton_modificar->setObjectName(QString::fromUtf8("pushButton_modificar"));

        horizontalLayout_2->addWidget(pushButton_modificar);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_producto_busqueda = new QLabel(qdialog_buscarproducto);
        label_producto_busqueda->setObjectName(QString::fromUtf8("label_producto_busqueda"));

        verticalLayout->addWidget(label_producto_busqueda);

        lineEdit_producto_busqueda = new QLineEdit(qdialog_buscarproducto);
        lineEdit_producto_busqueda->setObjectName(QString::fromUtf8("lineEdit_producto_busqueda"));

        verticalLayout->addWidget(lineEdit_producto_busqueda);

        label_sap_busqueda = new QLabel(qdialog_buscarproducto);
        label_sap_busqueda->setObjectName(QString::fromUtf8("label_sap_busqueda"));

        verticalLayout->addWidget(label_sap_busqueda);

        lineEdit_sap_busqueda = new QLineEdit(qdialog_buscarproducto);
        lineEdit_sap_busqueda->setObjectName(QString::fromUtf8("lineEdit_sap_busqueda"));

        verticalLayout->addWidget(lineEdit_sap_busqueda);

        label_codigodebarra_busqueda = new QLabel(qdialog_buscarproducto);
        label_codigodebarra_busqueda->setObjectName(QString::fromUtf8("label_codigodebarra_busqueda"));

        verticalLayout->addWidget(label_codigodebarra_busqueda);

        lineEdit_codigodebarra = new QLineEdit(qdialog_buscarproducto);
        lineEdit_codigodebarra->setObjectName(QString::fromUtf8("lineEdit_codigodebarra"));

        verticalLayout->addWidget(lineEdit_codigodebarra);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_buscar = new QPushButton(qdialog_buscarproducto);
        pushButton_buscar->setObjectName(QString::fromUtf8("pushButton_buscar"));

        verticalLayout->addWidget(pushButton_buscar);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 1);

        QWidget::setTabOrder(lineEdit_producto_busqueda, lineEdit_sap_busqueda);
        QWidget::setTabOrder(lineEdit_sap_busqueda, lineEdit_codigodebarra);
        QWidget::setTabOrder(lineEdit_codigodebarra, pushButton_buscar);
        QWidget::setTabOrder(pushButton_buscar, pushButton_modificar);
        QWidget::setTabOrder(pushButton_modificar, lineEdit_producto_resultado);
        QWidget::setTabOrder(lineEdit_producto_resultado, lineEdit_codigobarra_resultado);
        QWidget::setTabOrder(lineEdit_codigobarra_resultado, spinBox_stock_resultado);
        QWidget::setTabOrder(spinBox_stock_resultado, textEdit_descripcion_resultado);
        QWidget::setTabOrder(textEdit_descripcion_resultado, pushButton_aceptarmodificacion);
        QWidget::setTabOrder(pushButton_aceptarmodificacion, pushButton_cancelarmodificacion);

        retranslateUi(qdialog_buscarproducto);

        QMetaObject::connectSlotsByName(qdialog_buscarproducto);
    } // setupUi

    void retranslateUi(QDialog *qdialog_buscarproducto)
    {
        qdialog_buscarproducto->setWindowTitle(QApplication::translate("qdialog_buscarproducto", "Dialog", nullptr));
        groupBox_resultado->setTitle(QApplication::translate("qdialog_buscarproducto", "GroupBox", nullptr));
        label_producto_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Producto:", nullptr));
        label_marca_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Marca:", nullptr));
        label_codigobarra_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Codigo de Barra:", nullptr));
        label_stock_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Stock:", nullptr));
        label_codigosap_2->setText(QApplication::translate("qdialog_buscarproducto", "Codigo SAP:", nullptr));
        label_stockminimo->setText(QApplication::translate("qdialog_buscarproducto", "Stock Critico:", nullptr));
        label_ubicacion_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Ubicacion:", nullptr));
        label_productoSHE_resultado->setText(QApplication::translate("qdialog_buscarproducto", "\302\277Es un articulo SHE?", nullptr));
        radioButton_si_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Si", nullptr));
        radioButton_no_resultado->setText(QApplication::translate("qdialog_buscarproducto", "No", nullptr));
        label_descripcion_resultado->setText(QApplication::translate("qdialog_buscarproducto", "Descripcion:", nullptr));
        pushButton_cancelarmodificacion->setText(QApplication::translate("qdialog_buscarproducto", "Cancelar", nullptr));
        pushButton_aceptarmodificacion->setText(QApplication::translate("qdialog_buscarproducto", "Aceptar", nullptr));
        pushButton_modificar->setText(QApplication::translate("qdialog_buscarproducto", "Modificar", nullptr));
        label_producto_busqueda->setText(QApplication::translate("qdialog_buscarproducto", "Producto:", nullptr));
        label_sap_busqueda->setText(QApplication::translate("qdialog_buscarproducto", "SAP:", nullptr));
        label_codigodebarra_busqueda->setText(QApplication::translate("qdialog_buscarproducto", "Codigo de Barra:", nullptr));
        pushButton_buscar->setText(QApplication::translate("qdialog_buscarproducto", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_buscarproducto: public Ui_qdialog_buscarproducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_BUSCARPRODUCTO_H
