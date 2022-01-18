#include "buildinginprogress.h"
#include "logfile.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qInstallMessageHandler(LogFile::messageToFile); // крепим логгирование в файл
    buildingInProgress w;
//    w.setWindowTitle("Главное окно");
    w.show();

    return a.exec();
}
