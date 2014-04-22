#-------------------------------------------------
#
# Project created by QtCreator 2013-04-05T22:25:57
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = cocos2dx
TEMPLATE = lib

DEFINES += _USRDLL
DEFINES += __QT__
DEFINES += CC_UNDER_QT

# include pri
include(actions.pri)
include(base_nodes.pri)
include(cocoa.pri)
include(draw_nodes.pri)
include(effects.pri)
include(kazmath.pri)
include(keypad_dispatcher.pri)
include(label_nodes.pri)
include(layers_scenes_transitions_nodes.pri)
include(menu_nodes.pri)
include(misc_nodes.pri)
include(particle_nodes.pri)
include(platform.pri)
include(script_support.pri)
include(shaders.pri)
include(sprite_nodes.pri)
include(support.pri)
include(text_input_node.pri)
include(textures.pri)
include(tilemap_parallax_nodes.pri)
include(touch_dispatcher.pri)

CONFIG += static

CONFIG(debug, debug|release) {
    OBJECTS_DIR = debug/
    DESTDIR = ../../../Debug.qt
}

CONFIG(release, debug|release) {
    OBJECTS_DIR = release/
    DESTDIR = ../../../Release.qt
}

INCLUDEPATH += \
    ../platform/qt \
    ../platform \
    ../include \
    ..

SOURCES += \
    ../cocos2d.cpp \
    ../CCCamera.cpp \
    ../CCConfiguration.cpp \
    ../CCDirector.cpp \
    ../CCScheduler.cpp

HEADERS += \
    ../CCCamera.h \
    ../CCConfiguration.h \
    ../CCDirector.h \
    ../CCScheduler.h \
    ../include/ccConfig.h \
    ../include/CCEventType.h \
    ../include/ccMacros.h  \
    ../include/CCProtocols.h \
    ../include/ccTypeInfo.h \
    ../include/ccTypes.h \
    ../include/cocos2d.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

unix: {
    INCLUDEPATH += \
        /usr/include \
        /usr/local/include \
        /usr/local/opt/libxml2/include/libxml2 \

    LIBS += -L/usr/local/lib -lpng
    LIBS += -L/usr/local/lib/ -ltiff
    LIBS += -L/usr/local/lib/ -ljpeg
    LIBS += -L/usr/local/lib/ -lxml2
    LIBS += -L/usr/local/lib/ -lz
    LIBS += -L/usr/local/lib/ -lcurl
}

OTHER_FILES +=


