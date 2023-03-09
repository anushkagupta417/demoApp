/********************************************************************************
** Form generated from reading UI file 'tf_idf.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TF_IDF_H
#define UI_TF_IDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tf_Idf
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *PushButton_2;
    QPushButton *PushButton_3;
    QPushButton *PushButton_4;
    QPushButton *PushButton_6;
    QPushButton *PushButton_5;
    QPushButton *Instructor_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *image_3;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Tf_Idf)
    {
        if (Tf_Idf->objectName().isEmpty())
            Tf_Idf->setObjectName("Tf_Idf");
        Tf_Idf->resize(994, 741);
        Tf_Idf->setStyleSheet(QString::fromUtf8("background-color:rgba(20, 23, 38, 224)"));
        scrollArea = new QScrollArea(Tf_Idf);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-10, 0, 921, 751));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 919, 749));
        verticalWidget = new QWidget(scrollAreaWidgetContents);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(-10, 0, 241, 991));
        verticalWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(14, 16, 27, 179);"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 17, -1, 216);
        PushButton_2 = new QPushButton(verticalWidget);
        PushButton_2->setObjectName("PushButton_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font.setPointSize(18);
        PushButton_2->setFont(font);
        PushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_2);

        PushButton_3 = new QPushButton(verticalWidget);
        PushButton_3->setObjectName("PushButton_3");
        PushButton_3->setFont(font);
        PushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_3);

        PushButton_4 = new QPushButton(verticalWidget);
        PushButton_4->setObjectName("PushButton_4");
        PushButton_4->setFont(font);
        PushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_4);

        PushButton_6 = new QPushButton(verticalWidget);
        PushButton_6->setObjectName("PushButton_6");
        PushButton_6->setFont(font);
        PushButton_6->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_6);

        PushButton_5 = new QPushButton(verticalWidget);
        PushButton_5->setObjectName("PushButton_5");
        PushButton_5->setFont(font);
        PushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_5);

        Instructor_2 = new QPushButton(verticalWidget);
        Instructor_2->setObjectName("Instructor_2");
        Instructor_2->setFont(font);
        Instructor_2->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(Instructor_2);

        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(240, -10, 1286, 741));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setPointSize(45);
        label_5->setFont(font1);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_5->setMargin(7);

        verticalLayout_5->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font2.setPointSize(19);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_6->setWordWrap(true);
        label_6->setMargin(7);

        verticalLayout_5->addWidget(label_6);

        image_3 = new QLabel(verticalLayoutWidget_2);
        image_3->setObjectName("image_3");
        image_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/Frame 2.png")));
        image_3->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        image_3->setMargin(7);

        verticalLayout_5->addWidget(image_3);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: purple;"));

        verticalLayout_5->addWidget(pushButton_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Tf_Idf);

        QMetaObject::connectSlotsByName(Tf_Idf);
    } // setupUi

    void retranslateUi(QWidget *Tf_Idf)
    {
        Tf_Idf->setWindowTitle(QCoreApplication::translate("Tf_Idf", "Form", nullptr));
        PushButton_2->setText(QCoreApplication::translate("Tf_Idf", "About", nullptr));
        PushButton_3->setText(QCoreApplication::translate("Tf_Idf", "KNN", nullptr));
        PushButton_4->setText(QCoreApplication::translate("Tf_Idf", "Naive Bayes", nullptr));
        PushButton_6->setText(QCoreApplication::translate("Tf_Idf", "Logistic Regression", nullptr));
        PushButton_5->setText(QCoreApplication::translate("Tf_Idf", "TF/IDF", nullptr));
        Instructor_2->setText(QCoreApplication::translate("Tf_Idf", "Instructor Solution", nullptr));
        label_5->setText(QCoreApplication::translate("Tf_Idf", "TF-IDF - Term Frequency-Inverse Document Frequency ", nullptr));
        label_6->setText(QCoreApplication::translate("Tf_Idf", "The k-nearest neighbors algorithm, also known as KNN or k-NN, is a non-parametric, supervised learning classifier, which uses proximity to make classifications or predictions about the grouping of an individual data point. While it can be used for either regression or classification problems, it is typically used as a classification algorithm, working off the assumption that similar points can be found near one another.\n"
"\n"
"", nullptr));
        image_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Tf_Idf", "START Practicing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tf_Idf: public Ui_Tf_Idf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TF_IDF_H
