#-------------------------------------------------
#
# Project created by QtCreator 2015-05-11T15:23:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Huffman
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    compressao.cpp \
    descompressao.cpp

HEADERS  += mainwindow.h \
    compressao.h \
    node.h \
    treeADT.h \
    sort.h \
    listadt.h \
    implementalista.h \
    implementasort.h \
    implementatree.h \
    descompressao.h \
    nodelist.h

FORMS    += mainwindow.ui

RESOURCES += \
    icones.qrc
