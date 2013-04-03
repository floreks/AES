#-------------------------------------------------
#
# Project created by QtCreator 2013-04-03T21:06:36
#
#-------------------------------------------------

QT       += core

QT       -= gui

QMAKE_CXXFLAGS += -std=c++0x

TARGET = AES
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    cipher.cpp

HEADERS += \
    cipher.h
