#include "qdialog_agregarautorizados.h"  // Incluye el archivo de cabecera de la clase
#include "ui_qdialog_agregarautorizados.h"  // Incluye el archivo de interfaz de usuario generado por el compilador de Qt

// Constructor de la clase qdialog_agregarautorizados
qdialog_agregarautorizados::qdialog_agregarautorizados(QWidget *parent) :
    QDialog(parent),  // Llama al constructor de la clase base QDialog con el parámetro parent
    ui(new Ui::qdialog_agregarautorizados)  // Inicializa el puntero de la interfaz de usuario
{
    ui->setupUi(this);  // Configura la interfaz de usuario
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);  // Oculta el botón de ayuda en la barra de título

    setWindowTitle("Guillermito System - Agregar Personal Autorizado");  // Establece el título de la ventana
}

// Destructor de la clase qdialog_agregarautorizados
qdialog_agregarautorizados::~qdialog_agregarautorizados()
{
    delete ui;  // Libera la memoria ocupada por la interfaz de usuario
}

// Slot que se ejecuta cuando se hace clic en el botón "agregarusuario"
void qdialog_agregarautorizados::on_pushButton_agregarusuario_clicked()
{
    QSqlQuery insertar;  // Crea una instancia de QSqlQuery para realizar la inserción en la base de datos
    Autorizado NuevoAutorizado;  // Crea una instancia de la estructura Autorizado

    // Obtiene los valores de los campos de entrada y los asigna a la estructura Autorizado
    NuevoAutorizado.Nombre = ui->lineEdit_nombre->text();
    NuevoAutorizado.Apellido = ui->lineEdit_apellido->text();
    NuevoAutorizado.Legajo = ui->lineEdit_legajo->text();
    NuevoAutorizado.Sector = ui->lineEdit_sector->text();

    // Verifica que el nombre no esté vacío
    if (NuevoAutorizado.Nombre != "")
    {
        // Prepara la consulta SQL para insertar un nuevo autorizado
        insertar.prepare("INSERT INTO Autorizados (Nombre,Apellido,Legajo,Sector) VALUES(:Nombre, :Apellido, :Legajo, :Sector)");

        // Vincula los valores de la estructura a la consulta SQL
        insertar.bindValue(":Nombre", NuevoAutorizado.Nombre);
        qDebug() << "Nombre " << NuevoAutorizado.Nombre;

        insertar.bindValue(":Apellido", NuevoAutorizado.Apellido);
        qDebug() << "Apellido" << NuevoAutorizado.Apellido;

        insertar.bindValue(":Legajo", NuevoAutorizado.Legajo);
        qDebug() << "Legajo " << NuevoAutorizado.Legajo;

        insertar.bindValue(":Sector", NuevoAutorizado.Sector);
        qDebug() << "Sector: " << NuevoAutorizado.Sector;

        // Ejecuta la consulta SQL y verifica si se insertó correctamente
        if (insertar.exec())
        {
            qDebug() << "Se inserto el registro en la tabla";
            // Limpia los campos de entrada después de la inserción exitosa
            ui->lineEdit_nombre->clear();
            ui->lineEdit_apellido->clear();
            ui->lineEdit_legajo->clear();
            ui->lineEdit_sector->clear();
        }
        else
        {
            qDebug() << "No se pudo insertar el registro";
            qDebug() << "Error! " << insertar.lastError();
        }
    }
    else
    {
        qDebug() << "No, Se agrego registro a Vales";
    }

    accept();  // Cierra el diálogo y retorna QDialog::Accepted
}

// Slot que se ejecuta cuando se hace clic en el botón "cancelar"
void qdialog_agregarautorizados::on_pushButton_cancelar_clicked()
{
    // Limpia los campos de entrada
    ui->lineEdit_nombre->clear();
    ui->lineEdit_apellido->clear();
    ui->lineEdit_legajo->clear();
    ui->lineEdit_sector->clear();
    reject();  // Cierra el diálogo y retorna QDialog::Rejected
}
