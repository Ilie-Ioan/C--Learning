QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcar.cpp \
    book_car.cpp \
    main.cpp \
    login.cpp \
    mainmenu.cpp

HEADERS += \
    addcar.h \
    book_car.h \
    login.h \
    mainmenu.h

FORMS += \
    addcar.ui \
    book_car.ui \
    login.ui \
    mainmenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
