#include "tf_idf.h"
#include "ui_tf_idf.h"

Tf_Idf::Tf_Idf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tf_Idf)
{
    ui->setupUi(this);
}

Tf_Idf::~Tf_Idf()
{
    delete ui;
}
