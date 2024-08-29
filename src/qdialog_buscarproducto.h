#ifndef QDIALOG_BUSCARPRODUCTO_H
#define QDIALOG_BUSCARPRODUCTO_H

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

struct ProductosaBuscar {
    QString SAP;
    QString Codigo_Barra;
    QString Producto;
    QString Marca;
    QString Stock;
    QString StockMinimo;
    QString Ubicacion;
    QString ProductoSHE;
    QString Descripcion;
  };

namespace Ui {
class qdialog_buscarproducto;
}

class qdialog_buscarproducto : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_buscarproducto(QWidget *parent = nullptr);
    ~qdialog_buscarproducto();

private slots:
    void on_pushButton_buscar_clicked();

    void on_pushButton_modificar_clicked();

    void on_pushButton_aceptarmodificacion_clicked();

    void on_pushButton_cancelarmodificacion_clicked();

private:
    Ui::qdialog_buscarproducto *ui;
    QSqlQueryModel model;
    ProductosaBuscar productobuscar,productomodificar;
    enum Columna{id,Codigo_SAP,Codigo_Barra,Producto,Marca,Stock,StockMinimo,Ubicacion,ProductoSHE,Descripcion};
};

#endif // QDIALOG_BUSCARPRODUCTO_H
