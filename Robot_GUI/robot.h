#ifndef ROBOT_H
#define ROBOT_H

#include <QMainWindow>

namespace Ui {
class robot;
}

class robot : public QMainWindow
{
    Q_OBJECT

public:
    explicit robot(QWidget *parent = 0);
    ~robot();

private:
    Ui::robot *ui;
};

#endif // ROBOT_H
