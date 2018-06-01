/********************************************************************************
** Form generated from reading UI file 'robot.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOT_H
#define UI_ROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_robot
{
public:
    QWidget *centralWidget;
    QPushButton *jog;
    QPushButton *terminate;
    QPushButton *initialize;
    QGroupBox *groupBox;
    QFrame *frame_3;
    QDoubleSpinBox *x_size;
    QDoubleSpinBox *y_size;
    QDoubleSpinBox *z_size;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_15;
    QDoubleSpinBox *x_step;
    QDoubleSpinBox *y_step;
    QDoubleSpinBox *z_step;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *time_bt;
    QLabel *label_23;
    QPushButton *raster;
    QProgressBar *progressBar;
    QLabel *label_18;
    QLabel *label;
    QGroupBox *groupBox_2;
    QFrame *frame_4;
    QDoubleSpinBox *x_jog;
    QDoubleSpinBox *y_jog;
    QDoubleSpinBox *z_jog;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QDoubleSpinBox *theta;
    QDoubleSpinBox *phi;
    QDoubleSpinBox *psi;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QPushButton *home;
    QPushButton *move;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *robot)
    {
        if (robot->objectName().isEmpty())
            robot->setObjectName(QStringLiteral("robot"));
        robot->resize(673, 559);
        centralWidget = new QWidget(robot);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        jog = new QPushButton(centralWidget);
        jog->setObjectName(QStringLiteral("jog"));
        jog->setGeometry(QRect(30, 80, 191, 51));
        QFont font;
        font.setPointSize(16);
        jog->setFont(font);
        jog->setCheckable(true);
        terminate = new QPushButton(centralWidget);
        terminate->setObjectName(QStringLiteral("terminate"));
        terminate->setGeometry(QRect(360, 410, 301, 61));
        terminate->setFont(font);
        initialize = new QPushButton(centralWidget);
        initialize->setObjectName(QStringLiteral("initialize"));
        initialize->setGeometry(QRect(30, 20, 191, 51));
        initialize->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 150, 311, 341));
        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 30, 301, 201));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        x_size = new QDoubleSpinBox(frame_3);
        x_size->setObjectName(QStringLiteral("x_size"));
        x_size->setGeometry(QRect(50, 40, 101, 27));
        x_size->setMinimum(-1000);
        x_size->setMaximum(1000);
        x_size->setSingleStep(0.5);
        x_size->setValue(0);
        y_size = new QDoubleSpinBox(frame_3);
        y_size->setObjectName(QStringLiteral("y_size"));
        y_size->setGeometry(QRect(50, 80, 101, 27));
        y_size->setMinimum(-1000);
        y_size->setMaximum(1000);
        y_size->setSingleStep(0.5);
        z_size = new QDoubleSpinBox(frame_3);
        z_size->setObjectName(QStringLiteral("z_size"));
        z_size->setGeometry(QRect(50, 120, 101, 27));
        z_size->setMinimum(-1000);
        z_size->setMaximum(1000);
        z_size->setSingleStep(0.5);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 40, 41, 20));
        label_8->setFont(font);
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 10, 151, 17));
        QFont font1;
        font1.setPointSize(11);
        label_14->setFont(font1);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 10, 111, 17));
        x_step = new QDoubleSpinBox(frame_3);
        x_step->setObjectName(QStringLiteral("x_step"));
        x_step->setGeometry(QRect(180, 40, 101, 27));
        x_step->setDecimals(0);
        x_step->setMinimum(0);
        x_step->setMaximum(100);
        x_step->setSingleStep(1);
        x_step->setValue(0);
        y_step = new QDoubleSpinBox(frame_3);
        y_step->setObjectName(QStringLiteral("y_step"));
        y_step->setGeometry(QRect(180, 80, 101, 27));
        y_step->setDecimals(0);
        y_step->setMinimum(0);
        y_step->setMaximum(100);
        y_step->setSingleStep(1);
        z_step = new QDoubleSpinBox(frame_3);
        z_step->setObjectName(QStringLiteral("z_step"));
        z_step->setGeometry(QRect(180, 120, 101, 27));
        z_step->setDecimals(0);
        z_step->setMinimum(0);
        z_step->setMaximum(100);
        z_step->setSingleStep(1);
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 80, 41, 20));
        label_16->setFont(font);
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 120, 41, 20));
        label_17->setFont(font);
        time_bt = new QDoubleSpinBox(frame_3);
        time_bt->setObjectName(QStringLiteral("time_bt"));
        time_bt->setGeometry(QRect(80, 160, 71, 27));
        time_bt->setSingleStep(0.5);
        label_23 = new QLabel(frame_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 160, 67, 17));
        raster = new QPushButton(groupBox);
        raster->setObjectName(QStringLiteral("raster"));
        raster->setGeometry(QRect(0, 240, 301, 41));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(0, 290, 301, 31));
        progressBar->setValue(0);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(310, 480, 351, 20));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 10, 281, 41));
        QFont font2;
        font2.setPointSize(24);
        font2.setUnderline(true);
        label->setFont(font2);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 120, 311, 251));
        frame_4 = new QFrame(groupBox_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 30, 301, 201));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        x_jog = new QDoubleSpinBox(frame_4);
        x_jog->setObjectName(QStringLiteral("x_jog"));
        x_jog->setGeometry(QRect(40, 40, 101, 27));
        x_jog->setMinimum(-1000);
        x_jog->setMaximum(1000);
        x_jog->setSingleStep(0.5);
        x_jog->setValue(0);
        y_jog = new QDoubleSpinBox(frame_4);
        y_jog->setObjectName(QStringLiteral("y_jog"));
        y_jog->setGeometry(QRect(40, 80, 101, 27));
        y_jog->setMinimum(-1000);
        y_jog->setMaximum(1000);
        y_jog->setSingleStep(0.5);
        z_jog = new QDoubleSpinBox(frame_4);
        z_jog->setObjectName(QStringLiteral("z_jog"));
        z_jog->setGeometry(QRect(40, 120, 101, 27));
        z_jog->setMinimum(-1000);
        z_jog->setMaximum(1000);
        z_jog->setSingleStep(0.5);
        label_24 = new QLabel(frame_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 40, 41, 20));
        label_24->setFont(font);
        label_25 = new QLabel(frame_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 10, 151, 17));
        label_25->setFont(font1);
        label_26 = new QLabel(frame_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(180, 10, 111, 17));
        theta = new QDoubleSpinBox(frame_4);
        theta->setObjectName(QStringLiteral("theta"));
        theta->setGeometry(QRect(190, 40, 101, 27));
        theta->setMinimum(-90);
        theta->setMaximum(90);
        theta->setSingleStep(1);
        theta->setValue(0);
        phi = new QDoubleSpinBox(frame_4);
        phi->setObjectName(QStringLiteral("phi"));
        phi->setGeometry(QRect(190, 80, 101, 27));
        phi->setMinimum(-90);
        phi->setMaximum(90);
        phi->setSingleStep(1);
        psi = new QDoubleSpinBox(frame_4);
        psi->setObjectName(QStringLiteral("psi"));
        psi->setGeometry(QRect(190, 120, 101, 27));
        psi->setMinimum(-90);
        psi->setMaximum(90);
        psi->setSingleStep(1);
        label_27 = new QLabel(frame_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 80, 41, 20));
        label_27->setFont(font);
        label_28 = new QLabel(frame_4);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 120, 41, 20));
        label_28->setFont(font);
        label_29 = new QLabel(frame_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(160, 120, 41, 20));
        label_29->setFont(font);
        label_30 = new QLabel(frame_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(160, 80, 41, 20));
        label_30->setFont(font);
        label_31 = new QLabel(frame_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(160, 40, 41, 20));
        label_31->setFont(font);
        home = new QPushButton(centralWidget);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(230, 20, 101, 111));
        move = new QPushButton(centralWidget);
        move->setObjectName(QStringLiteral("move"));
        move->setGeometry(QRect(360, 360, 301, 41));
        robot->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(robot);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 23));
        robot->setMenuBar(menuBar);
        mainToolBar = new QToolBar(robot);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        robot->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(robot);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        robot->setStatusBar(statusBar);

        retranslateUi(robot);
        QObject::connect(terminate, SIGNAL(clicked()), robot, SLOT(close()));

        QMetaObject::connectSlotsByName(robot);
    } // setupUi

    void retranslateUi(QMainWindow *robot)
    {
        robot->setWindowTitle(QApplication::translate("robot", "robot", 0));
        jog->setText(QApplication::translate("robot", "Jog Robot", 0));
        terminate->setText(QApplication::translate("robot", "Terminate Connection", 0));
        initialize->setText(QApplication::translate("robot", "Initialize Robot", 0));
        groupBox->setTitle(QApplication::translate("robot", "Enter Raster Scan Coordinates", 0));
        label_8->setText(QApplication::translate("robot", "X:", 0));
        label_14->setText(QApplication::translate("robot", "Scan Size [mm]", 0));
        label_15->setText(QApplication::translate("robot", "Points [n]", 0));
        label_16->setText(QApplication::translate("robot", "Y:", 0));
        label_17->setText(QApplication::translate("robot", "Z:", 0));
        label_23->setText(QApplication::translate("robot", "Time [s]", 0));
        raster->setText(QApplication::translate("robot", "Start Raster Scan", 0));
        label_18->setText(QApplication::translate("robot", "v1.0.0.1 - SAL 2018", 0));
        label->setText(QApplication::translate("robot", "Jaco Robot GUI", 0));
        groupBox_2->setTitle(QApplication::translate("robot", "Enter Raster Scan Coordinates", 0));
        label_24->setText(QApplication::translate("robot", "X:", 0));
        label_25->setText(QApplication::translate("robot", "Jog Axis [mm]", 0));
        label_26->setText(QApplication::translate("robot", "Jog Angle [deg]", 0));
        label_27->setText(QApplication::translate("robot", "Y:", 0));
        label_28->setText(QApplication::translate("robot", "Z:", 0));
        label_29->setText(QApplication::translate("robot", "\316\246:", 0));
        label_30->setText(QApplication::translate("robot", "\317\206:", 0));
        label_31->setText(QApplication::translate("robot", "\316\230:", 0));
        home->setText(QApplication::translate("robot", "Home", 0));
        move->setText(QApplication::translate("robot", "Move Robot", 0));
    } // retranslateUi

};

namespace Ui {
    class robot: public Ui_robot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOT_H
