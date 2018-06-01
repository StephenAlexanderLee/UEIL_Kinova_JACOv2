#ifndef JACO_KINOVA_H
#define JACO_KINOVA_H
extern bool initialized;
#include <QMainWindow>

namespace Ui {
class jaco_kinova;
}

class jaco_kinova : public QMainWindow
{
    Q_OBJECT

public:
    explicit jaco_kinova(QWidget *parent = 0);
    ~jaco_kinova();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_released();

    void on_pushButton_4_toggled(bool checked);

    void on_pushButton_2_clicked();


    void on_pushButton_5_clicked();


    void on_pushButton_10_clicked();

private:
    Ui::jaco_kinova *ui;

};



#endif // JACO_KINOVA_H
