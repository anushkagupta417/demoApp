#include "naive.h"
#include "ui_naive.h"
#include "linear_reg.h"

Naive::Naive(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Naive)
{
    ui->setupUi(this);
    x = nullptr;
    t =nullptr;
//    w= nullptr;

}

Naive::~Naive()
{
    delete ui;
    if(x)
        delete x;
    if(t)
        delete t;
//    if(w)
//        delete w;

}





void Naive::on_PushButton_10_clicked()
{
    this->setVisible(false);
    if(!x)
        x=new linear_reg();
    x->setVisible(true);
}


void Naive::on_PushButton_11_clicked()
{
    this->setVisible(false);
    if(!t)
        t=new Tf_Idf();
    t->setVisible(true);
}


//void Naive::on_PushButton_8_clicked()
//{
//    this->setVisible(false);
//    if(!w)
//        w=new Tf_Idf();
//    w->setVisible(true);
//}

