#-------------------------------------------------
#
# Project created by QtCreator 2017-03-19T13:07:45
#
#-------------------------------------------------

QT       -= gui

TARGET = FEClone
TEMPLATE = lib

DEFINES += FECLONE_LIBRARY

SOURCES += feclone.cpp \
    board.cpp \
    unit.cpp

HEADERS += feclone.h\
        feclone_global.h \
    board.h \
    unit.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
