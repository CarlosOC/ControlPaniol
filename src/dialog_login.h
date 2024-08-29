#ifndef DIALOG_LOGIN_H
#define DIALOG_LOGIN_H

#include <QDialog>

namespace Ui {
class dialog_login;
}

class dialog_login : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_login(QWidget *parent = nullptr);
    ~dialog_login();

private:
    Ui::dialog_login *ui;
};

#endif // DIALOG_LOGIN_H
