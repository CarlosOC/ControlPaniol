#ifndef QDIALOG_AGREGARAUTORIZADOS_H
#define QDIALOG_AGREGARAUTORIZADOS_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>

#include <QDebug>
#include <QMessageBox>
#include <QDate>
#include "QString"

struct Autorizado
{
  QString Nombre;
  QString Apellido;
  QString Legajo;
  QString Sector;
};

namespace Ui {
class qdialog_agregarautorizados;
}

class qdialog_agregarautorizados : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_agregarautorizados(QWidget *parent = nullptr);
    ~qdialog_agregarautorizados();

private slots:
    void on_pushButton_agregarusuario_clicked();

    void on_pushButton_cancelar_clicked();

private:
    Ui::qdialog_agregarautorizados *ui;
};

#endif // QDIALOG_AGREGARAUTORIZADOS_H
