#include "qdialog_agregarusuarios.h"
#include "ui_qdialog_agregarusuarios.h"

qdialog_agregarusuarios::qdialog_agregarusuarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qdialog_agregarusuarios)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    ui->lineEdit_nombre->clear();
    ui->lineEdit_apellido->clear();
    ui->lineEdit_pass_01->clear();
    ui->lineEdit_pass_02->clear();
    ui->lineEdit_legajo->clear();
/*
    ui->lineEdit_legajo->setInputMask("999999999999999999999999999999");
    ui->lineEdit_legajo->setCursorPosition(0);
    ui->lineEdit_nombre->setInputMask("> AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    ui->lineEdit_nombre->setCursorPosition(0);
    ui->lineEdit_apellido->setInputMask("> AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    ui->lineEdit_apellido->setCursorPosition(0);
*/
}

qdialog_agregarusuarios::~qdialog_agregarusuarios()
{
    delete ui;
}

void qdialog_agregarusuarios::on_pushButton_agregarusuario_clicked()
{
    // Condiciones Necesarias para Agregar un Producto
  if ((ui->lineEdit_nombre->text()) == " ")
         {
          QMessageBox::about(this, tr("Error: Faltan Datos"),
                                       tr("Completar el Campo <b>Nombre</b>" ));
           return ;
             }
  if ((ui->lineEdit_apellido->text()) == " ")
         {
          QMessageBox::about(this, tr("Error: Faltan Datos"),
                                       tr("Completar el Campo <b>Apellido</b>" ));
           return ;
             }
  if ((ui->lineEdit_legajo->text()) == " ")
         {
          QMessageBox::about(this, tr("Error: Faltan Datos"),
                                     tr("Completar el Campo <b>Legajo</b>" ));
           return ;
             }

  if ((ui->lineEdit_pass_01->text()) == " ")
         {
          QMessageBox::about(this, tr("Error: Faltan Datos"),
                                     tr("Completar el Campo <b>Contraseña</b>" ));
           return ;
             }
  if ((ui->lineEdit_pass_02->text()) == " ")
         {
          QMessageBox::about(this, tr("Error: Faltan Datos"),
                                     tr("Debe Repetir la Contraseña" ));
           return ;
             }
  if ((ui->lineEdit_pass_01->text()) != (ui->lineEdit_pass_02->text()))
         {
          QMessageBox::about(this, tr("Error: Faltan Datos"),
                                     tr("La Contraseña debe Coincidir" ));
           return ;
             }

  NuevoUsuario.Nombre=ui->lineEdit_nombre->text();
  NuevoUsuario.Apellido=ui->lineEdit_apellido->text();
  NuevoUsuario.Legajo=ui->lineEdit_legajo->text();
  NuevoUsuario.Pass=ui->lineEdit_pass_01->text();
  NuevoUsuario.Nivel=ui->comboBox_nivelusuario->currentText();

 accept();
}
Usuarios qdialog_agregarusuarios::NuevoUsuario_func() const
{
  return NuevoUsuario;
}

void qdialog_agregarusuarios::on_pushButton_cancelar_clicked()
{
    reject();
}
