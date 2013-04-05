include(data_support.pri)
include(image_support.pri)
include(zip_support.pri)

HEADERS += \
    ../support/TransformUtils.h \
    ../support/ccUtils.h \
    ../support/CCProfiling.h \
    ../support/base64.h

SOURCES += \
    ../support/TransformUtils.cpp \
    ../support/ccUtils.cpp \
    ../support/CCUserDefault.cpp \
    ../support/CCProfiling.cpp \
    ../support/CCPointExtension.cpp \
    ../support/CCArray.cpp \
    ../support/base64.cpp
