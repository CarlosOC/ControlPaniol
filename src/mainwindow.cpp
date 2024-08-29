#include "mainwindow.h"
#include "ui_mainwindow.h"
 // Actulizado MV
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  QString nombre;
  QString StatusBarString;
  ui->setupUi(this);

  setWindowTitle("Guillermito System Ver. 1.0");
  showMaximized();

  qDebug()<<"Se Crea Base de Datos Pañol SQlite...";
  // Nombre de la Base de Datos


   nombre.append("BaseDatos_panol.sqlite");

  //Instanciamos QSqlDatabase y le ponemos nombre a la base de datos
   DataBase = QSqlDatabase::addDatabase("QSQLITE");
   DataBase.setDatabaseName(nombre);

   //Abre la base de datos y muestra un aviso en caso de error
   if (DataBase.open()) qDebug()<<"Se ha conectado a la base de Datos";
     else
         {
         qDebug()<<"No se ha podio conectar a base de Datos";
         QMessageBox::critical(0, qApp->tr("Error Base de Datos"), qApp->tr("Ha sido imposible abrir la Base de Datos"),QMessageBox::Ok);
          }



   // Llamamos a la funcion para Crear Tablas en la Base de datos
    crearBasedeDatos();
    UsuariosPrincipales();
    // Cargamos Usuario a Ingresar
    qdialog_ingresousuario VentanaIngresoUsuario;
    int RespIngreso;

    do {
         RespIngreso=VentanaIngresoUsuario.exec();
         Usuario=VentanaIngresoUsuario.DatosUsuario();
        }while(RespIngreso==0 || Usuario.User_nombre==""||Usuario.User_legajo=="");

    qDebug()<<"resp:"<<RespIngreso;
    qDebug()<<"Nombre Usuario:"<<Usuario.User_nombre;
    qDebug()<<"Legajo Usuario:"<<Usuario.User_legajo;

    StatusBarString= "Usuario: ";
    StatusBarString.append(Usuario.User_nombre);
    StatusBarString.append(" ");
    StatusBarString.append(Usuario.User_apellido);
    StatusBarString.append(" Legajo: ");
    StatusBarString.append(Usuario.User_legajo);
    this->statusBar()->showMessage(StatusBarString);

    //Tabla de Productos con Stock Critico
   ui->tableWidget_UltimosVales->setRowCount(1);
   ui->tableWidget_UltimosVales->setColumnCount(7);
   ui->tableWidget_UltimosVales->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   ui->tableWidget_UltimosVales->setHorizontalHeaderLabels(QString("Codigo SAP;"
                                                                   "Codigo Barra;"
                                                                   "Ubicacion;"
                                                                   "Producto;"
                                                                   "Marca;"
                                                                   "Stock;"
                                                                   "Stock Minimo;").split(";"));


   CargarTabla();


}
void MainWindow::crearBasedeDatos()
{
  QString consulta;
  QSqlQuery crear;
   // Tabla Vales:
    consulta.append("CREATE TABLE IF NOT EXISTS Vales ("
                   "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "NVale                   VARCHAR(10000),"
                   "Codigo_SAP              VARCHAR(100),"
                   "Codigo_Barra            VARCHAR(100),"
                   "Cantidad                VARCHAR(1000),"
                   "Producto                VARCHAR(100),"
                   "Marca                   VARCHAR(100),"
                   "ProductoSHE             VARCHAR(100),"
                   "Fecha                   VARCHAR(100),"
                   "Linea_Sector            VARCHAR(100),"
                   "Autorizado_Nombre       VARCHAR(100),"
                   "Autorizado_Apellido     VARCHAR(100),"
                   "Autorizado_Legajo       VARCHAR(100),"
                   "Autorizante_Nombre      VARCHAR(100),"
                   "Autorizante_Apellido    VARCHAR(100),"
                   "Autorizante_Legajo      VARCHAR(100),"
                   "Turno                   VARCHAR(10)"
                   ");");

crear.prepare(consulta);
    if (crear.exec())qDebug()<<"Se Creo Tabla Vales Correctamente";
        else {
              qDebug()<<"No se Creo la Tabla Vales";
              qDebug()<<"Error: " << crear.lastError();
              }

// Tabla Productos:
    consulta.clear();
    consulta.append("CREATE TABLE IF NOT EXISTS Productos ("
                   "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "Codigo_SAP              VARCHAR(100),"
                   "Codigo_Barra            VARCHAR(100),"
                   "Producto                VARCHAR(100),"
                   "Marca                   VARCHAR(100),"
                   "Stock                   VARCHAR(10000),"
                   "StockMinimo             VARCHAR(10000),"
                   "Ubicacion               VARCHAR(100),"
                   "ProductoSHE             VARCHAR(1),"
                   "Descripcion             VARCHAR(500)"
                   ");");
    crear.prepare(consulta);
        if (crear.exec())qDebug()<<"Se Creo Tabla Productos Correctamente";
            else {
                  qDebug()<<"No se Creo la Tabla Productos";
                  qDebug()<<"Error: " << crear.lastError();
                  }

// Tabla Usuarios:
    consulta.clear();
    consulta.append("CREATE TABLE IF NOT EXISTS Usuarios ("
                   "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "Nombre                  VARCHAR(100),"
                   "Apellido                VARCHAR(100),"
                   "Legajo                  VARCHAR(100),"
                   "Pass                    VARCHAR(100),"
                   "Nivel                   VARCHAR(10)"
                   ");");
     crear.prepare(consulta);
        if (crear.exec())qDebug()<<"Se Creo Tabla Usuarios Correctamente";
            else {
                  qDebug()<<"No se Creo la Tabla Usuarios";
                  qDebug()<<"Error: " << crear.lastError();
                  }
// Tabla Personal Autorizado

   consulta.clear();
   consulta.append("CREATE TABLE IF NOT EXISTS Autorizados ("
                       "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                       "Nombre                  VARCHAR(100),"
                       "Apellido                VARCHAR(100),"
                       "Legajo                  VARCHAR(100),"
                       "Sector                  VARCHAR(1000)"
                       ");");
        crear.prepare(consulta);
            if (crear.exec())
            {

              qDebug()<<"Se Creo Tabla Usuarios Correctamente";
             }
                else {
                      qDebug()<<"No se Creo la Tabla Autorizados";
                      qDebug()<<"Error: " << crear.lastError();
                      }
}
void MainWindow::UsuariosPrincipales()
{
  model.setQuery("SELECT * FROM Usuarios WHERE Nombre = Administrador");
  if (model.rowCount()==0) qDebug()<<"No se encontro Administrador"<<model.rowCount();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CargarTabla()
{
 qDebug()<<"Carga de Valores en Tabla Inicial";
 int fila_tabla,item,aux_stock,aux_stockminimo,aux_row;
 QSqlQueryModel model;
 model.setQuery("SELECT * FROM Productos");
 fila_tabla=0;
 ui->tableWidget_UltimosVales->clearContents();
 item=0;

 //Resetea Toda la Tabla (Inicializa a Cero el numero de filas) Elimina BUG fila de mas
 for(aux_row=0;aux_row<ui->tableWidget_UltimosVales->rowCount();aux_row++)
 {
  ui->tableWidget_UltimosVales->removeRow(aux_row);
 }
 while(item < model.rowCount())
 {
 //qDebug()<<"STOCK: "<<model.record(item).value(Stock).toByteArray().constData() << model.record(item).value(StockMinimo).toByteArray().constData();
 qDebug()<<"Item:"<<item;
 qDebug()<<"Fila: "<< fila_tabla;
 aux_stock=model.record(item).value(Stock).toInt();
 aux_stockminimo=model.record(item).value(StockMinimo).toInt();
 qDebug()<<"STOCK: "<<aux_stock <<aux_stockminimo ;

 if(aux_stock <= aux_stockminimo)
 {
  ui->tableWidget_UltimosVales->insertRow(fila_tabla);
  ui->tableWidget_UltimosVales->setItem(fila_tabla,0,new QTableWidgetItem(model.record(item).value(Codigo_SAP).toString()));
  ui->tableWidget_UltimosVales->setItem(fila_tabla,1,new QTableWidgetItem(model.record(item).value(Codigo_Barra).toString()));
  ui->tableWidget_UltimosVales->setItem(fila_tabla,2,new QTableWidgetItem(model.record(item).value(Ubicacion).toByteArray().constData()));
  ui->tableWidget_UltimosVales->setItem(fila_tabla,3,new QTableWidgetItem(model.record(item).value(Producto).toByteArray().constData()));
  ui->tableWidget_UltimosVales->setItem(fila_tabla,4,new QTableWidgetItem(model.record(item).value(Marca).toByteArray().constData()));
  ui->tableWidget_UltimosVales->setItem(fila_tabla,5,new QTableWidgetItem(model.record(item).value(Stock).toByteArray().constData()));
  ui->tableWidget_UltimosVales->setItem(fila_tabla,6,new QTableWidgetItem(model.record(item).value(StockMinimo).toByteArray().constData()));
  fila_tabla++;
  }
 item++;
 }
ui->tableWidget_UltimosVales->removeRow(fila_tabla);

}

void MainWindow::InsertarTablaVale()
{/*
 QSqlQuery insertar;
 if(ValeparaAgregar.Autorizado_Nombre!=" ")
   {
    insertar.prepare("INSERT INTO Vales(NVale,Codigo_SAP,Codigo_Barra ,Cantidad,Producto,Marca,ProductoSHE,Fecha,Linea_Sector,Autorizado_Nombre,Autorizado_Apellido,Autorizado_Legajo,Autorizante_Nombre,Autorizante_Apellido,Autorizante_Legajo,Turno) "" VALUES(:NVale, :Codigo_SAP, :Codigo_Barra, :Cantidad, :Producto,:Marca, :ProductoSHE,:Fecha, :Linea_Sector, :Autorizado_Nombre, :Autorizado_Apellido, :Autorizado_Legajo, :Autorizante_Nombre, :Autorizante_Apellido, :Autorizante_Legajo, :Turno)");

    insertar.bindValue(":NVale",ValeparaAgregar.NVale);
    qDebug()<<"NVale "<< ValeparaAgregar.NVale;

    insertar.bindValue(":Codigo_Barra",ValeparaAgregar.CodigoBarra);
    qDebug()<<"Codigo Barra "<< ValeparaAgregar.CodigoBarra;

    insertar.bindValue(":Codigo_SAP",ValeparaAgregar.SAP);
    qDebug()<<"Codigo SAP "<< ValeparaAgregar.SAP;

    insertar.bindValue(":Cantidad", ValeparaAgregar.Cantidad);
    qDebug()<<"Cantidad: "<< ValeparaAgregar.Cantidad;

    insertar.bindValue(":Producto", ValeparaAgregar.Producto);
    qDebug()<<"Producto: "<< ValeparaAgregar.Producto;

    insertar.bindValue(":Marca", ValeparaAgregar.Marca);
    qDebug()<<"Marca: "<< ValeparaAgregar.Marca;

    insertar.bindValue(":ProductoSHE", ValeparaAgregar.ProductoSHE);
    qDebug()<<"ProductoSHE: "<< ValeparaAgregar.ProductoSHE;

    insertar.bindValue(":Fecha", ValeparaAgregar.Fecha);
    qDebug()<<"Fecha: "<< ValeparaAgregar.Fecha;

    insertar.bindValue(":Linea_Sector", ValeparaAgregar.Linea_Sector);
    qDebug()<<"Linea_Sector: "<< ValeparaAgregar.Linea_Sector;

    insertar.bindValue(":Autorizado_Nombre", ValeparaAgregar.Autorizado_Nombre);
    qDebug()<<"Autorizado_Nombre: "<< ValeparaAgregar.Autorizado_Nombre;

    insertar.bindValue(":Autorizado_Apellido", ValeparaAgregar.Autorizado_Apellido);
    qDebug()<<"Autorizado_Apellido: "<< ValeparaAgregar.Autorizado_Apellido;

    insertar.bindValue(":Autorizado_Legajo", ValeparaAgregar.Autorizado_Legajo);
    qDebug()<<"Autorizado_Legajo: "<< ValeparaAgregar.Autorizado_Legajo;

    insertar.bindValue(":Autorizante_Nombre", ValeparaAgregar.Autorizante_Nombre);
    qDebug()<<"Autorizante_Nombre: "<< ValeparaAgregar.Autorizante_Nombre;

    insertar.bindValue(":Autorizante_Apellido", ValeparaAgregar.Autorizante_Apellido);
    qDebug()<<"Autorizante_Apellido: "<< ValeparaAgregar.Autorizante_Apellido;

    insertar.bindValue(":Autorizante_Legajo", ValeparaAgregar.Autorizante_Legajo);
    qDebug()<<"Autorizante_Legajo: "<< ValeparaAgregar.Autorizante_Legajo;

    insertar.bindValue(":Turno", ValeparaAgregar.Turno);
    qDebug()<<"Turno: "<< ValeparaAgregar.Turno;

    if (insertar.exec())
    {
        qDebug()<<"Se inserto el registro en la tabla";
    }else {
        qDebug()<<"No se pudo insertar el registro";
        qDebug()<<"Error! " << insertar.lastError();
           }
   } else qDebug()<<"No, Se agrego registro a Vales";
*/
}

void MainWindow::InsertarTablaProductos()
{
 QSqlQuery insertar;
 if(ProductoparaAgregar.Producto!=" ")
   {
    insertar.prepare("INSERT INTO Productos(Codigo_SAP,Codigo_Barra,Producto,Marca,Stock,StockMinimo,Ubicacion,ProductoSHE,Descripcion) "" VALUES(:Codigo_SAP, :Codigo_Barra, :Producto, :Marca, :Stock, :StockMinimo, :Ubicacion,:ProductoSHE,:Descripcion)");

    insertar.bindValue(":Codigo_SAP",ProductoparaAgregar.SAP);
    qDebug()<<"Codigo SAP "<< ProductoparaAgregar.SAP;

    insertar.bindValue(":Codigo_Barra", ProductoparaAgregar.Codigo_Barra);
    qDebug()<<"Cantidad: "<< ProductoparaAgregar.Codigo_Barra;

    insertar.bindValue(":Producto", ProductoparaAgregar.Producto);
    qDebug()<<"Producto: "<< ProductoparaAgregar.Producto;

    insertar.bindValue(":Marca", ProductoparaAgregar.Marca);
    qDebug()<<"Marca: "<< ProductoparaAgregar.Marca;

    insertar.bindValue(":Stock", ProductoparaAgregar.Stock);
    qDebug()<<"Stock: "<< ProductoparaAgregar.Stock;

    insertar.bindValue(":StockMinimo", ProductoparaAgregar.StockMinimo);
    qDebug()<<"StockMinimo: "<< ProductoparaAgregar.StockMinimo;

    insertar.bindValue(":Ubicacion", ProductoparaAgregar.Ubicacion);
    qDebug()<<"Ubicacion: "<< ProductoparaAgregar.Ubicacion;


    insertar.bindValue(":ProductoSHE", ProductoparaAgregar.ProductoSHE);
    qDebug()<<"ProductoSHE: "<< ProductoparaAgregar.ProductoSHE;

    insertar.bindValue(":Descripcion", ProductoparaAgregar.Descripcion);
    qDebug()<<"Descripcion: "<< ProductoparaAgregar.Descripcion;

    if (insertar.exec())
    {
        qDebug()<<"Se inserto el registro en la tabla";
    }else {
        qDebug()<<"No se pudo insertar el registro";
        qDebug()<<"Error! " << insertar.lastError();
           }
   } else qDebug()<<"No, Se agrego registro a Vales";
}

void MainWindow::InsertarTablaUsuarios()
{
 QSqlQuery insertar;
 if(UsuarioparaAgregar.Nombre!=" ")
   {
    insertar.prepare("INSERT INTO Usuarios(Nombre,Apellido,Legajo,Pass,Nivel) "" VALUES(:Nombre, :Apellido, :Legajo, :Pass, :Nivel)");

    insertar.bindValue(":Nombre",UsuarioparaAgregar.Nombre);
    qDebug()<<"Nombre: "<< UsuarioparaAgregar.Nombre;

    insertar.bindValue(":Apellido", UsuarioparaAgregar.Apellido);
    qDebug()<<"Apellido: "<< UsuarioparaAgregar.Apellido;

    insertar.bindValue(":Legajo", UsuarioparaAgregar.Legajo);
    qDebug()<<"Legajo: "<<UsuarioparaAgregar.Legajo;

    insertar.bindValue(":Pass", UsuarioparaAgregar.Pass);
    qDebug()<<"Pass: "<< UsuarioparaAgregar.Pass;

    insertar.bindValue(":Nivel", UsuarioparaAgregar.Nivel);
    qDebug()<<"Nivel: "<< UsuarioparaAgregar.Nivel;

    if (insertar.exec())
    {
     qDebug()<<"Se inserto el registro en la tabla";
    }else {
        qDebug()<<"No se pudo insertar el registro";
        qDebug()<<"Error! " << insertar.lastError();
           }
   } else qDebug()<<"No, Se agrego registro a Vales";
}

void MainWindow::on_actionAgregar_Vale_triggered()
{
  int error;
  QDialog_AgregarVale VentanaAgregarVale (this);
  VentanaAgregarVale.CargaUsuario(Usuario.User_legajo);
  error=VentanaAgregarVale.exec();
  ValeparaAgregar=VentanaAgregarVale.NuevoVale_func();
  if(error!=1)qDebug()<<"Error al Abrir Ventana ""Agregar Vale"" ";
   else
     {
//      InsertarTablaVale ();
  //    ActualizarStock ();
      }
    VentanaAgregarVale.close();
    CargarTabla();
}

void MainWindow::ActualizarStock ()
{
 /*qDebug()<<"Actualizar STOCK de "<<ValeparaAgregar.Producto;
 int item,stock,aux_stock;
 model.setQuery("SELECT * FROM productos WHERE Producto ='"+ValeparaAgregar.Producto+"'");
 item=0;
 while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
  {
   stock =model.record(item).value(4).toInt();
   qDebug()<<"Stock"<<stock;
   item++;
  }
 aux_stock=stock-ValeparaAgregar.Cantidad.toInt();
 if(aux_stock<0)aux_stock=0;
 stock_actualizar.setQuery("UPDATE productos SET "
           "Stock    ='"+QString::number(aux_stock)+"'"
           "WHERE Producto  ='"+ValeparaAgregar.Producto+"'");

 qDebug()<<"Stock Actualizado a:"<<aux_stock;
*/
}

void MainWindow::on_actionBuscar_Vale_triggered()
{
 QDialog_BusquedaVales VentanaBuscarVale;
 VentanaBuscarVale.exec();
}

void MainWindow::on_actionSobre_Guillermito_System_triggered()
{
  QMessageBox::information(this, tr("Guillermito System"),
                           tr("<b>Version: 1.0:</b><br>"
                              "Sistema de Gestion para Pañol<br>"
                              "<b>Creado por</b>: Oviedo Codigoni Carlos Nicolas<br>"
                              "<b>Based on</b>: Qt Creator 4.9.2"));
    return ;
}

void MainWindow::on_actionAgregar_Producto_triggered()
{
    qdialog_agregarproducto VentanaAgregarProducto;
    int error;
    error=VentanaAgregarProducto.exec();
    qDebug()<<error;
    ProductoparaAgregar=VentanaAgregarProducto.NuevoProducto_func();

    if(error!=1)qDebug()<<"Error al Abrir Ventana ""Agregar Vale"" ";
     else
       {
        InsertarTablaProductos();
    }
    VentanaAgregarProducto.close();
}

void MainWindow::on_actionCrear_Usuario_triggered()
{
    qdialog_agregarusuarios VentanaAgregarUsuarios;
    int error;
    error=VentanaAgregarUsuarios.exec();
    qDebug()<<error;
    UsuarioparaAgregar=VentanaAgregarUsuarios.NuevoUsuario_func();

    if(error!=1)qDebug()<<"Error al Abrir Ventana ""Agregar Vale"" ";
     else
       {
        InsertarTablaUsuarios();
       }
    VentanaAgregarUsuarios.close();
}

void MainWindow::on_actionBuscar_Producto_triggered()
{
 qdialog_buscarproducto VentanaBuscarProducto;
    int error;
    error=VentanaBuscarProducto.exec();
    qDebug()<<error;
    CargarTabla();

}

void MainWindow::on_actionLista_de_Vales_triggered()
{
  QdialogVerListaVales VentanaVerListaVales;
  VentanaVerListaVales.exec();
}

void MainWindow::on_actionLista_de_Productos_triggered()
{
 QDialogVerlistaProducto VentanaVerListaProductos;
 VentanaVerListaProductos.exec();

}

void MainWindow::on_actionAgregar_Personal_Autorizado_triggered()
{
 qdialog_agregarautorizados VentanaAgregarAutorizados;
 VentanaAgregarAutorizados.exec();
}

void MainWindow::on_actionBuscar_Personal_Autorizado_triggered()
{
  qdialog_buscarautorizados VentanaBuscarAutorizados;
  VentanaBuscarAutorizados.exec();
}

void MainWindow::on_actionVer_Lista_del_Personal_Autorizado_triggered()
{
    QDialog_verlistaautorizados VentanaVerListaAutorizado;
    VentanaVerListaAutorizado.exec();
}
