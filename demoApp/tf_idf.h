#ifndef TF_IDF_H
#define TF_IDF_H

#include <QWidget>

namespace Ui {
class Tf_Idf;
}

class Tf_Idf : public QWidget
{
    Q_OBJECT

public:
    explicit Tf_Idf(QWidget *parent = nullptr);
    ~Tf_Idf();

private:
    Ui::Tf_Idf *ui;
};

#endif // TF_IDF_H
