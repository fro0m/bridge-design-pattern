QT += core
QT -= gui

CONFIG += c++11

TARGET = bridge
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    item.cpp \
    itemdata.cpp

HEADERS += \
    item.h \
    itemdata.h
