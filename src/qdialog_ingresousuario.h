#ifndef QDIALOG_INGRESOUSUARIO_H
#define QDIALOG_INGRESOUSUARIO_H

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

struct user
{
 QString User_nombre;
 QString User_apellido;
 QString User_legajo;
 QString User_nivel;
};

namespace Ui {
class qdialog_ingresousuario;
}

class qdialog_ingresousuario : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_ingresousuario(QWidget *parent = nullptr);
    ~qdialog_ingresousuario();
    user DatosUsuario();

private slots:
    void ValidarDatos();
    void on_pushButton_aceptar_clicked();

private:
    Ui::qdialog_ingresousuario *ui;
    QSqlQueryModel model;
    user UsuarioActivo;
    enum Users{ID,Usuario_Nombre,Usuario_Apellido,Usuario_Legajo,Usuario_Pass,Usuario_Nivel};
};

#endif // QDIALOG_INGRESOUSUARIO_H
