#include "qdialogverlistavales.h"
#include "ui_qdialogverlistavales.h"

QdialogVerListaVales::QdialogVerListaVales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QdialogVerListaVales)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowFlag(Qt::WindowMaximizeButtonHint,true);

    setWindowTitle("Guillermito System - Lista de Vales Cargados");
    ui->tableWidget_listavales->setRowCount(1);
    ui->tableWidget_listavales->setColumnCount(13);
    ui->tableWidget_listavales->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget_listavales->setHorizontalHeaderLabels(QString("N° de Vale;"
                                                                "Codigo Barra;"
                                                                "Codigo SAP;"
                                                                "Cantidad;"
                                                                "Producto;"
                                                                "Marca;"
                                                                "Producto SHE;"
                                                                "Fecha;"
                                                                "Linea/Sector;"
                                                                "Turno;"
                                                                "Nombre;"
                                                                "Apellido;"
                                                                "Legajo;").split(";"));
    for (int c = 0; c < ui->tableWidget_listavales->horizontalHeader()->count(); ++c)
    {
     ui->tableWidget_listavales->horizontalHeader()->setSectionResizeMode(
            c, QHeaderView::Stretch);
    }

    CargarTabla();
}

QdialogVerListaVales::~QdialogVerListaVales()
{
    delete ui;
}

void QdialogVerListaVales::CargarTabla()
{
 qDebug()<<"Carga de Valores en Tabla Inicial";
 int fila;
 QSqlQueryModel model;
 model.setQuery("SELECT * FROM vales");
 fila=0;

   while(fila< model.rowCount())
    {
    ui->tableWidget_listavales->insertRow(fila);
    ui->tableWidget_listavales->setItem(fila,0,new QTableWidgetItem(model.record(fila).value(NVale).toString()));
    ui->tableWidget_listavales->setItem(fila,1,new QTableWidgetItem(model.record(fila).value(Codigo_Barra).toString()));
    ui->tableWidget_listavales->setItem(fila,2,new QTableWidgetItem(model.record(fila).value(Codigo_SAP).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,3,new QTableWidgetItem(model.record(fila).value(Cantidad).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,4,new QTableWidgetItem(model.record(fila).value(Producto).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,5,new QTableWidgetItem(model.record(fila).value(Marca).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,6,new QTableWidgetItem(model.record(fila).value(ProductoSHE).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,7,new QTableWidgetItem(model.record(fila).value(Fecha).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,8,new QTableWidgetItem(model.record(fila).value(Linea_Sector).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,9,new QTableWidgetItem(model.record(fila).value(Turno).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,10,new QTableWidgetItem(model.record(fila).value(Autorizado_Nombre).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,11,new QTableWidgetItem(model.record(fila).value(Autorizado_Apellido).toByteArray().constData()));
    ui->tableWidget_listavales->setItem(fila,12,new QTableWidgetItem(model.record(fila).value(Autorizado_Legajo).toByteArray().constData()));
    fila++;
   }
   ui->tableWidget_listavales->removeRow(fila) ;
}

void QdialogVerListaVales::on_pushButton_excel_clicked()
{
 QString nombreArchivo="Archivos_CSV//ListaVales_"+QDate(QDate::currentDate()).toString("yyyyMMdd")+QTime(QTime::currentTime()).toString("hhmmss")+".csv";
 QFile archivo(nombreArchivo);
    int aux_file=0;
    archivo.open(QIODevice::Text | QIODevice::WriteOnly);
     if(!archivo.isOpen())
        {
         return ;
         }
    //Escribe el Archivo
    QTextStream txtstr (&archivo);
    txtstr << "N° de Vale ";
    txtstr << ";";
    txtstr << "Codigo de Barra";
    txtstr << ";";
    txtstr << "Codigo de SAP";
    txtstr << ";";
    txtstr << "Cantidad";
    txtstr << ";";
    txtstr << "Producto";
    txtstr << ";";
    txtstr << "Marca";
    txtstr << ";";
    txtstr << "Producto SHE";
    txtstr << ";";
    txtstr << "Fecha";
    txtstr << ";";
    txtstr << "Linea/Sector";
    txtstr << ";";
    txtstr << "Turno";
    txtstr << ";";
    txtstr << "Autorizado Nombre";
    txtstr << ";";
    txtstr << "Autorizado Apellido";
    txtstr << ";";
    txtstr << "Autorizado Legajo";
    txtstr << ";";
    txtstr << "\n";

    while(aux_file < ui->tableWidget_listavales->rowCount())
    {
    txtstr << ui->tableWidget_listavales->item(aux_file,0)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,1)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,2)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,3)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,4)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,5)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,6)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,7)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,8)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,9)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,10)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,11)->text();
    txtstr << ";";
    txtstr << ui->tableWidget_listavales->item(aux_file,12)->text();
    txtstr << ";";
    txtstr << "\n";
    aux_file++;
    }
    archivo.flush();
    archivo.close();

}
