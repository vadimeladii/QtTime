#include "timemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimeMainWindow w;
    w.show();

    return a.exec();
}
