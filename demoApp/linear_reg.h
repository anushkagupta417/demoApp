#ifndef LINEAR_REG_H
#define LINEAR_REG_H

#include <QWidget>
//#include "naive.h"
namespace Ui {
class linear_reg;
}

class linear_reg : public QWidget
{
    Q_OBJECT

public:
    explicit linear_reg(QWidget *parent = nullptr);
    ~linear_reg();

private slots:

    //void on_PushButton_10_clicked();

private:
    Ui::linear_reg *ui;
//    Naive *n;
};

#endif // LINEAR_REG_H
