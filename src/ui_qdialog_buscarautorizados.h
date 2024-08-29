/********************************************************************************
** Form generated from reading UI file 'qdialog_buscarautorizados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_BUSCARAUTORIZADOS_H
#define UI_QDIALOG_BUSCARAUTORIZADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qdialog_buscarautorizados
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_resultado;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_marca_resultado;
    QLineEdit *lineEdit_apellido_resultado;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_codigosap_2;
    QLineEdit *lineEdit_sector_resultado;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_codigobarra_resultado;
    QLineEdit *lineEdit_legajo_resultado;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_producto_resultado;
    QLineEdit *lineEdit_nombre_resultado;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancelarmodificacion;
    QPushButton *pushButton_aceptarmodificacion;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_modificar;
    QVBoxLayout *verticalLayout;
    QLabel *label_nombre_busqueda;
    QLineEdit *lineEdit_nombre_busqueda;
    QLabel *label_apellido_busqueda;
    QLineEdit *lineEdit_apellido_busqueda;
    QLabel *label_legajo_busqueda;
    QLineEdit *lineEdit_legajo_busqueda;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_buscar;

    void setupUi(QDialog *qdialog_buscarautorizados)
    {
        if (qdialog_buscarautorizados->objectName().isEmpty())
            qdialog_buscarautorizados->setObjectName(QString::fromUtf8("qdialog_buscarautorizados"));
        qdialog_buscarautorizados->resize(592, 242);
        gridLayout_2 = new QGridLayout(qdialog_buscarautorizados);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_resultado = new QGroupBox(qdialog_buscarautorizados);
        groupBox_resultado->setObjectName(QString::fromUtf8("groupBox_resultado"));
        verticalLayout_11 = new QVBoxLayout(groupBox_resultado);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_marca_resultado = new QLabel(groupBox_resultado);
        label_marca_resultado->setObjectName(QString::fromUtf8("label_marca_resultado"));

        verticalLayout_3->addWidget(label_marca_resultado);

        lineEdit_apellido_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_apellido_resultado->setObjectName(QString::fromUtf8("lineEdit_apellido_resultado"));

        verticalLayout_3->addWidget(lineEdit_apellido_resultado);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_codigosap_2 = new QLabel(groupBox_resultado);
        label_codigosap_2->setObjectName(QString::fromUtf8("label_codigosap_2"));

        verticalLayout_7->addWidget(label_codigosap_2);

        lineEdit_sector_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_sector_resultado->setObjectName(QString::fromUtf8("lineEdit_sector_resultado"));

        verticalLayout_7->addWidget(lineEdit_sector_resultado);


        gridLayout->addLayout(verticalLayout_7, 1, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_codigobarra_resultado = new QLabel(groupBox_resultado);
        label_codigobarra_resultado->setObjectName(QString::fromUtf8("label_codigobarra_resultado"));

        verticalLayout_8->addWidget(label_codigobarra_resultado);

        lineEdit_legajo_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_legajo_resultado->setObjectName(QString::fromUtf8("lineEdit_legajo_resultado"));

        verticalLayout_8->addWidget(lineEdit_legajo_resultado);


        gridLayout->addLayout(verticalLayout_8, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_producto_resultado = new QLabel(groupBox_resultado);
        label_producto_resultado->setObjectName(QString::fromUtf8("label_producto_resultado"));

        verticalLayout_9->addWidget(label_producto_resultado);

        lineEdit_nombre_resultado = new QLineEdit(groupBox_resultado);
        lineEdit_nombre_resultado->setObjectName(QString::fromUtf8("lineEdit_nombre_resultado"));

        verticalLayout_9->addWidget(lineEdit_nombre_resultado);


        gridLayout->addLayout(verticalLayout_9, 0, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout);

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

        pushButton_modificar = new QPushButton(qdialog_buscarautorizados);
        pushButton_modificar->setObjectName(QString::fromUtf8("pushButton_modificar"));

        horizontalLayout_2->addWidget(pushButton_modificar);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_nombre_busqueda = new QLabel(qdialog_buscarautorizados);
        label_nombre_busqueda->setObjectName(QString::fromUtf8("label_nombre_busqueda"));

        verticalLayout->addWidget(label_nombre_busqueda);

        lineEdit_nombre_busqueda = new QLineEdit(qdialog_buscarautorizados);
        lineEdit_nombre_busqueda->setObjectName(QString::fromUtf8("lineEdit_nombre_busqueda"));

        verticalLayout->addWidget(lineEdit_nombre_busqueda);

        label_apellido_busqueda = new QLabel(qdialog_buscarautorizados);
        label_apellido_busqueda->setObjectName(QString::fromUtf8("label_apellido_busqueda"));

        verticalLayout->addWidget(label_apellido_busqueda);

        lineEdit_apellido_busqueda = new QLineEdit(qdialog_buscarautorizados);
        lineEdit_apellido_busqueda->setObjectName(QString::fromUtf8("lineEdit_apellido_busqueda"));

        verticalLayout->addWidget(lineEdit_apellido_busqueda);

        label_legajo_busqueda = new QLabel(qdialog_buscarautorizados);
        label_legajo_busqueda->setObjectName(QString::fromUtf8("label_legajo_busqueda"));

        verticalLayout->addWidget(label_legajo_busqueda);

        lineEdit_legajo_busqueda = new QLineEdit(qdialog_buscarautorizados);
        lineEdit_legajo_busqueda->setObjectName(QString::fromUtf8("lineEdit_legajo_busqueda"));

        verticalLayout->addWidget(lineEdit_legajo_busqueda);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_buscar = new QPushButton(qdialog_buscarautorizados);
        pushButton_buscar->setObjectName(QString::fromUtf8("pushButton_buscar"));

        verticalLayout->addWidget(pushButton_buscar);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 1);


        retranslateUi(qdialog_buscarautorizados);

        QMetaObject::connectSlotsByName(qdialog_buscarautorizados);
    } // setupUi

    void retranslateUi(QDialog *qdialog_buscarautorizados)
    {
        qdialog_buscarautorizados->setWindowTitle(QApplication::translate("qdialog_buscarautorizados", "Dialog", nullptr));
        groupBox_resultado->setTitle(QApplication::translate("qdialog_buscarautorizados", "GroupBox", nullptr));
        label_marca_resultado->setText(QApplication::translate("qdialog_buscarautorizados", "Apellido", nullptr));
        label_codigosap_2->setText(QApplication::translate("qdialog_buscarautorizados", "Sector", nullptr));
        label_codigobarra_resultado->setText(QApplication::translate("qdialog_buscarautorizados", "Legajo", nullptr));
        label_producto_resultado->setText(QApplication::translate("qdialog_buscarautorizados", "Nombre", nullptr));
        pushButton_cancelarmodificacion->setText(QApplication::translate("qdialog_buscarautorizados", "Cancelar", nullptr));
        pushButton_aceptarmodificacion->setText(QApplication::translate("qdialog_buscarautorizados", "Aceptar", nullptr));
        pushButton_modificar->setText(QApplication::translate("qdialog_buscarautorizados", "Modificar", nullptr));
        label_nombre_busqueda->setText(QApplication::translate("qdialog_buscarautorizados", "Nombre", nullptr));
        label_apellido_busqueda->setText(QApplication::translate("qdialog_buscarautorizados", "Apellido", nullptr));
        label_legajo_busqueda->setText(QApplication::translate("qdialog_buscarautorizados", "Legajo", nullptr));
        pushButton_buscar->setText(QApplication::translate("qdialog_buscarautorizados", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_buscarautorizados: public Ui_qdialog_buscarautorizados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_BUSCARAUTORIZADOS_H
