NAME         = QtDAI
TARGET       = $${NAME}

QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}
QT          += network
QT          += sql
QT          += Essentials
QT          += QtGMP
QT          += QtGSL

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/$${NAME}
INCLUDEPATH += $${PWD}/gmp
INCLUDEPATH += boost/tr1

HEADERS     += $${PWD}/../../include/$${NAME}/qtdai.h

SOURCES     += $${PWD}/nDAI.cpp
OTHER_FILES += $${PWD}/src/*
OTHER_FILES += $${PWD}/src/gmp/*
OTHER_FILES += $${PWD}/src/matlab/*
OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
