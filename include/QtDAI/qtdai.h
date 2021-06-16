/****************************************************************************
 *                                                                          *
 * Copyright (C) 2001 ~ 2016 Neutrino International Inc.                    *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 * Discrete Approximate Inference for Qt                                    *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_DAI_H
#define QT_DAI_H

#include <QtCore>
#include <QtNetwork>
#include <QtSql>
#ifndef QT_STATIC
#include <QtScript>
#endif
#include <Essentials>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTDAI_LIB)
#    define Q_DAI_EXPORT Q_DECL_EXPORT
#  else
#    define Q_DAI_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_DAI_EXPORT
#endif

class Q_DAI_EXPORT QtDAI
{
  public:

    explicit QtDAI (void);
    virtual ~QtDAI (void);

  protected:

  private:

} ;

QT_END_NAMESPACE

#endif
