#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include "QCompleter"
#include <QDebug>
#include <QMessageBox>
#include <QDate>
#include "QString"


//Base de Datos Variable Global

//
#include "qdialog_agregarvale.h"
#include "qdialog_agregarproducto.h"
#include "qdialog_agregarusuarios.h"
#include "qdialog_ingresousuario.h"
#include "qdialog_busquedavales.h"
#include "qdialog_buscarproducto.h"
#include "qdialog_buscarusuario.h"
#include "qdialogverlistaproducto.h"
#include "qdialogverlistavales.h"
#include "qdialog_agregarautorizados.h"
#include "qdialog_buscarautorizados.h"
#include "qdialog_verlistaautorizados.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Completar_lineEdits_Productos();

private slots:
        void crearBasedeDatos();
        void CargarTabla();
        void InsertarTablaVale ();
        void InsertarTablaProductos ();
        void InsertarTablaUsuarios ();
        void ActualizarStock ();
        void on_actionAgregar_Vale_triggered();
        void on_actionBuscar_Vale_triggered();
        void on_actionSobre_Guillermito_System_triggered();

        void on_actionAgregar_Producto_triggered();

        void on_actionCrear_Usuario_triggered();



       void on_actionBuscar_Producto_triggered();

       void on_actionLista_de_Vales_triggered();

       void on_actionLista_de_Productos_triggered();

       void on_actionAgregar_Personal_Autorizado_triggered();

       void on_actionBuscar_Personal_Autorizado_triggered();

       void on_actionVer_Lista_del_Personal_Autorizado_triggered();
       void UsuariosPrincipales();

private:
    Ui::MainWindow *ui;

   // QDate Fecha_Hoy;

    user Usuario;
    Vale ValeparaAgregar;
    Productos ProductoparaAgregar;
    Usuarios UsuarioparaAgregar;
    QSqlDatabase DataBase;
    QSqlQueryModel model,stock_actualizar;
//    enum Columna{id, NVale,Codigo_SAP,Codigo_Barra ,Cantidad,Producto,Marca,ProductoSHE,Fecha,Linea_Sector,Autorizado_Nombre,Autorizado_Apellido,Autorizado_Legajo,Autorizante_Nombre,Autorizante_Apellido,Autorizante_Legajo,Turno};
    enum Columna{id,Codigo_SAP,Codigo_Barra,Producto,Marca,Stock,StockMinimo,Ubicacion,ProductoSHE,Descripcion};
};

#endif // MAINWINDOW_H
