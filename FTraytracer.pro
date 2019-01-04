TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    application.cpp \
    modules/vec3.cpp \
    modules/camera.cpp \
    modules/scene.cpp

HEADERS += \
    application.h \
    modules/utils.h \
    modules/vec3.h \
    modules/camera.h \
    modules/scene.h
