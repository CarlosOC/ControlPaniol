/********************************************************************************
** Form generated from reading UI file 'qdialog_buscarusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_BUSCARUSUARIO_H
#define UI_QDIALOG_BUSCARUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_qdialog_buscarusuario
{
public:

    void setupUi(QDialog *qdialog_buscarusuario)
    {
        if (qdialog_buscarusuario->objectName().isEmpty())
            qdialog_buscarusuario->setObjectName(QString::fromUtf8("qdialog_buscarusuario"));
        qdialog_buscarusuario->resize(400, 300);

        retranslateUi(qdialog_buscarusuario);

        QMetaObject::connectSlotsByName(qdialog_buscarusuario);
    } // setupUi

    void retranslateUi(QDialog *qdialog_buscarusuario)
    {
        qdialog_buscarusuario->setWindowTitle(QApplication::translate("qdialog_buscarusuario", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qdialog_buscarusuario: public Ui_qdialog_buscarusuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_BUSCARUSUARIO_H
