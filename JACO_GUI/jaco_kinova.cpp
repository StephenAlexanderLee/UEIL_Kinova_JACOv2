#include "jaco_kinova.h"
#include "ui_jaco_kinova.h"

jaco_kinova::jaco_kinova(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jaco_kinova)
{
    ui->setupUi(this);
}

jaco_kinova::~jaco_kinova()
{
    delete ui;
}
