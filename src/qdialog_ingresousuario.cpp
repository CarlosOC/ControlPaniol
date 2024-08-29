#include "qdialog_ingresousuario.h"
#include "ui_qdialog_ingresousuario.h"

qdialog_ingresousuario::qdialog_ingresousuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qdialog_ingresousuario)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowTitle("Guillermito System - Login");
}

qdialog_ingresousuario::~qdialog_ingresousuario()
{
    delete ui;
}
void qdialog_ingresousuario::ValidarDatos()
{
 QString Legajo,Pass;

 Legajo=ui->lineEdit_legajo->text();
 Pass=ui->lineEdit_pass->text();
qDebug()<<"Legajo:"<<Legajo;
qDebug()<<"Pass"<<Pass;
 model.setQuery("SELECT * FROM Usuarios WHERE Legajo ='"+Legajo+"'");
 qDebug()<<"_Usuario_:"<<model.record(0).value(3).toString();

 if(Legajo ==model.record(0).value(3).toString() && Pass==model.record(0).value(4).toString())
   {
    qDebug()<<"Usuario Aceptado";
    UsuarioActivo.User_nombre=model.record(0).value(Usuario_Nombre).toString() ;
    UsuarioActivo.User_apellido=model.record(0).value(Usuario_Apellido).toString();
    UsuarioActivo.User_legajo=model.record(0).value(Usuario_Legajo).toString();
    UsuarioActivo.User_nivel=model.record(0).value(Usuario_Nivel).toString();

    QMessageBox::about(this, tr("Login"),
                             tr("Usuario Aceptado Bienvenido" ));
    return ;

   }
  else if(ui->lineEdit_legajo->text()=="Administrador" && ui->lineEdit_pass->text()=="Administrador")
 {
   UsuarioActivo.User_nombre="Administrador";
   UsuarioActivo.User_apellido="Administrador";
   UsuarioActivo.User_legajo="Administrador";
   UsuarioActivo.User_nivel="Nivel 0";
   return ;
 }else
     {
   QMessageBox::about(this, tr("Login"),
                            tr("Usuario Incorrecto" ));
   return ;
   }
 }

user qdialog_ingresousuario::DatosUsuario()
{
 return (UsuarioActivo);
}
void qdialog_ingresousuario::on_pushButton_aceptar_clicked()
{
ValidarDatos();
accept();

}
