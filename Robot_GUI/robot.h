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

private slots:
    void on_initialize_clicked();

    void on_terminate_clicked();

    void on_home_clicked();

    void on_jog_toggled(bool checked);

    void on_move_clicked();

    void on_raster_clicked();

private:
    Ui::robot *ui;
};

#endif // ROBOT_H
