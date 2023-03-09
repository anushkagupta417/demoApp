#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
//    w=nullptr;
}

Home::~Home()
{
    delete ui;
//    if(w)
//        delete w;
}

void Home::on_PushButton_8_clicked()
{
//    this->setVisible(false);
//    if(!w)
//        w=new Widget();
//    w->setVisible()
}

