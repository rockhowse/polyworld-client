#include "polyworldclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PolyworldClient w;
    w.show();

    return a.exec();
}
