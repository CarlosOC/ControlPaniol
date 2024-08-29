#include "qdialog_buscarproducto.h"
#include "ui_qdialog_buscarproducto.h"

qdialog_buscarproducto::qdialog_buscarproducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qdialog_buscarproducto)
{
 ui->setupUi(this);
 setWindowFlag(Qt::WindowContextHelpButtonHint,false);
 setWindowTitle("Guillermito System - Buscar Producto");
 ui->groupBox_resultado->setTitle("Resutado:");
 ui->groupBox_resultado->setDisabled(1);
}

qdialog_buscarproducto::~qdialog_buscarproducto()
{
    delete ui;
}

void qdialog_buscarproducto::on_pushButton_buscar_clicked()
{
 QString producto,SAP,CodigoBarra;

 int item;
 producto="";
 SAP="";
 CodigoBarra="";

 if(ui->lineEdit_sap_busqueda->text()!="")
 {
  SAP=ui->lineEdit_sap_busqueda->text();
  model.setQuery("SELECT * FROM productos WHERE Codigo_SAP ='"+SAP+"'");
  item=0;
  while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
  {
   productobuscar.SAP=model.record(item).value(Codigo_SAP).toString();
   productobuscar.Codigo_Barra=model.record(item).value(Codigo_Barra).toString();
   productobuscar.Producto=model.record(item).value(Producto).toString();
   productobuscar.Stock=model.record(item).value(Stock).toString();
   productobuscar.Descripcion=model.record(item).value(Descripcion).toString();
   item++;
  }
 }
 if(ui->lineEdit_codigodebarra->text()!="")
 {
  CodigoBarra=ui->lineEdit_codigodebarra->text();
  model.setQuery("SELECT * FROM productos WHERE Codigo_Barra ='"+CodigoBarra+"'");
  item=0;
  while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
  {
   productobuscar.SAP=model.record(item).value(Codigo_SAP).toString();
   productobuscar.Codigo_Barra=model.record(item).value(Codigo_Barra).toString();
   productobuscar.Producto=model.record(item).value(Producto).toString();
   productobuscar.Stock=model.record(item).value(Stock).toString();
   productobuscar.Descripcion=model.record(item).value(Descripcion).toString();
   item++;
  }
 }
 if(ui->lineEdit_producto_busqueda->text()!="")
 {
  producto=ui->lineEdit_producto_busqueda->text();
  model.setQuery("SELECT * FROM productos WHERE Producto ='"+producto+"'");
  item=0;
  while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
  {
   productobuscar.SAP=model.record(item).value(Codigo_SAP).toString();
   productobuscar.Codigo_Barra=model.record(item).value(Codigo_Barra).toString();
   productobuscar.Producto=model.record(item).value(Producto).toString();
   productobuscar.Marca=model.record(item).value(Marca).toString();
   productobuscar.Stock=model.record(item).value(Stock).toString();
   productobuscar.StockMinimo=model.record(item).value(StockMinimo).toString();
   productobuscar.Ubicacion=model.record(item).value(Ubicacion).toString();
   productobuscar.ProductoSHE=model.record(item).value(ProductoSHE).toString();
   productobuscar.Descripcion=model.record(item).value(Descripcion).toString();
   item++;
  }
 }
 ui->lineEdit_codigosap_resultado->setText(productobuscar.SAP);
 ui->lineEdit_codigobarra_resultado->setText(productobuscar.Codigo_Barra);
 ui->lineEdit_producto_resultado->setText(productobuscar.Producto);
 ui->lineEdit_marca_resultado->setText(productobuscar.Marca);
 ui->spinBox_stock_resultado->setValue(productobuscar.Stock.toInt());
 ui->spinBox_stockminimo_resultado->setValue(productobuscar.StockMinimo.toInt());
 ui->lineEdit_ubicacion_resultado->setText(productobuscar.Ubicacion);
 ui->textEdit_descripcion_resultado->setText(productobuscar.Descripcion);
 if(productobuscar.ProductoSHE =="V")
 {
  ui->radioButton_si_resultado->setChecked(1);
  ui->radioButton_no_resultado->setChecked(0);
 }
 else if(productobuscar.ProductoSHE =="F")
 {
  ui->radioButton_si_resultado->setChecked(0);
  ui->radioButton_no_resultado->setChecked(1);
 }

}

void qdialog_buscarproducto::on_pushButton_modificar_clicked()
{
  if(ui->lineEdit_producto_resultado->text() !="")
  {
  ui->groupBox_resultado->setTitle("Producto: "+productobuscar.Producto+"");
  ui->groupBox_resultado->setDisabled(0);
  }
}

void qdialog_buscarproducto::on_pushButton_aceptarmodificacion_clicked()
{

 productomodificar.SAP=ui->lineEdit_codigosap_resultado->text();
 productomodificar.Codigo_Barra=ui->lineEdit_codigobarra_resultado->text();
 productomodificar.Producto=ui->lineEdit_producto_resultado->text();
 productomodificar.Marca=ui->lineEdit_marca_resultado->text();
 productomodificar.Stock=ui->spinBox_stock_resultado->text();
 productomodificar.StockMinimo=ui->spinBox_stockminimo_resultado->text();
 productomodificar.Ubicacion=ui->lineEdit_ubicacion_resultado->text();
 productomodificar.Descripcion=ui->textEdit_descripcion_resultado->toPlainText();
 if(ui->radioButton_si_resultado->isChecked()) productomodificar.ProductoSHE="V";
  else if(ui->radioButton_no_resultado->isChecked())productomodificar.ProductoSHE="F";
 model.setQuery("UPDATE productos SET "
                 "Codigo_SAP     ='"+productomodificar.SAP+"',"
                 "Codigo_Barra   ='"+productomodificar.Codigo_Barra+"',"
                 "Producto       ='"+productomodificar.Producto+"',"
                 "Marca          ='"+productomodificar.Marca+"',"
                 "Stock          ='"+productomodificar.Stock+"',"
                 "StockMinimo    ='"+productomodificar.StockMinimo+"',"
                 "Ubicacion      ='"+productomodificar.Ubicacion+"',"
                 "ProductoSHE    ='"+productomodificar.ProductoSHE+"',"
                 "Descripcion    ='"+productomodificar.Descripcion+"'"
                 "WHERE Producto ='"+productobuscar.Producto+"'");

 ui->groupBox_resultado->setTitle("Resultado: ");
 ui->groupBox_resultado->setDisabled(1);

 ui->lineEdit_codigosap_resultado->clear();
 ui->lineEdit_codigobarra_resultado->clear();
 ui->lineEdit_producto_resultado->clear();
 ui->spinBox_stock_resultado->clear();
 ui->textEdit_descripcion_resultado->clear();
 ui->lineEdit_sap_busqueda->clear();
 ui->lineEdit_producto_busqueda->clear();
 ui->lineEdit_sap_busqueda->clear();
 ui->radioButton_si_resultado->setChecked(0);
 ui->radioButton_no_resultado->setChecked(0);
}

void qdialog_buscarproducto::on_pushButton_cancelarmodificacion_clicked()
{
 ui->groupBox_resultado->setTitle("Resultado: ");
 ui->groupBox_resultado->setDisabled(1);

 ui->lineEdit_sap_busqueda->clear();
 ui->lineEdit_producto_busqueda->clear();
 ui->lineEdit_sap_busqueda->clear();

 ui->lineEdit_codigosap_resultado->clear();
 ui->lineEdit_codigobarra_resultado->clear();
 ui->lineEdit_producto_resultado->clear();
 ui->lineEdit_marca_resultado->clear();
 ui->spinBox_stock_resultado->clear();
 ui->spinBox_stockminimo_resultado->clear();
 ui->lineEdit_ubicacion_resultado->clear();
 ui->textEdit_descripcion_resultado->clear();
 ui->radioButton_si_resultado->setChecked(0);
 ui->radioButton_no_resultado->setChecked(0);
}
