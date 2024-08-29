#-------------------------------------------------
#
# Project created by QtCreator 2019-08-06T19:59:10
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ControlPanol
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        dialog_login.cpp \
        main.cpp \
        mainwindow.cpp \
        qdialog_agregarautorizados.cpp \
        qdialog_agregarproducto.cpp \
        qdialog_agregarusuarios.cpp \
        qdialog_agregarvale.cpp \
        qdialog_buscarautorizados.cpp \
        qdialog_buscarproducto.cpp \
        qdialog_buscarusuario.cpp \
        qdialog_busquedavales.cpp \
        qdialog_ingresousuario.cpp \
        qdialog_verlistaautorizados.cpp \
        qdialogverlistaproducto.cpp \
        qdialogverlistavales.cpp

HEADERS += \
        dialog_login.h \
        mainwindow.h \
        qdialog_agregarautorizados.h \
        qdialog_agregarproducto.h \
        qdialog_agregarusuarios.h \
        qdialog_agregarvale.h \
        qdialog_buscarautorizados.h \
        qdialog_buscarproducto.h \
        qdialog_buscarusuario.h \
        qdialog_busquedavales.h \
        qdialog_ingresousuario.h \
        qdialog_verlistaautorizados.h \
        qdialogverlistaproducto.h \
        qdialogverlistavales.h

FORMS += \
        dialog_login.ui \
        mainwindow.ui \
        qdialog_agregarautorizados.ui \
        qdialog_agregarproducto.ui \
        qdialog_agregarusuarios.ui \
        qdialog_agregarvale.ui \
        qdialog_buscarautorizados.ui \
        qdialog_buscarproducto.ui \
        qdialog_buscarusuario.ui \
        qdialog_busquedavales.ui \
        qdialog_ingresousuario.ui \
        qdialog_verlistaautorizados.ui \
        qdialogverlistaproducto.ui \
        qdialogverlistavales.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    iconos.qrc

DISTFILES +=
