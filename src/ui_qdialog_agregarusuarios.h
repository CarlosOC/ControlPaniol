/********************************************************************************
** Form generated from reading UI file 'qdialog_agregarusuarios.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_AGREGARUSUARIOS_H
#define UI_QDIALOG_AGREGARUSUARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qdialog_agregarusuarios
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_nombre;
    QLineEdit *lineEdit_nombre;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_nivelusuario;
    QComboBox *comboBox_nivelusuario;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_apellido;
    QLineEdit *lineEdit_apellido;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_legajo;
    QLineEdit *lineEdit_legajo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_pass_01;
    QLineEdit *lineEdit_pass_01;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_pass_02;
    QLineEdit *lineEdit_pass_02;
    QPushButton *pushButton_agregarusuario;
    QPushButton *pushButton_cancelar;

    void setupUi(QDialog *qdialog_agregarusuarios)
    {
        if (qdialog_agregarusuarios->objectName().isEmpty())
            qdialog_agregarusuarios->setObjectName(QString::fromUtf8("qdialog_agregarusuarios"));
        qdialog_agregarusuarios->resize(597, 259);
        gridLayout = new QGridLayout(qdialog_agregarusuarios);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_nombre = new QLabel(qdialog_agregarusuarios);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));

        verticalLayout->addWidget(label_nombre);

        lineEdit_nombre = new QLineEdit(qdialog_agregarusuarios);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        verticalLayout->addWidget(lineEdit_nombre);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_nivelusuario = new QLabel(qdialog_agregarusuarios);
        label_nivelusuario->setObjectName(QString::fromUtf8("label_nivelusuario"));

        verticalLayout_5->addWidget(label_nivelusuario);

        comboBox_nivelusuario = new QComboBox(qdialog_agregarusuarios);
        comboBox_nivelusuario->addItem(QString());
        comboBox_nivelusuario->addItem(QString());
        comboBox_nivelusuario->addItem(QString());
        comboBox_nivelusuario->setObjectName(QString::fromUtf8("comboBox_nivelusuario"));

        verticalLayout_5->addWidget(comboBox_nivelusuario);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_apellido = new QLabel(qdialog_agregarusuarios);
        label_apellido->setObjectName(QString::fromUtf8("label_apellido"));

        verticalLayout_3->addWidget(label_apellido);

        lineEdit_apellido = new QLineEdit(qdialog_agregarusuarios);
        lineEdit_apellido->setObjectName(QString::fromUtf8("lineEdit_apellido"));

        verticalLayout_3->addWidget(lineEdit_apellido);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_legajo = new QLabel(qdialog_agregarusuarios);
        label_legajo->setObjectName(QString::fromUtf8("label_legajo"));

        verticalLayout_4->addWidget(label_legajo);

        lineEdit_legajo = new QLineEdit(qdialog_agregarusuarios);
        lineEdit_legajo->setObjectName(QString::fromUtf8("lineEdit_legajo"));

        verticalLayout_4->addWidget(lineEdit_legajo);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_pass_01 = new QLabel(qdialog_agregarusuarios);
        label_pass_01->setObjectName(QString::fromUtf8("label_pass_01"));

        verticalLayout_2->addWidget(label_pass_01);

        lineEdit_pass_01 = new QLineEdit(qdialog_agregarusuarios);
        lineEdit_pass_01->setObjectName(QString::fromUtf8("lineEdit_pass_01"));

        verticalLayout_2->addWidget(lineEdit_pass_01);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_pass_02 = new QLabel(qdialog_agregarusuarios);
        label_pass_02->setObjectName(QString::fromUtf8("label_pass_02"));

        verticalLayout_6->addWidget(label_pass_02);

        lineEdit_pass_02 = new QLineEdit(qdialog_agregarusuarios);
        lineEdit_pass_02->setObjectName(QString::fromUtf8("lineEdit_pass_02"));

        verticalLayout_6->addWidget(lineEdit_pass_02);


        gridLayout->addLayout(verticalLayout_6, 2, 1, 1, 1);

        pushButton_agregarusuario = new QPushButton(qdialog_agregarusuarios);
        pushButton_agregarusuario->setObjectName(QString::fromUtf8("pushButton_agregarusuario"));

        gridLayout->addWidget(pushButton_agregarusuario, 3, 0, 1, 1);

        pushButton_cancelar = new QPushButton(qdialog_agregarusuarios);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        gridLayout->addWidget(pushButton_cancelar, 3, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_nombre, lineEdit_apellido);
        QWidget::setTabOrder(lineEdit_apellido, lineEdit_legajo);
        QWidget::setTabOrder(lineEdit_legajo, comboBox_nivelusuario);
        QWidget::setTabOrder(comboBox_nivelusuario, lineEdit_pass_01);
        QWidget::setTabOrder(lineEdit_pass_01, lineEdit_pass_02);
        QWidget::setTabOrder(lineEdit_pass_02, pushButton_agregarusuario);
        QWidget::setTabOrder(pushButton_agregarusuario, pushButton_cancelar);

        retranslateUi(qdialog_agregarusuarios);

        QMetaObject::connectSlotsByName(qdialog_agregarusuarios);
    } // setupUi

    void retranslateUi(QDialog *qdialog_agregarusuarios)
    {
        qdialog_agregarusuarios->setWindowTitle(QApplication::translate("qdialog_agregarusuarios", "Dialog", nullptr));
        label_nombre->setText(QApplication::translate("qdialog_agregarusuarios", "Nombre:", nullptr));
        label_nivelusuario->setText(QApplication::translate("qdialog_agregarusuarios", "Nivel de Usuario", nullptr));
        comboBox_nivelusuario->setItemText(0, QApplication::translate("qdialog_agregarusuarios", "Nivel 0", nullptr));
        comboBox_nivelusuario->setItemText(1, QApplication::translate("qdialog_agregarusuarios", "Nivel 1", nullptr));
        comboBox_nivelusuario->setItemText(2, QApplication::translate("qdialog_agregarusuarios", "Nivel 2", nullptr));

        label_apellido->setText(QApplication::translate("qdialog_agregarusuarios", "Apellido:", nullptr));
        label_legajo->setText(QApplication::translate("qdialog_agregarusuarios", "Legajo:", nullptr));
        label_pass_01->setText(QApplication::translate("qdialog_agregarusuarios", "Contrase\303\261a:", nullptr));
        label_pass_02->setText(QApplication::translate("qdialog_agregarusuarios", "Repetir Contrase\303\261a:", nullptr));
        pushButton_agregarusuario->setText(QApplication::translate("qdialog_agregarusuarios", "Agregar Usuario", nullptr));
        pushButton_cancelar->setText(QApplication::translate("qdialog_agregarusuarios", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_agregarusuarios: public Ui_qdialog_agregarusuarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_AGREGARUSUARIOS_H
