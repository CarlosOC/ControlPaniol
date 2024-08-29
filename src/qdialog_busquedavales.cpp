#include "qdialog_busquedavales.h"
#include "ui_qdialog_busquedavales.h"

QDialog_BusquedaVales::QDialog_BusquedaVales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialog_BusquedaVales)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowTitle("Guillermito System - Buscar Vale");
    showMaximized();
 // Creacion de Tabla
    ui->tableWidget_ResultadoBusqueda->setRowCount(1);
    ui->tableWidget_ResultadoBusqueda->setColumnCount(13);
    ui->tableWidget_ResultadoBusqueda->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget_ResultadoBusqueda->setHorizontalHeaderLabels(QString("Numero de Vale;"
                                                                         "Codigo SAP;"
                                                                         "Codigo de Barra;"
                                                                         "Cantidad;"
                                                                         "Producto;"
                                                                         "Marca;"
                                                                         "Producto SHE;"
                                                                         "Fecha;"
                                                                         "Linea/Sector;"
                                                                         "Nombre;"
                                                                         "Apellido;"
                                                                         "Turno;"
                                                                         "Legajo;").split(";"));
  //Carga de Items en el ComboBox de Filtros
  ui->comboBox_busqueda->addItems(QString("Numero de Vale;"
                                          "Codigo SAP;"
                                          "Codigo de Barra;"
                                          "Cantidad;"
                                          "Producto;"
                                          "Marca;"
                                          "Producto SHE;"
                                          "Fecha;"
                                          "Linea/Sector;"
                                          "Nombre/Apellido;"
                                          "Legajo;"
                                          "Turno;").split(";"));

  //Abrir Tabla y que abarque todo el tamaño
  for (int c = 0; c < ui->tableWidget_ResultadoBusqueda->horizontalHeader()->count(); ++c)
  {
      ui->tableWidget_ResultadoBusqueda->horizontalHeader()->setSectionResizeMode(
          c, QHeaderView::Stretch);
  }
}

QDialog_BusquedaVales::~QDialog_BusquedaVales()
{
    delete ui;
}
void QDialog_BusquedaVales::ActulizarTabla()
{
    qDebug()<<"Carga de Valores en Tabla Inicial";
    int fila,item;
    QDate Fecha_desde, Fecha_hasta,Fecha_vale;
  //  QSqlQueryModel model;
    model.setQuery("SELECT * FROM vales");
    fila=0;
    item=0;
    ui->tableWidget_ResultadoBusqueda->setRowCount(1);
    ui->tableWidget_ResultadoBusqueda->clearContents();
    while(item< model.rowCount()) //Recorre Todos los Item de la Base de Datos
    {
      switch (Busqueda_index)
      {
      case 0:
          if (model.record(item).value(NVale).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }

          break;
      case 1:
          if (model.record(item).value(Codigo_SAP).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }

          break;
      case 2:
          if (model.record(item).value(Codigo_Barra).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;
      case 3:

          if (model.record(item).value(Cantidad).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;
      case 4:

          if (model.record(item).value(Producto).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;
      case 5:
          if (model.record(item).value(Marca).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;
      case 6:

          if (model.record(item).value(ProductoSHE).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;

      case 7: // Filtro por Fecha
             Fecha_desde=QDate::fromString(Busqueda_arg_01,"dd/MM/yyyy");
             Fecha_hasta=QDate::fromString(Busqueda_arg_02,"dd/MM/yyyy");
             Fecha_vale=QDate::fromString(model.record(item).value(Fecha).toString(),"dd/MM/yyyy");
             qDebug()<<"Vale:"<<Fecha_vale<<"Desde"<<Fecha_desde<<"hasta"<<Fecha_hasta;

             if(Busqueda_arg_01!="//" && Busqueda_arg_02=="//")
             {
              if (Fecha_vale >= Fecha_desde)
                {
                 CargaTabla(fila,item);
                 fila++;
                 }
              }

             if(Busqueda_arg_01!="//" && Busqueda_arg_02!="//")
             {
              if (Fecha_vale >= Fecha_desde && Fecha_vale <= Fecha_hasta)
                 {
                   CargaTabla(fila,item);
                   fila++;
                  }
             }

             if(Busqueda_arg_01=="//" && Busqueda_arg_02!="//")
             {
              if (Fecha_vale <= Fecha_hasta)
                 {
                   CargaTabla(fila,item);
                   fila++;
                  }
             }

             break;
      case 8:

          if (model.record(item).value(Linea_Sector).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;
      case 9: // Filtro Nombre y Apellido
             if (Busqueda_arg_01!="" && Busqueda_arg_02=="") //Filtro por Nombre
             {
              if (model.record(item).value(Autorizado_Nombre).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
                {
                 CargaTabla(fila,item);
                 fila++;
                }
              }
             if (Busqueda_arg_01!="" && Busqueda_arg_02!="") //Filtro por Nombre y Apellido
              {
               if (model.record(item).value(Autorizado_Nombre).toString()==Busqueda_arg_01 && model.record(item).value(Autorizado_Apellido).toString()==Busqueda_arg_02 ) // Compara con el texto en el line_busqueda_01
                 {
                  CargaTabla(fila,item);
                  fila++;
                 }
               }
             if (Busqueda_arg_01=="" && Busqueda_arg_02!="") //Filtro por Apellido
               {
                if (model.record(item).value(Autorizado_Apellido).toString()==Busqueda_arg_02) // Compara con el texto en el line_busqueda_01
                  {
                   CargaTabla(fila,item);
                   fila++;
                  }
              }
              break;
      case 10:

          if (model.record(item).value(Autorizado_Legajo).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;
      case 11:
          if (model.record(item).value(Turno).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
             {
              CargaTabla(fila,item);
              fila++;
              }
           break;

      default:
              if (model.record(item).value(Busqueda_index).toString()==Busqueda_arg_01) // Compara con el texto en el line_busqueda_01
                 {
                  CargaTabla(fila,item);
                  fila++;
                  }
              break;

      }

    item++;
    ui->tableWidget_ResultadoBusqueda->removeRow((fila)); //Elimina una fila de mas que se genera
    }

 }
void QDialog_BusquedaVales::CargaTabla(int fila, int item)
{
 ui->tableWidget_ResultadoBusqueda->insertRow(fila);
 ui->tableWidget_ResultadoBusqueda->setItem(fila,0,new QTableWidgetItem(model.record(item).value(NVale).toString()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,1,new QTableWidgetItem(model.record(item).value(Codigo_SAP).toString()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,2,new QTableWidgetItem(model.record(item).value(Codigo_Barra).toString()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,3,new QTableWidgetItem(model.record(item).value(Cantidad).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,4,new QTableWidgetItem(model.record(item).value(Producto).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,5,new QTableWidgetItem(model.record(item).value(Marca).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,6,new QTableWidgetItem(model.record(item).value(ProductoSHE).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,7,new QTableWidgetItem(model.record(item).value(Fecha).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,8,new QTableWidgetItem(model.record(item).value(Linea_Sector).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,9,new QTableWidgetItem(model.record(item).value(Autorizado_Nombre).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,10,new QTableWidgetItem(model.record(item).value(Autorizado_Apellido).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,11,new QTableWidgetItem(model.record(item).value(Autorizado_Legajo).toByteArray().constData()));
 ui->tableWidget_ResultadoBusqueda->setItem(fila,12,new QTableWidgetItem(model.record(item).value(Turno).toByteArray().constData()));
}
void QDialog_BusquedaVales::on_lineEdit_busqueda_01_textChanged(const QString &arg1)
{
 qDebug()<< "LineEdit 1:";
    Busqueda_arg_01 = arg1;
    Busqueda_arg_02 = ui->lineEdit_busqueda_02->text();
    qDebug()<<"arg1"<<Busqueda_arg_01;
    qDebug()<<"arg2"<<Busqueda_arg_02;
    qDebug()<< "Combox:"<<ui->comboBox_busqueda->currentIndex();

    ActulizarTabla();

}
void QDialog_BusquedaVales::on_comboBox_busqueda_currentIndexChanged(int index_aux)
{
 ui->label_busqueda_01->setText("");
 ui->label_busqueda_02->setText("");
 Busqueda_index=filtros_busqueda();
 if(Busqueda_index==-1)Busqueda_index=11;
 /*
  *Idex 0: "Numero de Vale;"
 Idex 1:"Codigo SAP;"
 Idex 2:"Codigo de Barra;"
 Idex 3:"Cantidad;"
 Idex 4:"Producto;"
 Idex 5:"Marca;"
 Idex 6:"Producto SHE;"
 Idex 7:"Fecha;"
 Idex 8:"Linea/Sector;"
 Idex 9:"Nombre/Apellido;"
 Idex 10:"Legajo;"
 Idex 11:"Turno;"
 */
qDebug()<< "Index:"<<Busqueda_index;
}
int QDialog_BusquedaVales::filtros_busqueda()
{
 int index;
 QDate Fecha_Actual;
 Fecha_Actual=QDate::currentDate();
 index=ui->comboBox_busqueda->currentIndex();
 ui->label_busqueda_01->clear();
 ui->label_busqueda_02->clear();

 ui->lineEdit_busqueda_01->clear();
 ui->lineEdit_busqueda_02->clear();
 ui->lineEdit_busqueda_01->setInputMask("");
 ui->lineEdit_busqueda_02->setInputMask("");
/*
  *Idex 0: "Numero de Vale;"
 Idex 1:"Codigo SAP;"
 Idex 2:"Codigo de Barra;"
 Idex 3:"Cantidad;"
 Idex 4:"Producto;"
 Idex 5:"Marca;"
 Idex 6:"Producto SHE;"
 Idex 7:"Fecha;"
 Idex 8:"Linea/Sector;"
 Idex 9:"Nombre/Apellido;"
 Idex 10:"Legajo;"
 Idex 11:"Turno;"
 */

 if (index==0) // NVALE
  {
 //  ui->lineEdit_busqueda_01->setInputMask("999999999");
   ui->lineEdit_busqueda_01->setCursorPosition(0);
   ui->lineEdit_busqueda_02->hide();
   ui->label_busqueda_02->hide();
   ui->lineEdit_busqueda_02->setDisabled(1);
   ui->label_busqueda_01->setText("Nº de Vale:");
   return(0);
   }
 if (index==1) // SAP
   {
 //   ui->lineEdit_busqueda_01->setInputMask("999999999");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->lineEdit_busqueda_02->setDisabled(1);
    ui->label_busqueda_01->setText("Codigo SAP:");
    return(1);
   }

 if (index==2) // SAP
   {
 //   ui->lineEdit_busqueda_01->setInputMask("999999999");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->lineEdit_busqueda_02->setDisabled(1);
    ui->label_busqueda_01->setText("Codigo de Barra:");
    return(2);
   }
 if (index==3) // Cantidad
   {
 //   ui->lineEdit_busqueda_01->setInputMask("999999999");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->label_busqueda_01->setText("Cantidad:");
    ui->lineEdit_busqueda_02->setDisabled(1);
    return(3);
   }
 if (index==4) // Material
   {
  //  ui->lineEdit_busqueda_01->setInputMask("> AAAAAAAAAAAAAAAA");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->label_busqueda_01->setText("Producto:");
    ui->lineEdit_busqueda_02->setDisabled(1);
    return(4);
   }
 if (index==5) // Material
   {
  //  ui->lineEdit_busqueda_01->setInputMask("> AAAAAAAAAAAAAAAA");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->label_busqueda_01->setText("Marca:");
    ui->lineEdit_busqueda_02->setDisabled(1);
    return(5);
   }

 if (index==6) // Material
   {
  //  ui->lineEdit_busqueda_01->setInputMask("> AAAAAAAAAAAAAAAA");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->label_busqueda_01->setText("Producto SHE:");
    ui->lineEdit_busqueda_02->setDisabled(1);
    return(6);
   }
 if (index==7) // Fecha
   {
   ui->lineEdit_busqueda_01->setInputMask("99/99/9999");
   ui->lineEdit_busqueda_01->setCursorPosition(0);
   ui->lineEdit_busqueda_02->setInputMask("99/99/9999");
   ui->lineEdit_busqueda_02->setCursorPosition(0);
   ui->lineEdit_busqueda_02->setText(Fecha_Actual.toString("dd/MM/yyyy"));
   ui->lineEdit_busqueda_02->show();
   ui->label_busqueda_02->show();
   ui->label_busqueda_01->setText("Fecha desde:");
   ui->label_busqueda_02->setText("Fecha hasta:");
   ui->lineEdit_busqueda_02->setDisabled(0);

  return(7);
  }
 if (index==8) // Linea/Sector
   {
 //  ui->lineEdit_busqueda_01->setInputMask("> AAAAAAAAAAAAAAAA");
   ui->lineEdit_busqueda_01->setCursorPosition(0);
   ui->lineEdit_busqueda_02->hide();
   ui->label_busqueda_02->hide();
   ui->label_busqueda_01->setText("Linea/Sector:");
   ui->lineEdit_busqueda_02->setDisabled(1);
   return(8);
   }
 if (index==9) // Nombre y Apellido
   {
 //  ui->lineEdit_busqueda_01->setInputMask("> AAAAAAAAAAAAAAAA");
   ui->lineEdit_busqueda_01->setCursorPosition(0);
 //  ui->lineEdit_busqueda_02->setInputMask("> AAAAAAAAAAAAAAAA");
   ui->lineEdit_busqueda_02->setCursorPosition(0);
   ui->lineEdit_busqueda_02->show();
   ui->label_busqueda_02->show();
   ui->lineEdit_busqueda_02->setDisabled(0);
   ui->label_busqueda_01->setText("Nombre:");
   ui->label_busqueda_02->setText("Apellido:");
   return(9);

   }
 if (index==10) // Legajo
   {
 //   ui->lineEdit_busqueda_01->setInputMask("999999999");
    ui->lineEdit_busqueda_01->setCursorPosition(0);
    ui->lineEdit_busqueda_02->hide();
    ui->label_busqueda_02->hide();
    ui->label_busqueda_01->setText("Legajo:");
    ui->lineEdit_busqueda_02->setDisabled(1);
    return(10);
   }
 if (index==11) // Turno
   {
//   ui->lineEdit_busqueda_01->setInputMask("> AA");
   ui->lineEdit_busqueda_01->setCursorPosition(0);
   ui->lineEdit_busqueda_02->hide();
   ui->label_busqueda_02->hide();
   ui->lineEdit_busqueda_02->setDisabled(1);
   ui->label_busqueda_01->setText("Turno:");
   ui->lineEdit_busqueda_02->setDisabled(1);
   return(11);
   }
 return (-1);
}
void QDialog_BusquedaVales::on_lineEdit_busqueda_02_textChanged(const QString &arg1)
{
 qDebug()<< "LineEdit 2:";
 Busqueda_arg_01 = ui->lineEdit_busqueda_01->text();
 Busqueda_arg_02 = arg1;
// qDebug()<< "ARG 01:"<< Busqueda_arg_01 << "ARG 02:"<< Busqueda_arg_02;
 qDebug()<<"arg1"<<Busqueda_arg_01;
 qDebug()<<"arg2"<<Busqueda_arg_02;
 qDebug()<< "Combox:"<<ui->comboBox_busqueda->currentIndex();

 ActulizarTabla();
}
