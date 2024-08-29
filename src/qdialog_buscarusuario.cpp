#include "qdialog_buscarusuario.h"
#include "ui_qdialog_buscarusuario.h"

qdialog_buscarusuario::qdialog_buscarusuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qdialog_buscarusuario)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
}

qdialog_buscarusuario::~qdialog_buscarusuario()
{
    delete ui;
}
