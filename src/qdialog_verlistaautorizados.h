#ifndef QDIALOG_VERLISTAAUTORIZADOS_H
#define QDIALOG_VERLISTAAUTORIZADOS_H

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
#include <QFile>
namespace Ui {
class QDialog_verlistaautorizados;
}

class QDialog_verlistaautorizados : public QDialog
{
    Q_OBJECT

public:
    explicit QDialog_verlistaautorizados(QWidget *parent = nullptr);
    ~QDialog_verlistaautorizados();
    void CargarTabla();

private slots:
    void on_pushButton_Excel_clicked();

private:
    Ui::QDialog_verlistaautorizados *ui;
    enum Columna{id,Nombre,Apellido,Legajo,Sector};
};

#endif // QDIALOG_VERLISTAAUTORIZADOS_H
