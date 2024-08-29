#ifndef QDIALOG_BUSCARUSUARIO_H
#define QDIALOG_BUSCARUSUARIO_H

#include <QDialog>

namespace Ui {
class qdialog_buscarusuario;
}

class qdialog_buscarusuario : public QDialog
{
    Q_OBJECT

public:
    explicit qdialog_buscarusuario(QWidget *parent = nullptr);
    ~qdialog_buscarusuario();

private:
    Ui::qdialog_buscarusuario *ui;
};

#endif // QDIALOG_BUSCARUSUARIO_H
