#include "qdialog_agregarproducto.h"  // Incluye el archivo de cabecera de la clase
#include "ui_qdialog_agregarproducto.h"  // Incluye el archivo de interfaz de usuario generado por el compilador de Qt

// Constructor de la clase qdialog_agregarproducto
qdialog_agregarproducto::qdialog_agregarproducto(QWidget *parent) :
    QDialog(parent),  // Llama al constructor de la clase base QDialog con el parámetro parent
    ui(new Ui::qdialog_agregarproducto)  // Inicializa el puntero de la interfaz de usuario
{
    ui->setupUi(this);  // Configura la interfaz de usuario
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);  // Oculta el botón de ayuda en la barra de título
    setWindowTitle("Guillermito System - Agregar Producto");  // Establece el título de la ventana

    // Limpia los campos de entrada al iniciar el diálogo
    ui->lineEdit_codigosap->clear();
    ui->lineEdit_codigobarra->clear();
    ui->lineEdit_producto->clear();

    /*
    // Establece máscaras de entrada para los campos (comentado)
    ui->lineEdit_codigosap->setInputMask("999999999999999999999999999999");
    ui->lineEdit_codigosap->setCursorPosition(0);
    ui->lineEdit_codigobarra->setInputMask("999999999999999999999999999999");
    ui->lineEdit_codigobarra->setCursorPosition(0);
    ui->lineEdit_producto->setInputMask("> AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    ui->lineEdit_producto->setCursorPosition(0);
    */
}

// Destructor de la clase qdialog_agregarproducto
qdialog_agregarproducto::~qdialog_agregarproducto()
{
    delete ui;  // Libera la memoria ocupada por la interfaz de usuario
}

// Devuelve el nuevo producto creado
Productos qdialog_agregarproducto::NuevoProducto_func() const
{
    return nuevo_producto;  // Retorna la estructura del nuevo producto
}

// Slot que se ejecuta cuando se hace clic en el botón "agregarproducto"
void qdialog_agregarproducto::on_pushButton_agregarproducto_clicked()
{
    // Verifica que el campo de producto no esté vacío
    if ((ui->lineEdit_producto->text()) == " ")
    {
        QMessageBox::about(this, tr("Error: Faltan Datos"),
                           tr("Completar el Campo <b>Producto</b>"));
        return;
    }
    // Verifica que el campo de código SAP no esté vacío
    if ((ui->lineEdit_codigosap->text()) == " ")
    {
        QMessageBox::about(this, tr("Error: Faltan Datos"),
                           tr("Completar el Campo <b>Codigo SAP</b>"));
        return;
    }
    // Verifica que el campo de stock no sea cero
    if ((ui->spinBox_stock->text()) == "0")
    {
        QMessageBox::about(this, tr("Error: Faltan Datos"),
                           tr("Completar el Campo <b>STOCK</b>"));
        return;
    }

    // Asigna los valores de los campos de entrada a la estructura del nuevo producto
    nuevo_producto.Producto = ui->lineEdit_producto->text();
    nuevo_producto.SAP = ui->lineEdit_codigosap->text();
    nuevo_producto.Codigo_Barra = ui->lineEdit_codigobarra->text();
    nuevo_producto.Stock = ui->spinBox_stock->text();
    nuevo_producto.StockMinimo = ui->spinBox_stockminimo->text();
    nuevo_producto.Descripcion = ui->textEdit_descripcion->toPlainText();
    nuevo_producto.Marca = ui->lineEdit_marca->text();
    nuevo_producto.Ubicacion = ui->lineEdit_ubicacion->text();

    // Asigna el valor de ProductoSHE según el estado del radio button
    if (ui->radioButton_si->isChecked())
        nuevo_producto.ProductoSHE = "V";
    else if (ui->radioButton_no->isChecked())
        nuevo_producto.ProductoSHE = "F";

    accept();  // Cierra el diálogo y retorna QDialog::Accepted
}

// Slot que se ejecuta cuando se hace clic en el botón de cancelar
void qdialog_agregarproducto::on_pushButton_clicked()
{
    reject();  // Cierra el diálogo y retorna QDialog::Rejected
}
