#ifndef QDIALOG_BUSCARAUTORIZADOS_H
#define QDIALOG_BUSCARAUTORIZADOS_H

#include <QDialog>
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

struct AutorizadoaBuscar
{
  QString Nombre;
  QString Apellido;
  QString Legajo;
  QString Sector;
};
namespace Ui {
class qdialog_buscarautorizados;
}

class qdialog_buscarautorizados : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_buscarautorizados(QWidget *parent = nullptr);
    ~qdialog_buscarautorizados();

private slots:
    void on_pushButton_buscar_clicked();

    void on_pushButton_modificar_clicked();

    void on_pushButton_aceptarmodificacion_clicked();

    void on_pushButton_cancelarmodificacion_clicked();

private:
    Ui::qdialog_buscarautorizados *ui;
    QSqlQueryModel model;
    AutorizadoaBuscar Autorizadoabuscar,Autorizadomodificar;
    enum Columna{id,Nombre,Apellido,Legajo,Sector};
};

#endif // QDIALOG_BUSCARAUTORIZADOS_H
