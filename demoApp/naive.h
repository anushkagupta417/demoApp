#ifndef NAIVE_H
#define NAIVE_H
#include <QWidget>
#include "linear_reg.h"
#include "tf_idf.h"
namespace Ui {
class Naive;
}

class Naive : public QWidget
{
    Q_OBJECT

public:
    explicit Naive(QWidget *parent = nullptr);
    ~Naive();

private slots:
    //void on_PushButton_8_clicked();

    void on_PushButton_10_clicked();

    void on_PushButton_11_clicked();

    //void on_PushButton_8_clicked();

private:
    Ui::Naive *ui;
    linear_reg *x;
    Tf_Idf *t;
    //Widget *w;

};

#endif // NAIVE_H
