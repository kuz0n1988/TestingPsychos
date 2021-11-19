#include "buildinginprogress.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    buildingInProgress w;
    w.setWindowTitle("Главное окно");
    w.show();

    return a.exec();
}
