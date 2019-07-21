#-------------------------------------------------
#
# Project created by QtCreator 2019-06-30T14:58:06
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartHome
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    registerwindow.cpp \
    tcpsocket.cpp \
    serveraddressdialog.cpp \
    userinformation.cpp \
    smartprotocol.cpp \
    majorwindow.cpp \
    roomwindow.cpp

HEADERS  += loginwindow.h \
    registerwindow.h \
    tcpsocket.h \
    serveraddressdialog.h \
    userinformation.h \
    smartprotocol.h \
    majorwindow.h \
    roomwindow.h

FORMS    += loginwindow.ui \
    registerwindow.ui \
    serveraddressdialog.ui \
    majorwindow.ui \
    roomwindow.ui

RESOURCES += \
    resources.qrc
