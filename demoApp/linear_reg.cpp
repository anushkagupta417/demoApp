#include "linear_reg.h"
#include "ui_linear_reg.h"

linear_reg::linear_reg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::linear_reg)
{
    ui->setupUi(this);
//    n=nullptr;
}

linear_reg::~linear_reg()
{
    delete ui;
//    if(n)
//        delete n;
}

//void linear_reg::on_PushButton_10_clicked()
//{
//    this->setVisible(false);
//    if(!n)
//        n= new Naive();
//    n->setVisible(true);
//}

