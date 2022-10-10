QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../s21_calc.c \
    dialog.cpp \
    form.cpp \
    main.cpp \
    qcustomplot.cpp \
    smart_calc.cpp

HEADERS += \
    ../s21_calc.h \
    dialog.h \
    form.h \
    qcustomplot.h \
    smart_calc.h

FORMS += \
    dialog.ui \
    form.ui \
    smart_calc.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
