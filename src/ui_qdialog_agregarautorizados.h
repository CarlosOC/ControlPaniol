/********************************************************************************
** Form generated from reading UI file 'qdialog_agregarautorizados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_AGREGARAUTORIZADOS_H
#define UI_QDIALOG_AGREGARAUTORIZADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qdialog_agregarautorizados
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_nombre;
    QLineEdit *lineEdit_nombre;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_apellido;
    QLineEdit *lineEdit_apellido;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_sector;
    QLineEdit *lineEdit_sector;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_legajo;
    QLineEdit *lineEdit_legajo;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_agregarusuario;
    QPushButton *pushButton_cancelar;

    void setupUi(QDialog *qdialog_agregarautorizados)
    {
        if (qdialog_agregarautorizados->objectName().isEmpty())
            qdialog_agregarautorizados->setObjectName(QString::fromUtf8("qdialog_agregarautorizados"));
        qdialog_agregarautorizados->resize(683, 107);
        gridLayout = new QGridLayout(qdialog_agregarautorizados);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_nombre = new QLabel(qdialog_agregarautorizados);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));

        verticalLayout->addWidget(label_nombre);

        lineEdit_nombre = new QLineEdit(qdialog_agregarautorizados);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        verticalLayout->addWidget(lineEdit_nombre);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_apellido = new QLabel(qdialog_agregarautorizados);
        label_apellido->setObjectName(QString::fromUtf8("label_apellido"));

        verticalLayout_3->addWidget(label_apellido);

        lineEdit_apellido = new QLineEdit(qdialog_agregarautorizados);
        lineEdit_apellido->setObjectName(QString::fromUtf8("lineEdit_apellido"));

        verticalLayout_3->addWidget(lineEdit_apellido);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_sector = new QLabel(qdialog_agregarautorizados);
        label_sector->setObjectName(QString::fromUtf8("label_sector"));

        verticalLayout_6->addWidget(label_sector);

        lineEdit_sector = new QLineEdit(qdialog_agregarautorizados);
        lineEdit_sector->setObjectName(QString::fromUtf8("lineEdit_sector"));

        verticalLayout_6->addWidget(lineEdit_sector);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_6, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_legajo = new QLabel(qdialog_agregarautorizados);
        label_legajo->setObjectName(QString::fromUtf8("label_legajo"));

        verticalLayout_4->addWidget(label_legajo);

        lineEdit_legajo = new QLineEdit(qdialog_agregarautorizados);
        lineEdit_legajo->setObjectName(QString::fromUtf8("lineEdit_legajo"));

        verticalLayout_4->addWidget(lineEdit_legajo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout_4, 0, 3, 1, 1);

        pushButton_agregarusuario = new QPushButton(qdialog_agregarautorizados);
        pushButton_agregarusuario->setObjectName(QString::fromUtf8("pushButton_agregarusuario"));

        gridLayout->addWidget(pushButton_agregarusuario, 1, 2, 1, 1);

        pushButton_cancelar = new QPushButton(qdialog_agregarautorizados);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        gridLayout->addWidget(pushButton_cancelar, 1, 3, 1, 1);


        retranslateUi(qdialog_agregarautorizados);

        QMetaObject::connectSlotsByName(qdialog_agregarautorizados);
    } // setupUi

    void retranslateUi(QDialog *qdialog_agregarautorizados)
    {
        qdialog_agregarautorizados->setWindowTitle(QApplication::translate("qdialog_agregarautorizados", "Dialog", nullptr));
        label_nombre->setText(QApplication::translate("qdialog_agregarautorizados", "Nombre:", nullptr));
        label_apellido->setText(QApplication::translate("qdialog_agregarautorizados", "Apellido:", nullptr));
        label_sector->setText(QApplication::translate("qdialog_agregarautorizados", "Sector", nullptr));
        label_legajo->setText(QApplication::translate("qdialog_agregarautorizados", "Legajo:", nullptr));
        pushButton_agregarusuario->setText(QApplication::translate("qdialog_agregarautorizados", "Agregar Usuario", nullptr));
        pushButton_cancelar->setText(QApplication::translate("qdialog_agregarautorizados", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_agregarautorizados: public Ui_qdialog_agregarautorizados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_AGREGARAUTORIZADOS_H
