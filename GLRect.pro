#-------------------------------------------------
#
# Project created by QtCreator 2014-08-25T16:20:43
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GLRect
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    SceneWindow.cpp \
    Scene.cpp

HEADERS  += MainWindow.h \
    SceneWindow.h \
    Scene.h

FORMS    += MainWindow.ui \
    SceneWindow.ui
