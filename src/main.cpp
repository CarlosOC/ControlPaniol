#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    //open qss file
    QFile file("D:/Documentos/ProyectosDeProgramacion/QTCreator/ControlPanol/Style.qss");
    file.open(QFile::ReadOnly);

    QString styleSheet { file.readAll() };

    //setup stylesheet
    a.setStyleSheet(styleSheet);
    w.show();

    return a.exec();
}
