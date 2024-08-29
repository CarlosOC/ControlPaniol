#include "qdialog_agregarvale.h"
#include "ui_qdialog_agregarvale.h"

QDialog_AgregarVale::QDialog_AgregarVale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialog_AgregarVale)
{
    Vale_item=0;
   item=0;
   Fecha_Hoy = QDate::currentDate();
   QTime Hora= QTime::currentTime();
   QString N_Vale;
   ui->setupUi(this);
   setWindowFlag(Qt::WindowContextHelpButtonHint,false);
   setWindowTitle("Guillermito System - Agregar Vale");

   N_Vale=QDate(Fecha_Hoy).toString("ddMMyyyy");
   N_Vale.append(QTime(Hora).toString("hhmmss"));

   // AutoCompleter
   CargaAutocompletar();
//SAP
   ListaSAP=new QStringListModel (this);
   ListaSAP->setStringList(lista_SAP);

   Auto_completer_SAP = new QCompleter(ListaSAP, this);
   Auto_completer_SAP->setModel(ListaSAP);
   Auto_completer_SAP->setCaseSensitivity(Qt::CaseInsensitive);
//Codigo Barra
   ListaCodigoBarra=new QStringListModel (this);
   ListaCodigoBarra->setStringList(lista_CodigoBarra);

   Auto_completer_codigobarra = new QCompleter(ListaCodigoBarra, this);
   Auto_completer_codigobarra->setModel(ListaCodigoBarra);
   Auto_completer_codigobarra->setCaseSensitivity(Qt::CaseInsensitive);
//Producto
   ListaProducto=new QStringListModel (this);
   ListaProducto->setStringList(lista_SAP);

   Auto_completer_producto = new QCompleter(ListaProducto, this);
   Auto_completer_producto->setModel(ListaProducto);
   Auto_completer_producto->setCaseSensitivity(Qt::CaseInsensitive);
//Marca
   ListaMarca=new QStringListModel (this);
   ListaMarca->setStringList(lista_marca);

   Auto_completer_marca = new QCompleter(ListaMarca, this);
   Auto_completer_marca->setModel(ListaMarca);
   Auto_completer_marca->setCaseSensitivity(Qt::CaseInsensitive);
//Autorizad Legajo
   ListaLegajoAutorizado=new QStringListModel (this);
   ListaLegajoAutorizado->setStringList(lista_LegajoAutorizado);

   Auto_completer_LegajoAutorizado = new QCompleter(ListaLegajoAutorizado, this);
   Auto_completer_LegajoAutorizado->setModel(ListaLegajoAutorizado);
   Auto_completer_LegajoAutorizado->setCaseSensitivity(Qt::CaseInsensitive);
//Autorizado Nombre
   ListaNombreAutorizado=new QStringListModel (this);
   ListaNombreAutorizado->setStringList(lista_NombreAutorizado);

   Auto_completer_NombreAutorizado = new QCompleter(ListaNombreAutorizado, this);
   Auto_completer_NombreAutorizado->setModel(ListaNombreAutorizado);
   Auto_completer_NombreAutorizado->setCaseSensitivity(Qt::CaseInsensitive);
//Autorizado Apellido
   ListaApellidoAutorizado=new QStringListModel (this);
   ListaApellidoAutorizado->setStringList(lista_NombreAutorizado);

   Auto_completer_ApellidoAutorizado = new QCompleter(ListaApellidoAutorizado, this);
   Auto_completer_ApellidoAutorizado->setModel(ListaApellidoAutorizado);
   Auto_completer_ApellidoAutorizado->setCaseSensitivity(Qt::CaseInsensitive);

   ui->dateEdit_fecha->setDate(Fecha_Hoy);
   ui->label_NVale->setText("");
   ui->label_NVale->setText(N_Vale);

   ui->lineEdit_sap->clear();
   //ui->lineEdit_cantidad->clear();
   ui->lineEdit_producto->clear();
   ui->lineEdit_linea_sector->clear();
   ui->lineEdit_autorizado_nombre->clear();
   ui->lineEdit_autorizado_apellido->clear();
   ui->lineEdit_autorizado_legajo->clear();
   ui->lineEdit_autorizante_nombre->clear();
   ui->lineEdit_autorizante_apellido->clear();
   ui->lineEdit_autorizante_legajo->clear();

   ui->lineEdit_codigodebarra->setCompleter(Auto_completer_codigobarra);
   ui->lineEdit_sap->setCompleter(Auto_completer_SAP);
   ui->lineEdit_producto->setCompleter(Auto_completer_producto);
   ui->lineEdit_marca->setCompleter(Auto_completer_marca);
   ui->lineEdit_autorizado_legajo->setCompleter(Auto_completer_LegajoAutorizado);
   ui->lineEdit_autorizado_nombre->setCompleter(Auto_completer_NombreAutorizado);
   ui->lineEdit_autorizado_apellido->setCompleter(Auto_completer_ApellidoAutorizado);
//Creacion de Tabla
   ui->tableWidget_items->setRowCount(1);
   ui->tableWidget_items->setColumnCount(7);
   ui->tableWidget_items->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   ui->tableWidget_items->setHorizontalHeaderLabels(QString("Codigo Barra;"
                                                            "Codigo SAP;"
                                                            "Cantidad;"
                                                            "Producto;"
                                                            "Marca;"
                                                            "Producto SHE;"
                                                            "Linea/Sector;").split(";"));
   for (int c = 0; c < ui->tableWidget_items->horizontalHeader()->count(); ++c)
   {
       ui->tableWidget_items->horizontalHeader()->setSectionResizeMode(
           c, QHeaderView::Stretch);
   }


    //Popup

 /*  QMessageBox::StandardButton reply;
    reply=QMessageBox:: question(this, tr("Guillermito System"),
                       tr("<b>Version: 1.0:</b><br>"),
                       QMessageBox::Yes|QMessageBox::No);
*/



}

QDialog_AgregarVale::~QDialog_AgregarVale()
{
    delete ui;
}


Vale QDialog_AgregarVale::NuevoVale_func() const
{
 return nuevo_vale;
}


void QDialog_AgregarVale::on_pushButton_AgregarVale_clicked()
{
  qDebug()<<"Agregar Vale";
  if ((ui->lineEdit_autorizado_nombre->text()) == " ")
        {
           QMessageBox::about(this, tr("Error: Faltan Datos"),
                                    tr("Completar el Campo <b>Nombre</b>" ));
           return ;
          }
    nuevo_vale.NVale= ui->label_NVale->text();
    nuevo_vale.SAP=ui->lineEdit_sap->text();
    nuevo_vale.CodigoBarra=ui->lineEdit_codigodebarra->text();
    nuevo_vale.Cantidad=ui->spinBox_cantidad->text();
    nuevo_vale.Producto=ui->lineEdit_producto->text();
    nuevo_vale.Marca=ui->lineEdit_marca->text();

    if(ui->radioButton_si->isChecked()) nuevo_vale.ProductoSHE="V";
     else if(ui->radioButton_no->isChecked())nuevo_vale.ProductoSHE="F";

    nuevo_vale.Fecha=ui->dateEdit_fecha->text();
    nuevo_vale.Linea_Sector=ui->lineEdit_linea_sector->text();
    nuevo_vale.Autorizado_Nombre=ui->lineEdit_autorizado_nombre->text();
    nuevo_vale.Autorizado_Apellido=ui->lineEdit_autorizado_apellido->text();
    nuevo_vale.Autorizado_Legajo=ui->lineEdit_autorizado_legajo->text();
    nuevo_vale.Autorizante_Nombre=ui->lineEdit_autorizante_nombre->text();
    nuevo_vale.Autorizante_Apellido=ui->lineEdit_autorizante_apellido->text();
    nuevo_vale.Autorizante_Legajo=ui->lineEdit_autorizante_legajo->text();
    nuevo_vale.Turno=ui->comboBox_turno->currentText();

    int aux=0;
    qDebug()<<"Aux:"<<aux<<"Vale Item:"<<Vale_item;
    //Agrega Todos los Productos Cargados en la Tabla Items a la Base de Datos
    while(aux<Vale_item)
    {
    qDebug()<<"SAP:"<<ui->tableWidget_items->item(aux,0)->text();
    qDebug()<<"Cantidad:"<<ui->tableWidget_items->item(aux,1)->text();
    qDebug()<<"Producto:"<<ui->tableWidget_items->item(aux,2)->text();
    qDebug()<<"Linea/Sector:"<<ui->tableWidget_items->item(aux,3)->text();

    nuevo_vale.CodigoBarra=ui->tableWidget_items->item(aux,0)->text();
    nuevo_vale.SAP=ui->tableWidget_items->item(aux,1)->text();
    nuevo_vale.Cantidad=ui->tableWidget_items->item(aux,2)->text();
    nuevo_vale.Producto=ui->tableWidget_items->item(aux,3)->text();
    nuevo_vale.Marca=ui->tableWidget_items->item(aux,4)->text();
    nuevo_vale.ProductoSHE=ui->tableWidget_items->item(aux,5)->text();
    nuevo_vale.Linea_Sector=ui->tableWidget_items->item(aux,6)->text();
    AgregarValeenBasedeDatos();
    ActualizarStock();
    aux++;
    }
    accept();
}

void QDialog_AgregarVale::on_pushButton_Cancelar_clicked()
{
 reject();
}

void QDialog_AgregarVale::CargaAutocompletar()
{
    qDebug()<<"Carga de Valores en Lista";
    int item;
    model.setQuery("SELECT * FROM productos");
    item=0;

     while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
    {
    lista_SAP           << model.record(item).value(Codigo_SAP).toString();
    lista_CodigoBarra   << model.record(item).value(Codigo_Barra).toString();
    lista_producto      << model.record(item).value(Producto).toString();
    lista_marca         << model.record(item).value(Marca).toString();
     item++;
     }
     qDebug()<<lista_producto;

     model.setQuery("SELECT * FROM Autorizados");
     item=0;

      while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
     {
     lista_NombreAutorizado         << model.record(item).value(Nombre_Autorizado).toString();
     lista_LegajoAutorizado         << model.record(item).value(Legajo_Autorizado).toString();
     lista_ApellidoAutorizado       << model.record(item).value(Apellido_Autorizado).toString();

      item++;
      }
}

void QDialog_AgregarVale::on_pushButton_agregarItem_clicked()
{

 if ((ui->lineEdit_producto->text()) == "")
   {
     QMessageBox::about(this, tr("Error: No se puede insertar producto"),
                              tr("Completar el Campo <b>Producto</b>" ));
      return ;
   }
 if ((ui->lineEdit_linea_sector->text()) == "")
   {
     QMessageBox::about(this, tr("Error: No se puede insertar producto"),
                              tr("Completar el Campo <b>Linea/Sector</b>" ));
      return ;
   }

 if ((ui->spinBox_cantidad->text()) == "0")
   {
     QMessageBox::about(this, tr("Error: No se puede insertar producto"),
                              tr("Completar el Campo <b>Cantidad</b>" ));
      return ;
   }

    ui->tableWidget_items->insertRow(Vale_item);
    ui->tableWidget_items->setItem(Vale_item,0,new QTableWidgetItem(ui->lineEdit_codigodebarra->text()));
    ui->tableWidget_items->setItem(Vale_item,1,new QTableWidgetItem(ui->lineEdit_sap->text()));
    ui->tableWidget_items->setItem(Vale_item,2,new QTableWidgetItem(ui->spinBox_cantidad->text()));
    ui->tableWidget_items->setItem(Vale_item,3,new QTableWidgetItem(ui->lineEdit_producto->text()));
    ui->tableWidget_items->setItem(Vale_item,4,new QTableWidgetItem(ui->lineEdit_marca->text()));
    if(ui->radioButton_si->isChecked()) ui->tableWidget_items->setItem(Vale_item,5,new QTableWidgetItem("V"));
     else if(ui->radioButton_no->isChecked()) ui->tableWidget_items->setItem(Vale_item,5,new QTableWidgetItem("F"));
    ui->tableWidget_items->setItem(Vale_item,6,new QTableWidgetItem(ui->lineEdit_linea_sector->text()));

    Vale_item++;

    ui->tableWidget_items->removeRow((Vale_item)); //Elimina una fila de mas que se genera
    qDebug()<<"Vale Item:"<<Vale_item;
    ui->lineEdit_sap->clear();
    ui->lineEdit_codigodebarra->clear();
    ui->lineEdit_marca->clear();
    ui->radioButton_no->setChecked(0);
    ui->radioButton_si->setChecked(0);
    ui->lineEdit_producto->clear();
    ui->spinBox_cantidad->setValue(0);

}

void QDialog_AgregarVale::AgregarValeenBasedeDatos()
{
 QSqlQuery insertar;
 if(nuevo_vale.Autorizado_Nombre!=" ")
  {
   insertar.prepare("INSERT INTO Vales(NVale,Codigo_SAP,Codigo_Barra ,Cantidad,Producto,Marca,ProductoSHE,Fecha,Linea_Sector,Autorizado_Nombre,Autorizado_Apellido,Autorizado_Legajo,Autorizante_Nombre,Autorizante_Apellido,Autorizante_Legajo,Turno) "" VALUES(:NVale, :Codigo_SAP, :Codigo_Barra, :Cantidad, :Producto,:Marca, :ProductoSHE,:Fecha, :Linea_Sector, :Autorizado_Nombre, :Autorizado_Apellido, :Autorizado_Legajo, :Autorizante_Nombre, :Autorizante_Apellido, :Autorizante_Legajo, :Turno)");

   insertar.bindValue(":NVale",nuevo_vale.NVale);
   qDebug()<<"NVale "<< nuevo_vale.NVale;

   insertar.bindValue(":Codigo_Barra",nuevo_vale.CodigoBarra);
   qDebug()<<"Codigo Barra "<< nuevo_vale.CodigoBarra;

   insertar.bindValue(":Codigo_SAP",nuevo_vale.SAP);
   qDebug()<<"Codigo SAP "<< nuevo_vale.SAP;

   insertar.bindValue(":Cantidad", nuevo_vale.Cantidad);
   qDebug()<<"Cantidad: "<< nuevo_vale.Cantidad;

   insertar.bindValue(":Producto", nuevo_vale.Producto);
   qDebug()<<"Producto: "<< nuevo_vale.Producto;

   insertar.bindValue(":Marca", nuevo_vale.Marca);
   qDebug()<<"Marca: "<< nuevo_vale.Marca;

   insertar.bindValue(":ProductoSHE", nuevo_vale.ProductoSHE);
   qDebug()<<"ProductoSHE: "<< nuevo_vale.ProductoSHE;

   insertar.bindValue(":Fecha",nuevo_vale.Fecha);
   qDebug()<<"Fecha: "<< nuevo_vale.Fecha;

   insertar.bindValue(":Linea_Sector", nuevo_vale.Linea_Sector);
   qDebug()<<"Linea_Sector: "<< nuevo_vale.Linea_Sector;

   insertar.bindValue(":Autorizado_Nombre", nuevo_vale.Autorizado_Nombre);
   qDebug()<<"Autorizado_Nombre: "<< nuevo_vale.Autorizado_Nombre;

   insertar.bindValue(":Autorizado_Apellido", nuevo_vale.Autorizado_Apellido);
   qDebug()<<"Autorizado_Apellido: "<< nuevo_vale.Autorizado_Apellido;

   insertar.bindValue(":Autorizado_Legajo", nuevo_vale.Autorizado_Legajo);
   qDebug()<<"Autorizado_Legajo: "<< nuevo_vale.Autorizado_Legajo;

   insertar.bindValue(":Autorizante_Nombre",nuevo_vale.Autorizante_Nombre);
   qDebug()<<"Autorizante_Nombre: "<< nuevo_vale.Autorizante_Nombre;

   insertar.bindValue(":Autorizante_Apellido", nuevo_vale.Autorizante_Apellido);
   qDebug()<<"Autorizante_Apellido: "<< nuevo_vale.Autorizante_Apellido;

   insertar.bindValue(":Autorizante_Legajo", nuevo_vale.Autorizante_Legajo);
   qDebug()<<"Autorizante_Legajo: "<< nuevo_vale.Autorizante_Legajo;

   insertar.bindValue(":Turno", nuevo_vale.Turno);
   qDebug()<<"Turno: "<< nuevo_vale.Turno;


   if (insertar.exec())
       {
           qDebug()<<"Se inserto el registro en la tabla vales";
       }else {
           qDebug()<<"No se pudo insertar el registro";
           qDebug()<<"Error! " << insertar.lastError();
              }
      } else qDebug()<<"No, Se agrego registro a Vales";

}

void QDialog_AgregarVale::ActualizarStock()
{
 QSqlQueryModel model,stock_actualizar;
 qDebug()<<"Actualizar STOCK de "<<nuevo_vale.Producto;
 int item,stock,aux_stock;
 model.setQuery("SELECT * FROM productos WHERE Codigo_SAP ='"+nuevo_vale.SAP+"'");
 item=0;
 aux_stock=0;
 while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
 {
  stock =model.record(item).value(5).toInt();
  qDebug()<<"Stock"<<stock;
  item++;
  }
  aux_stock=stock-nuevo_vale.Cantidad.toInt();
  if(aux_stock<0)aux_stock=0;
  stock_actualizar.setQuery("UPDATE productos SET "
                            "Stock    ='"+QString::number(aux_stock)+"'"
                            "WHERE Codigo_SAP  ='"+nuevo_vale.SAP+"'");

    qDebug()<<"Stock Actualizado a:"<<aux_stock;


}

void QDialog_AgregarVale::on_lineEdit_sap_textEdited(const QString &SAP)
{
 model.setQuery("SELECT * FROM Productos WHERE Codigo_SAP  ='"+SAP+"'");

  item=0;
  ui->lineEdit_producto->clear();
  ui->lineEdit_marca->clear();
  ui->lineEdit_codigodebarra->clear();
  while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
  {
  ui->lineEdit_producto->setText(model.record(item).value(Producto).toString());
  ui->lineEdit_marca->setText(model.record(item).value(Marca).toString());
  ui->lineEdit_codigodebarra->setText(model.record(item).value(Codigo_Barra).toString());
  if (model.record(item).value(ProductoSHE).toString()=="V")
  {
   ui->radioButton_si->setChecked(1);
   ui->radioButton_no->setChecked(0);
  }
    else if (model.record(item).value(ProductoSHE).toString()=="F")
  {
   ui->radioButton_si->setChecked(0);
   ui->radioButton_no->setChecked(1);
  }
  item++;
   }
}

void QDialog_AgregarVale::on_lineEdit_codigodebarra_textEdited(const QString &CodeBarra)
{
 model.setQuery("SELECT * FROM Productos WHERE Codigo_Barra  ='"+CodeBarra+"'");

item=0;
ui->lineEdit_producto->clear();
ui->lineEdit_marca->clear();
ui->lineEdit_sap->clear();
 while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
    {
    ui->lineEdit_producto->setText(model.record(item).value(Producto).toString());
    ui->lineEdit_marca->setText(model.record(item).value(Marca).toString());
    ui->lineEdit_sap->setText(model.record(item).value(Codigo_SAP).toString());
    if (model.record(item).value(ProductoSHE).toString()=="V")
    {
     ui->radioButton_si->setChecked(1);
     ui->radioButton_no->setChecked(0);
    }
      else if (model.record(item).value(ProductoSHE).toString()=="F")
    {
     ui->radioButton_si->setChecked(0);
     ui->radioButton_no->setChecked(1);
    }
    item++;
     }

}

void QDialog_AgregarVale::on_lineEdit_autorizado_legajo_textEdited(const QString &Leg)
{
 model.setQuery("SELECT * FROM Autorizados WHERE Legajo  ='"+Leg+"'");

   item=0;
   ui->lineEdit_autorizado_nombre->clear();
   ui->lineEdit_autorizado_apellido->clear();
   ui->lineEdit_linea_sector->clear();
   while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
    {
     ui->lineEdit_autorizado_nombre->setText(model.record(item).value(Nombre_Autorizado).toString());
     ui->lineEdit_autorizado_apellido->setText(model.record(item).value(Apellido_Autorizado).toString());
     //ui->lineEdit_linea_sector->setText(model.record(item).value(Sector_Autorizado).toString());
     item++;
     }
}

void QDialog_AgregarVale::CargaUsuario(QString Usuario_legajo)
{
 qDebug()<<"CargoLegajo:"<<Usuario_legajo;
    LegajoUsuario=Usuario_legajo;
    CargaAutorizante();
}

void QDialog_AgregarVale::CargaAutorizante()
{
 qDebug()<<"Autorizante:";
 if(LegajoUsuario!="Administrador")
 {
 ui->lineEdit_autorizante_legajo->setText(LegajoUsuario);
 model.setQuery("SELECT * FROM Usuarios WHERE Legajo ='"+LegajoUsuario+"'");
 ui->lineEdit_autorizante_nombre->setText(model.record(0).value(1).toString());
 ui->lineEdit_autorizante_apellido->setText(model.record(0).value(2).toString());
 }
}
