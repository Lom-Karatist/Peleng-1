#-------------------------------------------------
#
# Project created by QtCreator 2015-09-07T11:17:51
#
#-------------------------------------------------

QT       += gui core

TARGET = ReadDataLib
TEMPLATE = lib
Debug:    DLLDESTDIR += ../../Debug/AvirisReadPlugin
Debug:    DLLDESTDIR += ../../Debug/MainApp/debug

Release:    DLLDESTDIR += ../../Release/AvirisReadPlugin
Release:    DLLDESTDIR += ../../Release/MainApp/release

DEFINES += READDATALIB_LIBRARY

SOURCES += ReadDataLib.cpp \
    Context.cpp \
    FilesOperation.cpp \
    ../Library/GenericExc.cpp \
    ../Library/HyperCube.cpp

HEADERS += ReadDataLib.h \
    ReadDataLib_global.h \
    Context.h \
    FilesOperation.h \
    ../Library/Types.h \
    ../Library/GenericExc.h \
    ../Library/HyperCube.h

INCLUDEPATH += $$PWD/../Library
DEPENDPATH += $$PWD/../Library

unix {
    target.path = /usr/lib
    INSTALLS += target
}
