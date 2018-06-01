#include "jaco_kinova.h"
#include "ui_jaco_kinova.h"
#include <QProcess>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStringBuilder>
#include <QtGlobal>
#include <QMessageBox>
#include <QMessageLogContext>

bool initialized = false;



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

void myMessageHandler(QtMsgType, const QMessageLogContext &, const QString &);

void jaco_kinova::on_pushButton_clicked()
{

    QString program = "roscore";

    QProcess *coreprocess = new QProcess;
    coreprocess->start(program);

    QProcess *process = new QProcess;
    process->startDetached("/bin/bash",QStringList() << "/home/bamboo/git-repos/UEIL_Kinova_JACOv2/JACO_GUI/src/initialize.sh");
    process->waitForFinished();

    QString output = process->readAllStandardOutput();

    ui->textEdit->append("hi");

    initialized = true;
}

void jaco_kinova::on_pushButton_3_released()
{
    system("rosnode kill -a");
    initialized = false;

}

void jaco_kinova::on_pushButton_4_toggled(bool checked)
{
    if(initialized)
    {
        if (checked)
        {
            QProcess process1;

            system("sleep 0.75");
            process1.startDetached("rosservice call /j2s6s300_driver/in/set_torque_control_mode \"state: 1\"");
            process1.waitForFinished();

        }
        else
        {
            QProcess process2;

            system("sleep 0.75");
            process2.startDetached("rosservice call /j2s6s300_driver/in/set_torque_control_mode \"state: 0\"");
            process2.waitForFinished();

        }
    }
    else
    {
        qDebug()<<"robot not initialized";
    }
}

void jaco_kinova::on_pushButton_2_clicked()
{

    double arg1 = ui ->x_size->value();
    double arg2 = ui ->y_size->value();
    double arg3 = ui ->z_size->value();
    double arg4 = ui -> time_bt ->value();
    double arg5 = ui->x_step->value();
    double arg6 = ui->y_step->value();
    double arg7 = ui->z_step->value();
    double arg8 = ui->theta->value();
    double arg9 = ui->phi->value();
    double arg10 = ui->psi->value();

    QString x = QString("%1").arg(arg1/100,     0, 'g', 4);
    QString y = QString("%1").arg(arg2/100,     0, 'g', 4);
    QString z = QString("%1").arg(arg3/100,     0, 'g', 4);
    QString xn = QString("%1").arg(arg5,        0, 'g', 4);
    QString yn = QString("%1").arg(arg6,        0, 'g', 4);
    QString zn = QString("%1").arg(arg7,        0, 'g', 4);
    QString time_bt = QString("%1").arg(arg4,   0, 'g', 4);
    QString theta = QString("%1").arg(arg8,     0, 'g', 4);
    QString phi = QString("%1").arg(arg9,       0, 'g', 4);
    QString psi = QString("%1").arg(arg10,      0, 'g', 4);

    QProcess *process = new QProcess;
    process->startDetached("/bin/sh", QStringList() << "/home/bamboo/git-repos/UEIL_Kinova_JACOv2/JACO_GUI/src/raster.sh" << time_bt << x << y << z << xn << yn << zn << theta << phi << psi);
    process->waitForFinished();
    qDebug() << process->readAllStandardOutput();

}

void jaco_kinova::on_pushButton_5_clicked()
{
    QProcess process;
    process.startDetached("rosservice call /j2s6s300_driver/in/home_arm");
    process.waitForFinished();
}


void jaco_kinova::on_pushButton_10_clicked()
{
    double arg1 = ui->x_jog->value();
    double arg2 = ui->y_jog->value();
    double arg3 = ui->z_jog->value();
    double arg4 = ui->theta->value();
    double arg5 = ui->phi->value();
    double arg6 = ui->psi->value();

    QString x = QString("%1").arg(arg1/100, 0, 'g',4);
    QString y = QString("%1").arg(arg2/100, 0, 'g',4);
    QString z = QString("%1").arg(arg3/100, 0, 'g',4);
    QString theta = QString("%1").arg(arg4, 0, 'g',4);
    QString phi = QString("%1").arg(arg5, 0, 'g',4);
    QString psi = QString("%1").arg(arg6, 0, 'g',4);


    if (initialized)
    {
    QProcess *process = new QProcess;
    process->startDetached("/bin/sh", QStringList() << "/home/bamboo/git-repos/UEIL_Kinova_JACOv2/JACO_GUI/src/move.sh" << x << y << z << theta << phi << psi);
    process->waitForFinished();
    qDebug() << process->readAllStandardOutput();
    }
    else
    {
        qDebug() << "Robot not initialized";
    }

    ui->x_jog->setValue(0);
    ui->y_jog->setValue(0);
    ui->z_jog->setValue(0);
    ui->theta->setValue(0);
    ui->phi->setValue(0);
    ui->psi->setValue(0);
}
