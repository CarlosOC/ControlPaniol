#ifndef QDIALOGVERLISTAPRODUCTO_H
#define QDIALOGVERLISTAPRODUCTO_H

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
class QDialogVerlistaProducto;
}

class QDialogVerlistaProducto : public QDialog
{
    Q_OBJECT

public:
    explicit QDialogVerlistaProducto(QWidget *parent = nullptr);
    ~QDialogVerlistaProducto();
    void CargarTabla();

private slots:
    void on_pushButton_excel_clicked();

private:
    Ui::QDialogVerlistaProducto *ui;
    enum Columna{id,Codigo_SAP,Codigo_Barra,Producto,Marca,Stock,StockMinimo,Ubicacion,ProductoSHE,Descripcion};
};

#endif // QDIALOGVERLISTAPRODUCTO_H
