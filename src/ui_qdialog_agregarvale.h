/********************************************************************************
** Form generated from reading UI file 'qdialog_agregarvale.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_AGREGARVALE_H
#define UI_QDIALOG_AGREGARVALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QDialog_AgregarVale
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_autorizado;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_autorizado_nombre;
    QLabel *label_autorizado_legajo;
    QLineEdit *lineEdit_autorizado_legajo;
    QLabel *label_autorizado_apellido;
    QLineEdit *lineEdit_autorizado_apellido;
    QLabel *label_autorizado_nombre;
    QGroupBox *groupBox_autorizante;
    QGridLayout *gridLayout_3;
    QLabel *label_autorizante_nombre;
    QLabel *label_autorizante_apellido;
    QLabel *label_autorizante_legajo;
    QLineEdit *lineEdit_autorizante_nombre;
    QLineEdit *lineEdit_autorizante_apellido;
    QLineEdit *lineEdit_autorizante_legajo;
    QTableWidget *tableWidget_items;
    QGridLayout *gridLayout_4;
    QLabel *label_codigodebarra;
    QLineEdit *lineEdit_marca;
    QLabel *label_marca;
    QLabel *label_nVale;
    QLineEdit *lineEdit_producto;
    QLabel *label_cantidad;
    QComboBox *comboBox_turno;
    QLineEdit *lineEdit_linea_sector;
    QPushButton *pushButton_agregarItem;
    QLabel *label_producto;
    QLabel *label_NVale;
    QLineEdit *lineEdit_codigodebarra;
    QLabel *label_linea_sector;
    QSpinBox *spinBox_cantidad;
    QDateEdit *dateEdit_fecha;
    QLabel *label_sap;
    QLineEdit *lineEdit_sap;
    QLabel *label_turno;
    QLabel *label_fecha;
    QLabel *label_productoSHE;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_si;
    QRadioButton *radioButton_no;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_AgregarVale;
    QPushButton *pushButton_Cancelar;

    void setupUi(QDialog *QDialog_AgregarVale)
    {
        if (QDialog_AgregarVale->objectName().isEmpty())
            QDialog_AgregarVale->setObjectName(QString::fromUtf8("QDialog_AgregarVale"));
        QDialog_AgregarVale->resize(883, 448);
        QDialog_AgregarVale->setMinimumSize(QSize(0, 0));
        QDialog_AgregarVale->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_5 = new QGridLayout(QDialog_AgregarVale);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_autorizado = new QGroupBox(QDialog_AgregarVale);
        groupBox_autorizado->setObjectName(QString::fromUtf8("groupBox_autorizado"));
        gridLayout_2 = new QGridLayout(groupBox_autorizado);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_autorizado_nombre = new QLineEdit(groupBox_autorizado);
        lineEdit_autorizado_nombre->setObjectName(QString::fromUtf8("lineEdit_autorizado_nombre"));

        gridLayout->addWidget(lineEdit_autorizado_nombre, 2, 0, 1, 1);

        label_autorizado_legajo = new QLabel(groupBox_autorizado);
        label_autorizado_legajo->setObjectName(QString::fromUtf8("label_autorizado_legajo"));

        gridLayout->addWidget(label_autorizado_legajo, 0, 2, 1, 1);

        lineEdit_autorizado_legajo = new QLineEdit(groupBox_autorizado);
        lineEdit_autorizado_legajo->setObjectName(QString::fromUtf8("lineEdit_autorizado_legajo"));

        gridLayout->addWidget(lineEdit_autorizado_legajo, 2, 2, 1, 1);

        label_autorizado_apellido = new QLabel(groupBox_autorizado);
        label_autorizado_apellido->setObjectName(QString::fromUtf8("label_autorizado_apellido"));

        gridLayout->addWidget(label_autorizado_apellido, 0, 1, 1, 1);

        lineEdit_autorizado_apellido = new QLineEdit(groupBox_autorizado);
        lineEdit_autorizado_apellido->setObjectName(QString::fromUtf8("lineEdit_autorizado_apellido"));

        gridLayout->addWidget(lineEdit_autorizado_apellido, 2, 1, 1, 1);

        label_autorizado_nombre = new QLabel(groupBox_autorizado);
        label_autorizado_nombre->setObjectName(QString::fromUtf8("label_autorizado_nombre"));

        gridLayout->addWidget(label_autorizado_nombre, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_autorizado);


        gridLayout_5->addLayout(verticalLayout, 3, 0, 2, 2);

        groupBox_autorizante = new QGroupBox(QDialog_AgregarVale);
        groupBox_autorizante->setObjectName(QString::fromUtf8("groupBox_autorizante"));
        gridLayout_3 = new QGridLayout(groupBox_autorizante);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_autorizante_nombre = new QLabel(groupBox_autorizante);
        label_autorizante_nombre->setObjectName(QString::fromUtf8("label_autorizante_nombre"));

        gridLayout_3->addWidget(label_autorizante_nombre, 0, 0, 1, 1);

        label_autorizante_apellido = new QLabel(groupBox_autorizante);
        label_autorizante_apellido->setObjectName(QString::fromUtf8("label_autorizante_apellido"));

        gridLayout_3->addWidget(label_autorizante_apellido, 0, 1, 1, 1);

        label_autorizante_legajo = new QLabel(groupBox_autorizante);
        label_autorizante_legajo->setObjectName(QString::fromUtf8("label_autorizante_legajo"));

        gridLayout_3->addWidget(label_autorizante_legajo, 0, 2, 1, 1);

        lineEdit_autorizante_nombre = new QLineEdit(groupBox_autorizante);
        lineEdit_autorizante_nombre->setObjectName(QString::fromUtf8("lineEdit_autorizante_nombre"));

        gridLayout_3->addWidget(lineEdit_autorizante_nombre, 1, 0, 1, 1);

        lineEdit_autorizante_apellido = new QLineEdit(groupBox_autorizante);
        lineEdit_autorizante_apellido->setObjectName(QString::fromUtf8("lineEdit_autorizante_apellido"));

        gridLayout_3->addWidget(lineEdit_autorizante_apellido, 1, 1, 1, 1);

        lineEdit_autorizante_legajo = new QLineEdit(groupBox_autorizante);
        lineEdit_autorizante_legajo->setObjectName(QString::fromUtf8("lineEdit_autorizante_legajo"));

        gridLayout_3->addWidget(lineEdit_autorizante_legajo, 1, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_autorizante, 5, 0, 1, 1);

        tableWidget_items = new QTableWidget(QDialog_AgregarVale);
        tableWidget_items->setObjectName(QString::fromUtf8("tableWidget_items"));
        tableWidget_items->setFrameShadow(QFrame::Plain);
        tableWidget_items->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_items->setAlternatingRowColors(true);
        tableWidget_items->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_items->setSortingEnabled(true);
        tableWidget_items->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(tableWidget_items, 2, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_codigodebarra = new QLabel(QDialog_AgregarVale);
        label_codigodebarra->setObjectName(QString::fromUtf8("label_codigodebarra"));

        gridLayout_4->addWidget(label_codigodebarra, 1, 1, 1, 1);

        lineEdit_marca = new QLineEdit(QDialog_AgregarVale);
        lineEdit_marca->setObjectName(QString::fromUtf8("lineEdit_marca"));

        gridLayout_4->addWidget(lineEdit_marca, 3, 6, 1, 1);

        label_marca = new QLabel(QDialog_AgregarVale);
        label_marca->setObjectName(QString::fromUtf8("label_marca"));

        gridLayout_4->addWidget(label_marca, 1, 6, 1, 1);

        label_nVale = new QLabel(QDialog_AgregarVale);
        label_nVale->setObjectName(QString::fromUtf8("label_nVale"));

        gridLayout_4->addWidget(label_nVale, 0, 0, 1, 1);

        lineEdit_producto = new QLineEdit(QDialog_AgregarVale);
        lineEdit_producto->setObjectName(QString::fromUtf8("lineEdit_producto"));

        gridLayout_4->addWidget(lineEdit_producto, 3, 5, 1, 1);

        label_cantidad = new QLabel(QDialog_AgregarVale);
        label_cantidad->setObjectName(QString::fromUtf8("label_cantidad"));

        gridLayout_4->addWidget(label_cantidad, 1, 3, 1, 1);

        comboBox_turno = new QComboBox(QDialog_AgregarVale);
        comboBox_turno->addItem(QString());
        comboBox_turno->addItem(QString());
        comboBox_turno->addItem(QString());
        comboBox_turno->setObjectName(QString::fromUtf8("comboBox_turno"));

        gridLayout_4->addWidget(comboBox_turno, 3, 10, 1, 1);

        lineEdit_linea_sector = new QLineEdit(QDialog_AgregarVale);
        lineEdit_linea_sector->setObjectName(QString::fromUtf8("lineEdit_linea_sector"));

        gridLayout_4->addWidget(lineEdit_linea_sector, 3, 9, 1, 1);

        pushButton_agregarItem = new QPushButton(QDialog_AgregarVale);
        pushButton_agregarItem->setObjectName(QString::fromUtf8("pushButton_agregarItem"));

        gridLayout_4->addWidget(pushButton_agregarItem, 3, 11, 1, 1);

        label_producto = new QLabel(QDialog_AgregarVale);
        label_producto->setObjectName(QString::fromUtf8("label_producto"));

        gridLayout_4->addWidget(label_producto, 1, 5, 1, 1);

        label_NVale = new QLabel(QDialog_AgregarVale);
        label_NVale->setObjectName(QString::fromUtf8("label_NVale"));

        gridLayout_4->addWidget(label_NVale, 0, 1, 1, 1);

        lineEdit_codigodebarra = new QLineEdit(QDialog_AgregarVale);
        lineEdit_codigodebarra->setObjectName(QString::fromUtf8("lineEdit_codigodebarra"));

        gridLayout_4->addWidget(lineEdit_codigodebarra, 3, 1, 1, 1);

        label_linea_sector = new QLabel(QDialog_AgregarVale);
        label_linea_sector->setObjectName(QString::fromUtf8("label_linea_sector"));

        gridLayout_4->addWidget(label_linea_sector, 1, 9, 1, 1);

        spinBox_cantidad = new QSpinBox(QDialog_AgregarVale);
        spinBox_cantidad->setObjectName(QString::fromUtf8("spinBox_cantidad"));

        gridLayout_4->addWidget(spinBox_cantidad, 3, 3, 1, 1);

        dateEdit_fecha = new QDateEdit(QDialog_AgregarVale);
        dateEdit_fecha->setObjectName(QString::fromUtf8("dateEdit_fecha"));
        dateEdit_fecha->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        dateEdit_fecha->setCurrentSection(QDateTimeEdit::DaySection);

        gridLayout_4->addWidget(dateEdit_fecha, 3, 8, 1, 1);

        label_sap = new QLabel(QDialog_AgregarVale);
        label_sap->setObjectName(QString::fromUtf8("label_sap"));

        gridLayout_4->addWidget(label_sap, 1, 0, 1, 1);

        lineEdit_sap = new QLineEdit(QDialog_AgregarVale);
        lineEdit_sap->setObjectName(QString::fromUtf8("lineEdit_sap"));

        gridLayout_4->addWidget(lineEdit_sap, 3, 0, 1, 1);

        label_turno = new QLabel(QDialog_AgregarVale);
        label_turno->setObjectName(QString::fromUtf8("label_turno"));

        gridLayout_4->addWidget(label_turno, 1, 10, 1, 1);

        label_fecha = new QLabel(QDialog_AgregarVale);
        label_fecha->setObjectName(QString::fromUtf8("label_fecha"));

        gridLayout_4->addWidget(label_fecha, 1, 8, 1, 1);

        label_productoSHE = new QLabel(QDialog_AgregarVale);
        label_productoSHE->setObjectName(QString::fromUtf8("label_productoSHE"));

        gridLayout_4->addWidget(label_productoSHE, 1, 7, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_si = new QRadioButton(QDialog_AgregarVale);
        radioButton_si->setObjectName(QString::fromUtf8("radioButton_si"));

        horizontalLayout_2->addWidget(radioButton_si);

        radioButton_no = new QRadioButton(QDialog_AgregarVale);
        radioButton_no->setObjectName(QString::fromUtf8("radioButton_no"));

        horizontalLayout_2->addWidget(radioButton_no);


        gridLayout_4->addLayout(horizontalLayout_2, 3, 7, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_AgregarVale = new QPushButton(QDialog_AgregarVale);
        pushButton_AgregarVale->setObjectName(QString::fromUtf8("pushButton_AgregarVale"));

        horizontalLayout->addWidget(pushButton_AgregarVale);

        pushButton_Cancelar = new QPushButton(QDialog_AgregarVale);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        horizontalLayout->addWidget(pushButton_Cancelar);


        gridLayout_5->addLayout(horizontalLayout, 6, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_sap, lineEdit_producto);
        QWidget::setTabOrder(lineEdit_producto, dateEdit_fecha);
        QWidget::setTabOrder(dateEdit_fecha, lineEdit_linea_sector);
        QWidget::setTabOrder(lineEdit_linea_sector, comboBox_turno);
        QWidget::setTabOrder(comboBox_turno, pushButton_agregarItem);
        QWidget::setTabOrder(pushButton_agregarItem, lineEdit_autorizado_nombre);
        QWidget::setTabOrder(lineEdit_autorizado_nombre, lineEdit_autorizado_apellido);
        QWidget::setTabOrder(lineEdit_autorizado_apellido, lineEdit_autorizado_legajo);
        QWidget::setTabOrder(lineEdit_autorizado_legajo, lineEdit_autorizante_nombre);
        QWidget::setTabOrder(lineEdit_autorizante_nombre, lineEdit_autorizante_apellido);
        QWidget::setTabOrder(lineEdit_autorizante_apellido, lineEdit_autorizante_legajo);
        QWidget::setTabOrder(lineEdit_autorizante_legajo, pushButton_AgregarVale);
        QWidget::setTabOrder(pushButton_AgregarVale, pushButton_Cancelar);
        QWidget::setTabOrder(pushButton_Cancelar, tableWidget_items);

        retranslateUi(QDialog_AgregarVale);

        QMetaObject::connectSlotsByName(QDialog_AgregarVale);
    } // setupUi

    void retranslateUi(QDialog *QDialog_AgregarVale)
    {
        QDialog_AgregarVale->setWindowTitle(QApplication::translate("QDialog_AgregarVale", "Dialog", nullptr));
        groupBox_autorizado->setTitle(QApplication::translate("QDialog_AgregarVale", "Autorizado:", nullptr));
        label_autorizado_legajo->setText(QApplication::translate("QDialog_AgregarVale", "Legajo:", nullptr));
        label_autorizado_apellido->setText(QApplication::translate("QDialog_AgregarVale", "Apellido:", nullptr));
        label_autorizado_nombre->setText(QApplication::translate("QDialog_AgregarVale", "Nombre:", nullptr));
        groupBox_autorizante->setTitle(QApplication::translate("QDialog_AgregarVale", "Autorizante", nullptr));
        label_autorizante_nombre->setText(QApplication::translate("QDialog_AgregarVale", "Nombre:", nullptr));
        label_autorizante_apellido->setText(QApplication::translate("QDialog_AgregarVale", "Apellido:", nullptr));
        label_autorizante_legajo->setText(QApplication::translate("QDialog_AgregarVale", "Legajo:", nullptr));
        label_codigodebarra->setText(QApplication::translate("QDialog_AgregarVale", "Codigo de Barra:", nullptr));
        label_marca->setText(QApplication::translate("QDialog_AgregarVale", "Marca:", nullptr));
        label_nVale->setText(QApplication::translate("QDialog_AgregarVale", "Vale N\302\260:", nullptr));
        label_cantidad->setText(QApplication::translate("QDialog_AgregarVale", "Cantidad:", nullptr));
        comboBox_turno->setItemText(0, QApplication::translate("QDialog_AgregarVale", "TM", nullptr));
        comboBox_turno->setItemText(1, QApplication::translate("QDialog_AgregarVale", "TT", nullptr));
        comboBox_turno->setItemText(2, QApplication::translate("QDialog_AgregarVale", "TN", nullptr));

        pushButton_agregarItem->setText(QApplication::translate("QDialog_AgregarVale", "Agregar Item", nullptr));
        label_producto->setText(QApplication::translate("QDialog_AgregarVale", "Producto:", nullptr));
        label_NVale->setText(QApplication::translate("QDialog_AgregarVale", "TextLabel", nullptr));
        label_linea_sector->setText(QApplication::translate("QDialog_AgregarVale", "Linea/Sector:", nullptr));
        dateEdit_fecha->setDisplayFormat(QApplication::translate("QDialog_AgregarVale", "dd/MM/yyyy", nullptr));
        label_sap->setText(QApplication::translate("QDialog_AgregarVale", "SAP:", nullptr));
        label_turno->setText(QApplication::translate("QDialog_AgregarVale", "Turno:", nullptr));
        label_fecha->setText(QApplication::translate("QDialog_AgregarVale", "Fecha:", nullptr));
        label_productoSHE->setText(QApplication::translate("QDialog_AgregarVale", "\302\277Es un articulo SHE?", nullptr));
        radioButton_si->setText(QApplication::translate("QDialog_AgregarVale", "Si", nullptr));
        radioButton_no->setText(QApplication::translate("QDialog_AgregarVale", "No", nullptr));
        pushButton_AgregarVale->setText(QApplication::translate("QDialog_AgregarVale", "Agregar Vale", nullptr));
        pushButton_Cancelar->setText(QApplication::translate("QDialog_AgregarVale", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialog_AgregarVale: public Ui_QDialog_AgregarVale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_AGREGARVALE_H
