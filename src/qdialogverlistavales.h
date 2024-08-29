#ifndef QDIALOGVERLISTAVALES_H
#define QDIALOGVERLISTAVALES_H

#include <QDialog>
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
#include <QFile>

namespace Ui {
class QdialogVerListaVales;
}

class QdialogVerListaVales : public QDialog
{
    Q_OBJECT

public:
    explicit QdialogVerListaVales(QWidget *parent = nullptr);
    ~QdialogVerListaVales();
    void CargarTabla();

private slots:
    void on_pushButton_excel_clicked();

private:
    Ui::QdialogVerListaVales *ui;

    enum Columna{id, NVale,Codigo_SAP,Codigo_Barra ,Cantidad,Producto,Marca,ProductoSHE,Fecha,Linea_Sector,Autorizado_Nombre,Autorizado_Apellido,Autorizado_Legajo,Autorizante_Nombre,Autorizante_Apellido,Autorizante_Legajo,Turno};
};

#endif // QDIALOGVERLISTAVALES_H
