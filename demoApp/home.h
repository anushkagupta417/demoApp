#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include "widget.h"
namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_PushButton_8_clicked();

private:
    Ui::Home *ui;
    Widget w;
};

#endif // HOME_H
