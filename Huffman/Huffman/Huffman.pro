#-------------------------------------------------
#
# Project created by QtCreator 2015-05-08T22:51:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Huffman
TEMPLATE = app


SOURCES += main.cpp\
        huffman.cpp \
    compressao.cpp \
    descompressao.cpp

HEADERS  += huffman.h \
    compressao.h \
    descompressao.h

FORMS    += huffman.ui

RESOURCES += \
    icones.qrc
