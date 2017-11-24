#-------------------------------------------------
#
# Project created by QtCreator 2017-11-24T11:02:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlarmTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    alarmwindow.cpp \
    handler_queue.cpp

HEADERS  += mainwindow.h \
    alarmwindow.h \
    handler_queue.h

FORMS    += mainwindow.ui \
    alarmwindow.ui
