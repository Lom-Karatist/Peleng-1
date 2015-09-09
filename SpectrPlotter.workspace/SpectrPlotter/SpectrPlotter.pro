#-------------------------------------------------
#
# Project created by QtCreator 2015-09-08T13:12:16
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpectrPlotter
TEMPLATE = app


SOURCES += main.cpp\
    ../../Library/GenericExc.cpp \
    ../../Library/HyperCube.cpp \
    ../../Library/QCustomPlot.cpp \
    PlotterWindow.cpp

HEADERS  += \
    ../../Library/GenericExc.h \
    ../../Library/HyperCube.h \
    ../../Library/QCustomPlot.h \
    ../../Library/Types.h \
    PlotterWindow.h

INCLUDEPATH += $$PWD/../../Library
DEPENDPATH += $$PWD/../../Library

FORMS    += \
    PlotterWindow.ui
