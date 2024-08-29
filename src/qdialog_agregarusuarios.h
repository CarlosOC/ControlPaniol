#ifndef QDIALOG_AGREGARUSUARIOS_H
#define QDIALOG_AGREGARUSUARIOS_H

#include <QDialog>
#include <QMessageBox>

struct Usuarios {
  QString Nombre;
  QString Apellido;
  QString Legajo;
  QString Nivel;
  QString Pass;
  };
namespace Ui {
class qdialog_agregarusuarios;
}

class qdialog_agregarusuarios : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_agregarusuarios(QWidget *parent = nullptr);
    ~qdialog_agregarusuarios();
    Usuarios NuevoUsuario_func() const;
private slots:

    void on_pushButton_agregarusuario_clicked();

    void on_pushButton_cancelar_clicked();

private:
    Ui::qdialog_agregarusuarios *ui;
    Usuarios NuevoUsuario;
};

#endif // QDIALOG_AGREGARUSUARIOS_H
