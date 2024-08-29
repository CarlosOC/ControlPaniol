#include "dialog_login.h"
#include "ui_dialog_login.h"

dialog_login::dialog_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_login)
{
    ui->setupUi(this);
}

dialog_login::~dialog_login()
{
    delete ui;
}
