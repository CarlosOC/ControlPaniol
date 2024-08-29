#include "qdialog_buscarautorizados.h"
#include "ui_qdialog_buscarautorizados.h"

qdialog_buscarautorizados::qdialog_buscarautorizados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qdialog_buscarautorizados)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowTitle("Guillermito System - Buscar Personal Autorizado");
    ui->groupBox_resultado->setTitle("Resutado:");
    ui->groupBox_resultado->setDisabled(1);
}

qdialog_buscarautorizados::~qdialog_buscarautorizados()
{
    delete ui;
}

void qdialog_buscarautorizados::on_pushButton_buscar_clicked()
{
  QString nombre,apellido,legajo;

  int item;
  nombre="";
  apellido="";
  legajo="";

  if(ui->lineEdit_nombre_busqueda->text()!="")
    {
     nombre=ui->lineEdit_nombre_busqueda->text();
     model.setQuery("SELECT * FROM Autorizados WHERE Nombre ='"+nombre+"'");
     item=0;
     while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
     {
      Autorizadoabuscar.Nombre=model.record(item).value(Nombre).toString();
      Autorizadoabuscar.Apellido=model.record(item).value(Apellido).toString();
      Autorizadoabuscar.Legajo=model.record(item).value(Legajo).toString();
      Autorizadoabuscar.Sector=model.record(item).value(Sector).toString();
      item++;
     }
    }
  if(ui->lineEdit_apellido_busqueda->text()!="")
    {
     apellido=ui->lineEdit_apellido_busqueda->text();
     model.setQuery("SELECT * FROM Autorizados WHERE Apellido ='"+apellido+"'");
     item=0;
     while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
     {
      Autorizadoabuscar.Nombre=model.record(item).value(Nombre).toString();
      Autorizadoabuscar.Apellido=model.record(item).value(Apellido).toString();
      Autorizadoabuscar.Legajo=model.record(item).value(Legajo).toString();
      Autorizadoabuscar.Sector=model.record(item).value(Sector).toString();
      item++;
     }
    }
  if(ui->lineEdit_legajo_busqueda->text()!="")
    {
     legajo=ui->lineEdit_legajo_busqueda->text();
     model.setQuery("SELECT * FROM Autorizados WHERE Legajo ='"+legajo+"'");
     item=0;
     while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
     {
      Autorizadoabuscar.Nombre=model.record(item).value(Nombre).toString();
      Autorizadoabuscar.Apellido=model.record(item).value(Apellido).toString();
      Autorizadoabuscar.Legajo=model.record(item).value(Legajo).toString();
      Autorizadoabuscar.Sector=model.record(item).value(Sector).toString();
      item++;
     }
    }

  ui->lineEdit_nombre_resultado->setText(Autorizadoabuscar.Nombre);
  ui->lineEdit_apellido_resultado->setText(Autorizadoabuscar.Apellido);
  ui->lineEdit_legajo_resultado->setText(Autorizadoabuscar.Legajo);
  ui->lineEdit_sector_resultado->setText(Autorizadoabuscar.Sector);


}

void qdialog_buscarautorizados::on_pushButton_modificar_clicked()
{
 if(Autorizadoabuscar.Nombre !="")
  {
  ui->groupBox_resultado->setTitle("Autorizado: "+Autorizadoabuscar.Nombre+"");
  ui->groupBox_resultado->setDisabled(0);
  }
}

void qdialog_buscarautorizados::on_pushButton_aceptarmodificacion_clicked()
{
  Autorizadomodificar.Nombre=ui->lineEdit_nombre_resultado->text();
  Autorizadomodificar.Apellido=ui->lineEdit_apellido_resultado->text();
  Autorizadomodificar.Legajo=ui->lineEdit_legajo_resultado->text();
  Autorizadomodificar.Sector=ui->lineEdit_sector_resultado->text();

  model.setQuery("UPDATE Autorizados SET "
                    "Nombre          ='"+Autorizadomodificar.Nombre+"',"
                    "Apellido        ='"+Autorizadomodificar.Apellido+"',"
                    "Legajo          ='"+Autorizadomodificar.Legajo+"',"
                    "Sector          ='"+Autorizadomodificar.Sector+"'"
                    "WHERE Legajo    ='"+Autorizadomodificar.Legajo+"'");

    ui->groupBox_resultado->setTitle("Resultado: ");
    ui->groupBox_resultado->setDisabled(1);

    ui->lineEdit_nombre_resultado->clear();
    ui->lineEdit_apellido_resultado->clear();
    ui->lineEdit_legajo_resultado->clear();
    ui->lineEdit_sector_resultado->clear();

    ui->lineEdit_nombre_busqueda->clear();
    ui->lineEdit_apellido_busqueda->clear();
    ui->lineEdit_legajo_busqueda->clear();

}

void qdialog_buscarautorizados::on_pushButton_cancelarmodificacion_clicked()
{
    ui->groupBox_resultado->setTitle("Resultado: ");
    ui->groupBox_resultado->setDisabled(1);

    ui->lineEdit_nombre_resultado->clear();
    ui->lineEdit_apellido_resultado->clear();
    ui->lineEdit_legajo_resultado->clear();
    ui->lineEdit_sector_resultado->clear();

    ui->lineEdit_nombre_busqueda->clear();
    ui->lineEdit_apellido_busqueda->clear();
    ui->lineEdit_legajo_busqueda->clear();

}
