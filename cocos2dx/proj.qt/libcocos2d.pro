#-------------------------------------------------
#
# Project created by QtCreator 2011-12-31T10:49:00
#
#-------------------------------------------------

QT       += core gui opengl

TEMPLATE = lib

include(actions.pri)
include(base_nodes.pri)
include(cocoa.pri)
include(effects.pri)
include(extensions.pri)
include(keypad_dispatcher.pri)
include(label_nodes.pri)
include(layers_scenes_transitions_nodes.pri)
include(menu_nodes.pri)
include(misc_nodes.pri)
include(particle_nodes.pri)
include(platform.pri)
include(script_support.pri)
include(sprite_nodes.pri)
include(support.pri)
include(text_input_node.pri)
include(textures.pri)
include(tileMap_parallax_nodes.pri)
include(touch_dispatcher.pri)

win32 {
    TARGET = libcocos2d

    # You may need to change this include directory
    DEFINES += WIN32
    DEFINES += _WINDOWS
    INCLUDEPATH += \
            ../platform/third_party/win32/iconv \
            ../platform/third_party/win32/zlib \
            ../platform/third_party/win32/libjpeg \
            ../platform/third_party/win32/libpng \
            ../platform/third_party/win32/pthread \
            ../platform/third_party/win32/libxml2

    #LIBS += -lglew32
    LIBS += -lopengl32
    LIBS += -L../platform/third_party/win32/libraries -llibxml2
    LIBS += -L../platform/third_party/win32/libraries -llibpng
    LIBS += -L../platform/third_party/win32/libraries -llibzlib
    LIBS += -L../platform/third_party/win32/libraries -llibjpeg
    LIBS += -L../platform/third_party/win32/libraries -llibiconv
    LIBS += -L../platform/third_party/win32/libraries -lpthreadVCE2
}

unix {
    TARGET = cocos2d

    INCLUDEPATH += ../platform/third_party/linux/include \
            /opt/local/include \
            /usr/include/libxml2 \
            ../../cocos2dx

#    LIBS += -L/opt/local/lib/ -lpng
    LIBS += -L../platform/third_party/linux/libraries -lpng
    LIBS += -L/opt/local/lib/ -ljpeg
    LIBS += -L/usr/lib/ -lxml2
    #LIBS += -L/usr/local/lib/ -lGLEW
    LIBS += -L/opt/local/lib/ -lz
    LIBS += -L/opt/local/lib/ -lcurl
}

DEFINES += _USRDLL
DEFINES += __QT__
DEFINES += CC_UNDER_QT

DEFINES += COCOS2D_DEBUG=1
#DEFINES += CC_SPRITE_DEBUG_DRAW=2

INCLUDEPATH += ../platform \
        ../include \
        ..

CONFIG += static

CONFIG(debug, debug|release) {
    OBJECTS_DIR = debug/
    DESTDIR = ../../Debug.qt
}

CONFIG(release, debug|release) {
    OBJECTS_DIR = release/
    DESTDIR = ../../Release.qt
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

HEADERS += \
    ../CCConfiguration.h \
    ../CCCocos2DHelper.h

SOURCES += \
    ../cocos2d.cpp \
    ../CCScheduler.cpp \
    ../CCDrawingPrimitives.cpp \
    ../CCDirector.cpp \
    ../CCConfiguration.cpp \
    ../CCCamera.cpp \
    ../CCCocos2DHelper.cpp
