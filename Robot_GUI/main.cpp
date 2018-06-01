#include "robot.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    robot w;
    w.show();

    return a.exec();
}
