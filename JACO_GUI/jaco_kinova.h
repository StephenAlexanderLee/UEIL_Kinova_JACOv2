#ifndef JACO_KINOVA_H
#define JACO_KINOVA_H

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

private:
    Ui::jaco_kinova *ui;
};

#endif // JACO_KINOVA_H
