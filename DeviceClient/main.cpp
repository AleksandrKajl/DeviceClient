#include "DeviceClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeviceClient w;
    w.show();
    return a.exec();
}
