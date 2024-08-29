#include "qdialog_verlistaautorizados.h"
#include "ui_qdialog_verlistaautorizados.h"

QDialog_verlistaautorizados::QDialog_verlistaautorizados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialog_verlistaautorizados)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowFlag(Qt::WindowMaximizeButtonHint,true);
    setWindowTitle("Guillermito System - Lista de Autorizados Cargados");


    ui->tableWidget_listaautorizados->setRowCount(1);
    ui->tableWidget_listaautorizados->setColumnCount(4);
    ui->tableWidget_listaautorizados->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   //Codigo_SAP,Codigo_Barra,Producto,Stock,Descripcion
    ui->tableWidget_listaautorizados->setHorizontalHeaderLabels(QString("Nombre;"
                                                                "Apellido;"
                                                                "Legajo;"
                                                                "Sector;").split(";"));
    for (int c = 0; c < ui->tableWidget_listaautorizados->horizontalHeader()->count(); ++c)
    {
     ui->tableWidget_listaautorizados->horizontalHeader()->setSectionResizeMode(
            c, QHeaderView::Stretch);
    }

    CargarTabla();
}

QDialog_verlistaautorizados::~QDialog_verlistaautorizados()
{
    delete ui;
}
void QDialog_verlistaautorizados::CargarTabla()
{
 qDebug()<<"Carga de Valores en Tabla Inicial";
 int fila;

 QSqlQueryModel model;
 model.setQuery("SELECT * FROM Autorizados");
 fila=0;

 while(fila< model.rowCount())
  {
   ui->tableWidget_listaautorizados->insertRow(fila);  //,Codigo_Barra,Producto,Stock,Descripcion
   ui->tableWidget_listaautorizados->setItem(fila,0,new QTableWidgetItem(model.record(fila).value(Nombre).toString()));
   ui->tableWidget_listaautorizados->setItem(fila,1,new QTableWidgetItem(model.record(fila).value(Apellido).toString()));
   ui->tableWidget_listaautorizados->setItem(fila,2,new QTableWidgetItem(model.record(fila).value(Legajo).toByteArray().constData()));
   ui->tableWidget_listaautorizados->setItem(fila,3,new QTableWidgetItem(model.record(fila).value(Sector).toByteArray().constData()));
   fila++;
   }
 ui->tableWidget_listaautorizados->removeRow(fila) ;
}

void QDialog_verlistaautorizados::on_pushButton_Excel_clicked()
{


 QString nombreArchivo="Archivos_CSV//ListaAutorizados_"+QDate(QDate::currentDate()).toString("yyyyMMdd")+QTime(QTime::currentTime()).toString("hhmmss")+".csv";
 //QString nombreArchivo="Archivos CVS//";

 QFile archivo(nombreArchivo);
 int aux_file=0;
 archivo.open(QIODevice::Text | QIODevice::WriteOnly);
  if(!archivo.isOpen())
     {
      return ;
      }
 //Escribe el Archivo
 QTextStream txtstr (&archivo);
 txtstr << "Nombre";
 txtstr << ";";
 txtstr << "Apellido";
 txtstr << ";";
 txtstr << "Legajo";
 txtstr << ";";
 txtstr << "Sector";
 txtstr << ";";
 txtstr << "\n";
 while(aux_file < ui->tableWidget_listaautorizados->rowCount())
 {
 txtstr << ui->tableWidget_listaautorizados->item(aux_file,0)->text();
 txtstr << ";";
 txtstr << ui->tableWidget_listaautorizados->item(aux_file,1)->text();
 txtstr << ";";
 txtstr << ui->tableWidget_listaautorizados->item(aux_file,2)->text();
 txtstr << ";";
 txtstr << ui->tableWidget_listaautorizados->item(aux_file,3)->text();
 txtstr << ";";
 txtstr << "\n";
 aux_file++;
 }
  archivo.flush();
  archivo.close();

}
