#include "qdialogverlistaproducto.h"
#include "ui_qdialogverlistaproducto.h"

QDialogVerlistaProducto::QDialogVerlistaProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QDialogVerlistaProducto)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowFlag(Qt::WindowMaximizeButtonHint,true);
    setWindowTitle("Guillermito System - Lista de Producto Cargados");
    ui->tableWidget_listaproducto->setRowCount(1);
    ui->tableWidget_listaproducto->setColumnCount(9);
    ui->tableWidget_listaproducto->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   //Codigo_SAP,Codigo_Barra,Producto,Stock,Descripcion
    ui->tableWidget_listaproducto->setHorizontalHeaderLabels(QString("Codigo SAP;"
                                                                "Codigo de Barra;"
                                                                "Producto;"
                                                                "Marca;"
                                                                "Stock;"
                                                                "Stock Critico;"
                                                                "Ubicacion;"
                                                                "Producto SHE;"
                                                                "Descripcion;").split(";"));
    for (int c = 0; c < ui->tableWidget_listaproducto->horizontalHeader()->count(); ++c)
    {
     ui->tableWidget_listaproducto->horizontalHeader()->setSectionResizeMode(
            c, QHeaderView::Stretch);
    }

    CargarTabla();
}

QDialogVerlistaProducto::~QDialogVerlistaProducto()
{
    delete ui;
}


void QDialogVerlistaProducto::CargarTabla()
{
 qDebug()<<"Carga de Valores en Tabla Inicial";
 int fila;
 QSqlQueryModel model;
 model.setQuery("SELECT * FROM productos");
 fila=0;

   while(fila< model.rowCount())
    {
    ui->tableWidget_listaproducto->insertRow(fila);  //,Codigo_Barra,Producto,Stock,Descripcion
    ui->tableWidget_listaproducto->setItem(fila,0,new QTableWidgetItem(model.record(fila).value(Codigo_SAP).toString()));
    ui->tableWidget_listaproducto->setItem(fila,1,new QTableWidgetItem(model.record(fila).value(Codigo_Barra).toString()));
    ui->tableWidget_listaproducto->setItem(fila,2,new QTableWidgetItem(model.record(fila).value(Producto).toByteArray().constData()));
    ui->tableWidget_listaproducto->setItem(fila,3,new QTableWidgetItem(model.record(fila).value(Marca).toByteArray().constData()));
    ui->tableWidget_listaproducto->setItem(fila,4,new QTableWidgetItem(model.record(fila).value(Stock).toByteArray().constData()));
    ui->tableWidget_listaproducto->setItem(fila,5,new QTableWidgetItem(model.record(fila).value(StockMinimo).toString()));
    ui->tableWidget_listaproducto->setItem(fila,6,new QTableWidgetItem(model.record(fila).value(Ubicacion).toString()));
    ui->tableWidget_listaproducto->setItem(fila,7,new QTableWidgetItem(model.record(fila).value(ProductoSHE).toByteArray().constData()));
    ui->tableWidget_listaproducto->setItem(fila,8,new QTableWidgetItem(model.record(fila).value(Descripcion).toByteArray().constData()));
   // ui->tableWidget_listaproducto->setItem(fila,9,new QTableWidgetItem(model.record(fila).value(Descripcion).toByteArray().constData()));

    fila++;

   }
   ui->tableWidget_listaproducto->removeRow(fila) ;
}

void QDialogVerlistaProducto::on_pushButton_excel_clicked()
{

    QString nombreArchivo="Archivos_CSV//ListaProductos_"+QDate(QDate::currentDate()).toString("yyyyMMdd")+QTime(QTime::currentTime()).toString("hhmmss")+".csv";
    QFile archivo(nombreArchivo);
    int aux_file=0;
    archivo.open(QIODevice::Text | QIODevice::WriteOnly);
    if(!archivo.isOpen())
     {
      return ;
      }
    //Escribe el Archivo
    QTextStream txtstr (&archivo);
    txtstr << "Codigo SAP";
    txtstr << ";";
    txtstr << "Codigo de Barra";
    txtstr << ";";
    txtstr << "Producto";
    txtstr << ";";
    txtstr << "Marca";
    txtstr << ";";
    txtstr << "Stock";
    txtstr << ";";
    txtstr << "Stock Minimo";
    txtstr << ";";
    txtstr << "Ubicacion";
    txtstr << ";";
    txtstr << "Producto SHE";
    txtstr << ";";
    txtstr << "Descripcion";
    txtstr << ";";
    txtstr << "\n";
    while(aux_file < ui->tableWidget_listaproducto->rowCount())
    {
    txtstr << ui->tableWidget_listaproducto->item(aux_file,0)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,1)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,2)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,3)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,4)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,5)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,6)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,7)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listaproducto->item(aux_file,8)->text();
    txtstr << ";";
    txtstr << "\n";
    aux_file++;
    }
    archivo.flush();
    archivo.close();

}
