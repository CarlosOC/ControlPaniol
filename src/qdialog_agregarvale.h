#ifndef QDIALOG_AGREGARVALE_H
#define QDIALOG_AGREGARVALE_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QDate>
#include "QString"

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include "QSqlTableModel.h"
#include "QStringListModel"
#include "QCompleter"

struct Vale {
  QString NVale;
  QString SAP;
  QString CodigoBarra;
  QString Cantidad;
  QString Producto;
  QString Marca;
  QString ProductoSHE;
  QString Fecha;
  QString Linea_Sector;
  QString Autorizado_Nombre;
  QString Autorizado_Apellido;
  QString Autorizado_Legajo;
  QString Autorizante_Nombre;
  QString Autorizante_Apellido;
  QString Autorizante_Legajo;
  QString Turno;
  };

namespace Ui {
class QDialog_AgregarVale;
}

class QDialog_AgregarVale : public QDialog
{
    Q_OBJECT

public:
    explicit QDialog_AgregarVale(QWidget *parent = nullptr);
    ~QDialog_AgregarVale();
    Vale NuevoVale_func() const;
    void CargaUsuario(QString Usuario_legajo);


private slots:
    void CargaAutocompletar (void);
    void on_pushButton_AgregarVale_clicked();

    void on_pushButton_Cancelar_clicked();

    void on_pushButton_agregarItem_clicked();
    void AgregarValeenBasedeDatos();
    void ActualizarStock();
    void CargaAutorizante();

    void on_lineEdit_sap_textEdited(const QString &arg1);

    void on_lineEdit_codigodebarra_textEdited(const QString &arg1);

    void on_lineEdit_autorizado_legajo_textEdited(const QString &arg1);

private:
    Ui::QDialog_AgregarVale *ui;
    QString LegajoUsuario;
    QDate Fecha_Hoy;
    Vale nuevo_vale;
    QStringListModel *ListaSAP,*ListaCodigoBarra,*ListaProducto,*ListaMarca,*ListaNombreAutorizado,*ListaApellidoAutorizado,*ListaLegajoAutorizado;
    QCompleter *Auto_completer_producto,*Auto_completer_SAP,*Auto_completer_codigobarra,*Auto_completer_marca,*Auto_completer_NombreAutorizado,*Auto_completer_LegajoAutorizado,*Auto_completer_ApellidoAutorizado;
    QSqlQueryModel model;
    QStringList lista_producto,lista_marca,lista_SAP,lista_CodigoBarra,lista_NombreAutorizado,lista_LegajoAutorizado,lista_ApellidoAutorizado;
    int item,Vale_item;
    enum Products{id,Codigo_SAP,Codigo_Barra,Producto,Marca,Stock,StockMinimo,Ubicacion,ProductoSHE,Descripcion};
    enum Autorizads{ID,Nombre_Autorizado,Apellido_Autorizado,Legajo_Autorizado,Sector_Autorizado};
    //QSqlQueryModel *model;
    //QSqlTableModel *Tabla_BaseDatos;
};

#endif // QDIALOG_AGREGARVALE_H
