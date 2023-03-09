/********************************************************************************
** Form generated from reading UI file 'naive.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAIVE_H
#define UI_NAIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Naive
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PushButton_7;
    QPushButton *PushButton_8;
    QPushButton *PushButton_9;
    QPushButton *PushButton_10;
    QPushButton *PushButton_11;
    QPushButton *Instructor_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *image_4;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Naive)
    {
        if (Naive->objectName().isEmpty())
            Naive->setObjectName("Naive");
        Naive->resize(1098, 758);
        Naive->setStyleSheet(QString::fromUtf8("background-color:rgba(20, 23, 38, 224)"));
        scrollArea = new QScrollArea(Naive);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 921, 751));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 919, 749));
        verticalWidget_2 = new QWidget(scrollAreaWidgetContents_2);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(-10, -30, 241, 1011));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(14, 16, 27, 179);"));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(30, 17, -1, 216);
        PushButton_7 = new QPushButton(verticalWidget_2);
        PushButton_7->setObjectName("PushButton_7");
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font.setPointSize(18);
        PushButton_7->setFont(font);
        PushButton_7->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout_2->addWidget(PushButton_7);

        PushButton_8 = new QPushButton(verticalWidget_2);
        PushButton_8->setObjectName("PushButton_8");
        PushButton_8->setFont(font);
        PushButton_8->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout_2->addWidget(PushButton_8);

        PushButton_9 = new QPushButton(verticalWidget_2);
        PushButton_9->setObjectName("PushButton_9");
        PushButton_9->setFont(font);
        PushButton_9->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout_2->addWidget(PushButton_9);

        PushButton_10 = new QPushButton(verticalWidget_2);
        PushButton_10->setObjectName("PushButton_10");
        PushButton_10->setFont(font);
        PushButton_10->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout_2->addWidget(PushButton_10);

        PushButton_11 = new QPushButton(verticalWidget_2);
        PushButton_11->setObjectName("PushButton_11");
        PushButton_11->setFont(font);
        PushButton_11->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout_2->addWidget(PushButton_11);

        Instructor_3 = new QPushButton(verticalWidget_2);
        Instructor_3->setObjectName("Instructor_3");
        Instructor_3->setFont(font);
        Instructor_3->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout_2->addWidget(Instructor_3);

        verticalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents_2);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(240, -40, 785, 741));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(18, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName("label_7");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setPointSize(45);
        label_7->setFont(font1);
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_7->setMargin(7);

        verticalLayout_6->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName("label_8");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font2.setPointSize(19);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_8->setMargin(7);

        verticalLayout_6->addWidget(label_8);

        image_4 = new QLabel(verticalLayoutWidget_3);
        image_4->setObjectName("image_4");
        image_4->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/Frame 2.png")));
        image_4->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        image_4->setMargin(7);

        verticalLayout_6->addWidget(image_4);

        pushButton_4 = new QPushButton(verticalLayoutWidget_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: purple;"));

        verticalLayout_6->addWidget(pushButton_4);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(Naive);

        QMetaObject::connectSlotsByName(Naive);
    } // setupUi

    void retranslateUi(QWidget *Naive)
    {
        Naive->setWindowTitle(QCoreApplication::translate("Naive", "Form", nullptr));
        PushButton_7->setText(QCoreApplication::translate("Naive", "About", nullptr));
        PushButton_8->setText(QCoreApplication::translate("Naive", "KNN", nullptr));
        PushButton_9->setText(QCoreApplication::translate("Naive", "Naive Bayes", nullptr));
        PushButton_10->setText(QCoreApplication::translate("Naive", "Logistic Regression", nullptr));
        PushButton_11->setText(QCoreApplication::translate("Naive", "TF/IDF", nullptr));
        Instructor_3->setText(QCoreApplication::translate("Naive", "Instructor Solution", nullptr));
        label_7->setText(QCoreApplication::translate("Naive", "Naive Bayes Algorithm", nullptr));
        label_8->setText(QCoreApplication::translate("Naive", "The k-nearest neighbors algorithm, also known as KNN or k-NN, is a non-parametric, supervised learning classifier, which uses proximity to make classifications or predictions about the grouping of an individual data point. While it can be used for either regression or classification problems, it is typically used as a classification algorithm, working off the assumption that similar points can be found near one another.\n"
"\n"
"", nullptr));
        image_4->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Naive", "START Practicing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Naive: public Ui_Naive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAIVE_H
