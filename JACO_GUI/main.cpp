#include "jaco_kinova.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jaco_kinova w;
    w.show();

    return a.exec();
}
