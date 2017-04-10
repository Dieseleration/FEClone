#ifndef FECLONE_GLOBAL_H
#define FECLONE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FECLONE_LIBRARY)
#  define FECLONESHARED_EXPORT Q_DECL_EXPORT
#else
#  define FECLONESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FECLONE_GLOBAL_H
