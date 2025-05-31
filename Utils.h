#ifndef UTILS_H
#define UTILS_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QDebug>

class Utils
{
public:
    Utils();
    static void logMessage(const QString &file, const QString &message);
};

#endif // UTILS_H
