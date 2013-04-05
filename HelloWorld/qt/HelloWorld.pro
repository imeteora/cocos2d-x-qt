QT       += core gui opengl

TARGET = HelloWorld
TEMPLATE = app

CONFIG(debug, debug|release) {
    DESTDIR = ../../Debug.qt
}

CONFIG(release, debug|release) {
    DESTDIR = ../../Release.qt
}

win32 {
    LIBS += -L$(DESTDIR) -llibcocos2d
}

unix {
    #LIBS += -L$(DESTDIR) -lcocos2d
    LIBS += -L$(DESTDIR) -lcocos2d
    LIBS += -L/Opt/local/lib/ -lpng
    LIBS += -L/Opt/local/lib/ -ljpeg
    LIBS += -L/usr/lib/ -lxml2
    LIBS += -L/Opt/local/lib/ -lz
    LIBS += -L/Opt/local/lib/ -lcurl
}

DEFINES += CC_UNDER_QT

INCLUDEPATH += ../../cocos2dx/platform \
        ../../cocos2dx/include \
        ../../cocos2dx \
        ../../HelloWorld/Classes

HEADERS += \
    ../Classes/HelloWorldScene.h \
    ../Classes/AppDelegate.h

SOURCES += \
    ../Classes/HelloWorldScene.cpp \
    ../Classes/AppDelegate.cpp \
    main.cpp

OTHER_FILES += \
    ../Resources/fonts/Marker Felt.ttf
