#include "Utils.h"

Utils::Utils() {}

void Utils::logMessage(const QString &lfile,const QString &message)
{
    QFile file(lfile);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << QDateTime::currentDateTime().toString(Qt::ISODate)
            << " - " << message << "\n";
        file.close();
    } else {
        qWarning() << "Could not open log file:" << lfile;
    }
}
