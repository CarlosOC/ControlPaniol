#ifndef QDIALOG_AGREGARPRODUCTO_H
#define QDIALOG_AGREGARPRODUCTO_H

#include <QDialog>
#include <QDebug>
#include <QWidget>
#include <QMessageBox>
struct Productos {
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
class qdialog_agregarproducto;
}

class qdialog_agregarproducto : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_agregarproducto(QWidget *parent = nullptr);
    ~qdialog_agregarproducto();

    Productos NuevoProducto_func() const;

private slots:
    void on_pushButton_agregarproducto_clicked();

    void on_pushButton_clicked();

private:
    Ui::qdialog_agregarproducto *ui;
    Productos nuevo_producto;
};

#endif // QDIALOG_AGREGARPRODUCTO_H
