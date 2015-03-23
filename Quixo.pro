#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T14:49:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Quixo
TEMPLATE = app


SOURCES += main.cpp\
        quixo.cpp \
    piece.cpp \
    plateau.cpp

HEADERS  += quixo.h \
    piece.h \
    plateau.h

FORMS    += quixo.ui

RESOURCES += \
    images.qrc
