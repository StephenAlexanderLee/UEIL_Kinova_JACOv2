#include "robot.h"
#include "ui_robot.h"

robot::robot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::robot)
{
    ui->setupUi(this);
}

robot::~robot()
{
    delete ui;
}
