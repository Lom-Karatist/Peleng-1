#-------------------------------------------------
#
# Project created by QtCreator 2015-09-28T13:37:07
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
DLLDESTDIR = ../../Debug/MainApp/debug

TARGET = HistPlotter
TEMPLATE = lib

DEFINES += HISTPLUGIN_LIBRARY



SOURCES +=\
    ../Library/GenericExc.cpp \
    ../Library/HyperCube.cpp \
    ../Library/QCustomPlot.cpp \
    histplugin.cpp \
    ../Library/PluginAttributes/ChannelPluginAttributes.cpp

HEADERS  += \
    ../Library/GenericExc.h \
    ../Library/HyperCube.h \
    ../Library/QCustomPlot.h \
    ../Library/Types.h \
    histplugin.h \
    ../Library/PluginAttributes/ChannelPluginAttributes.h \
    ../Library/Utils/typeconvertor.h

FORMS    +=

DISTFILES += \
    HistPlugin.json
