/********************************************************************************
** Form generated from reading UI file 'qdialog_ingresousuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_INGRESOUSUARIO_H
#define UI_QDIALOG_INGRESOUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qdialog_ingresousuario
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_usuario;
    QLineEdit *lineEdit_legajo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_contrasena;
    QLineEdit *lineEdit_pass;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_aceptar;
    QPushButton *pushButton_cancelar;

    void setupUi(QDialog *qdialog_ingresousuario)
    {
        if (qdialog_ingresousuario->objectName().isEmpty())
            qdialog_ingresousuario->setObjectName(QString::fromUtf8("qdialog_ingresousuario"));
        qdialog_ingresousuario->resize(405, 144);
        gridLayout = new QGridLayout(qdialog_ingresousuario);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_usuario = new QLabel(qdialog_ingresousuario);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));

        verticalLayout->addWidget(label_usuario);

        lineEdit_legajo = new QLineEdit(qdialog_ingresousuario);
        lineEdit_legajo->setObjectName(QString::fromUtf8("lineEdit_legajo"));

        verticalLayout->addWidget(lineEdit_legajo);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_contrasena = new QLabel(qdialog_ingresousuario);
        label_contrasena->setObjectName(QString::fromUtf8("label_contrasena"));

        verticalLayout_2->addWidget(label_contrasena);

        lineEdit_pass = new QLineEdit(qdialog_ingresousuario);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_pass);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_aceptar = new QPushButton(qdialog_ingresousuario);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));

        horizontalLayout->addWidget(pushButton_aceptar);

        pushButton_cancelar = new QPushButton(qdialog_ingresousuario);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(qdialog_ingresousuario);

        QMetaObject::connectSlotsByName(qdialog_ingresousuario);
    } // setupUi

    void retranslateUi(QDialog *qdialog_ingresousuario)
    {
        qdialog_ingresousuario->setWindowTitle(QApplication::translate("qdialog_ingresousuario", "Dialog", nullptr));
        label_usuario->setText(QApplication::translate("qdialog_ingresousuario", "Legajo:", nullptr));
        label_contrasena->setText(QApplication::translate("qdialog_ingresousuario", "Contrase\303\261a:", nullptr));
        pushButton_aceptar->setText(QApplication::translate("qdialog_ingresousuario", "Aceptar", nullptr));
        pushButton_cancelar->setText(QApplication::translate("qdialog_ingresousuario", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_ingresousuario: public Ui_qdialog_ingresousuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_INGRESOUSUARIO_H
