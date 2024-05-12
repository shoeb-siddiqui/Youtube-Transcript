#-------------------------------------------------
#
# Project created by QtCreator 2023-10-30T09:01:58
#
#-------------------------------------------------

QT       += core gui network texttospeech printsupport sql
CONFIG += c++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Youtube_transcript
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    login.cpp \
    forgot_password.cpp \
    register.cpp

HEADERS += \
        mainwindow.h \
    login.h \
    forgot_password.h \
    register.h \
    C:/marian-master/marian-master/src/marian.h

FORMS += \
        mainwindow.ui \
    login.ui \
    forgot_password.ui \
    register.ui

RESOURCES += \
    image.qrc


RC_ICONS = youtube.ico
