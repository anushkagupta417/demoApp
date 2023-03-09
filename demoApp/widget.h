#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "naive.h"
#include "linear_reg.h"
#include "tf_idf.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_PushButton_4_clicked();

    void on_PushButton_6_clicked();

    void on_PushButton_5_clicked();

    void on_Instructor_2_clicked();

private:
    Ui::Widget *ui;
    Naive *naive;
    linear_reg *linear;
    Tf_Idf *t;
};
#endif // WIDGET_H
