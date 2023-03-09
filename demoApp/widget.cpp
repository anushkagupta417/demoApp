#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>
#include <QPixMap>
#include <QScrollArea>
#include "naive.h"
#include "linear_reg.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QScrollArea scroll;
    scroll.setWidgetResizable(true);
    QPixmap pix("/Users/anushkagupta/Desktop/Frame 2.png");
    int w =ui->image_3->width();
    int h=ui->image_3->height();
    ui->image_3->setPixmap(pix.scaled(w*9.5,h*9.5,Qt::KeepAspectRatio));

    connect(ui->PushButton_4, &QPushButton::clicked, this, &Widget::on_PushButton_4_clicked);
    naive=nullptr;
    linear = nullptr;
    t=nullptr;
}

Widget::~Widget()
{
    delete ui;
    if(naive)
        delete naive;
    if(linear)
        delete linear;
    if(t)
        delete t;
}

//void setWidgetResizable(bool resizable);
//void Widget::on_pushButton_clicked()
//{
//    QMessageBox msg;
//    int x;
//    msg.setWindowTitle("testing window");
//    msg.setText("You clicked me");
//    x=msg.exec();

//}


void Widget::on_PushButton_4_clicked()
{

   this->setVisible(false);
    if(!naive)
        naive =new Naive();
    naive->setVisible(true);

}


void Widget::on_PushButton_6_clicked()
{
    this->setVisible(false);
     if(!linear)
         linear =new linear_reg();
     linear->setVisible(true);
}


void Widget::on_PushButton_5_clicked()
{
    this->setVisible(false);
    if(!t)
        t= new Tf_Idf();
    t->setVisible(true);
}


void Widget::on_Instructor_2_clicked()
{
    QMessageBox msg;
       int x;
       msg.setWindowTitle("testing window");
       msg.setText("You clicked me");
       x=msg.exec();
}

