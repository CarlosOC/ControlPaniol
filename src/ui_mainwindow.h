/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCambiar_Usuario;
    QAction *actionCrear_Usuario;
    QAction *actionAgregar_Producto;
    QAction *actionBuscar_Producto;
    QAction *actionAgregar_Vale;
    QAction *actionBuscar_Vale;
    QAction *actionSobre_Guillermito_System;
    QAction *actionLista_de_Vales;
    QAction *actionLista_de_Productos;
    QAction *actionAgregar_Personal_Autorizado;
    QAction *actionBuscar_Personal_Autorizado;
    QAction *actionVer_Lista_del_Personal_Autorizado;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_UltimosVales;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuVales;
    QMenu *menuProductos;
    QMenu *menuVales_2;
    QMenu *menuEstadistica;
    QMenu *menuAyuda;
    QMenu *menuPersonal_Autorizado;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(624, 300);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionCambiar_Usuario = new QAction(MainWindow);
        actionCambiar_Usuario->setObjectName(QString::fromUtf8("actionCambiar_Usuario"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconos/Iconos/Usuario.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCambiar_Usuario->setIcon(icon);
        actionCrear_Usuario = new QAction(MainWindow);
        actionCrear_Usuario->setObjectName(QString::fromUtf8("actionCrear_Usuario"));
        actionAgregar_Producto = new QAction(MainWindow);
        actionAgregar_Producto->setObjectName(QString::fromUtf8("actionAgregar_Producto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconos/Iconos/producto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAgregar_Producto->setIcon(icon1);
        actionBuscar_Producto = new QAction(MainWindow);
        actionBuscar_Producto->setObjectName(QString::fromUtf8("actionBuscar_Producto"));
        actionAgregar_Vale = new QAction(MainWindow);
        actionAgregar_Vale->setObjectName(QString::fromUtf8("actionAgregar_Vale"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconos/Iconos/AgregarVale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAgregar_Vale->setIcon(icon2);
        actionBuscar_Vale = new QAction(MainWindow);
        actionBuscar_Vale->setObjectName(QString::fromUtf8("actionBuscar_Vale"));
        actionSobre_Guillermito_System = new QAction(MainWindow);
        actionSobre_Guillermito_System->setObjectName(QString::fromUtf8("actionSobre_Guillermito_System"));
        actionLista_de_Vales = new QAction(MainWindow);
        actionLista_de_Vales->setObjectName(QString::fromUtf8("actionLista_de_Vales"));
        actionLista_de_Productos = new QAction(MainWindow);
        actionLista_de_Productos->setObjectName(QString::fromUtf8("actionLista_de_Productos"));
        actionAgregar_Personal_Autorizado = new QAction(MainWindow);
        actionAgregar_Personal_Autorizado->setObjectName(QString::fromUtf8("actionAgregar_Personal_Autorizado"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconos/Iconos/personalAutorizado.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAgregar_Personal_Autorizado->setIcon(icon3);
        actionBuscar_Personal_Autorizado = new QAction(MainWindow);
        actionBuscar_Personal_Autorizado->setObjectName(QString::fromUtf8("actionBuscar_Personal_Autorizado"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconos/Iconos/BuscarPersonalAutorizado.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuscar_Personal_Autorizado->setIcon(icon4);
        actionVer_Lista_del_Personal_Autorizado = new QAction(MainWindow);
        actionVer_Lista_del_Personal_Autorizado->setObjectName(QString::fromUtf8("actionVer_Lista_del_Personal_Autorizado"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_UltimosVales = new QTableWidget(centralWidget);
        tableWidget_UltimosVales->setObjectName(QString::fromUtf8("tableWidget_UltimosVales"));
        tableWidget_UltimosVales->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_UltimosVales->setDefaultDropAction(Qt::IgnoreAction);
        tableWidget_UltimosVales->setAlternatingRowColors(true);
        tableWidget_UltimosVales->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableWidget_UltimosVales->setTextElideMode(Qt::ElideRight);
        tableWidget_UltimosVales->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget_UltimosVales, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 624, 21));
        menuVales = new QMenu(menuBar);
        menuVales->setObjectName(QString::fromUtf8("menuVales"));
        menuProductos = new QMenu(menuBar);
        menuProductos->setObjectName(QString::fromUtf8("menuProductos"));
        menuVales_2 = new QMenu(menuBar);
        menuVales_2->setObjectName(QString::fromUtf8("menuVales_2"));
        menuEstadistica = new QMenu(menuBar);
        menuEstadistica->setObjectName(QString::fromUtf8("menuEstadistica"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuPersonal_Autorizado = new QMenu(menuBar);
        menuPersonal_Autorizado->setObjectName(QString::fromUtf8("menuPersonal_Autorizado"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuVales->menuAction());
        menuBar->addAction(menuProductos->menuAction());
        menuBar->addAction(menuVales_2->menuAction());
        menuBar->addAction(menuPersonal_Autorizado->menuAction());
        menuBar->addAction(menuEstadistica->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuVales->addAction(actionCambiar_Usuario);
        menuVales->addAction(actionCrear_Usuario);
        menuProductos->addAction(actionAgregar_Producto);
        menuProductos->addAction(actionBuscar_Producto);
        menuProductos->addAction(actionLista_de_Productos);
        menuVales_2->addAction(actionAgregar_Vale);
        menuVales_2->addAction(actionBuscar_Vale);
        menuVales_2->addAction(actionLista_de_Vales);
        menuAyuda->addAction(actionSobre_Guillermito_System);
        menuPersonal_Autorizado->addAction(actionAgregar_Personal_Autorizado);
        menuPersonal_Autorizado->addAction(actionBuscar_Personal_Autorizado);
        menuPersonal_Autorizado->addAction(actionVer_Lista_del_Personal_Autorizado);
        mainToolBar->addAction(actionCambiar_Usuario);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAgregar_Producto);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAgregar_Vale);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        actionCambiar_Usuario->setText(QApplication::translate("MainWindow", "Cambiar Usuario", nullptr));
        actionCrear_Usuario->setText(QApplication::translate("MainWindow", "Crear Usuario", nullptr));
        actionAgregar_Producto->setText(QApplication::translate("MainWindow", "Agregar Producto", nullptr));
        actionBuscar_Producto->setText(QApplication::translate("MainWindow", "Buscar Producto", nullptr));
        actionAgregar_Vale->setText(QApplication::translate("MainWindow", "Agregar Vale", nullptr));
        actionBuscar_Vale->setText(QApplication::translate("MainWindow", "Buscar Vale", nullptr));
        actionSobre_Guillermito_System->setText(QApplication::translate("MainWindow", "Guillermito System", nullptr));
        actionLista_de_Vales->setText(QApplication::translate("MainWindow", "Lista de Vales", nullptr));
        actionLista_de_Productos->setText(QApplication::translate("MainWindow", "Lista de Productos", nullptr));
        actionAgregar_Personal_Autorizado->setText(QApplication::translate("MainWindow", "Agregar Personal Autorizado", nullptr));
        actionBuscar_Personal_Autorizado->setText(QApplication::translate("MainWindow", "Buscar Personal Autorizado", nullptr));
        actionVer_Lista_del_Personal_Autorizado->setText(QApplication::translate("MainWindow", "Ver Lista del Personal Autorizado", nullptr));
        menuVales->setTitle(QApplication::translate("MainWindow", "Usuarios", nullptr));
        menuProductos->setTitle(QApplication::translate("MainWindow", "Productos", nullptr));
        menuVales_2->setTitle(QApplication::translate("MainWindow", "Vales", nullptr));
        menuEstadistica->setTitle(QApplication::translate("MainWindow", "Estadistica", nullptr));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", nullptr));
        menuPersonal_Autorizado->setTitle(QApplication::translate("MainWindow", "Personal Autorizado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
