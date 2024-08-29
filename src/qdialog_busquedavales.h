#ifndef QDIALOG_BUSQUEDAVALES_H
#define QDIALOG_BUSQUEDAVALES_H

#include <QDialog>
#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>

#include <QDebug>
#include <QMessageBox>
#include <QDate>
#include "QString"

namespace Ui {
class QDialog_BusquedaVales;
}

class QDialog_BusquedaVales : public QDialog
{
    Q_OBJECT

public:
    explicit QDialog_BusquedaVales(QWidget *parent = nullptr);
    ~QDialog_BusquedaVales();
    void CargaTabla(int fila, int item);
    void ActulizarTabla();

private slots:
        void on_lineEdit_busqueda_01_textChanged(const QString &arg1);
        void on_lineEdit_busqueda_02_textChanged(const QString &arg1);
        void on_comboBox_busqueda_currentIndexChanged(int index);
        int filtros_busqueda();


private:
    Ui::QDialog_BusquedaVales *ui;
    enum Products{id, NVale,Codigo_SAP,Codigo_Barra ,Cantidad,Producto,Marca,ProductoSHE,Fecha,Linea_Sector,Autorizado_Nombre,Autorizado_Apellido,Autorizado_Legajo,Autorizante_Nombre,Autorizante_Apellido,Autorizante_Legajo,Turno};
    QString Busqueda_arg_01 ="";
    QString Busqueda_arg_02 ="";
    int Busqueda_index = 0;
    QSqlQueryModel model;

};

#endif // QDIALOG_BUSQUEDAVALES_H
