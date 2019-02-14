#include "goemetry.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Goemetry w;
    w.show();

    return a.exec();
}
