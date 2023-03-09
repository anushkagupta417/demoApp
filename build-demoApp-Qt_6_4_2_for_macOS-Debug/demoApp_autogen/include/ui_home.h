/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
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

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(841, 740);
        scrollArea = new QScrollArea(Home);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-10, -10, 921, 751));
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color:rgba(20, 23, 38, 224)"));
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

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Form", nullptr));
        PushButton_7->setText(QCoreApplication::translate("Home", "About", nullptr));
        PushButton_8->setText(QCoreApplication::translate("Home", "KNN", nullptr));
        PushButton_9->setText(QCoreApplication::translate("Home", "Naive Bayes", nullptr));
        PushButton_10->setText(QCoreApplication::translate("Home", "Logistic Regression", nullptr));
        PushButton_11->setText(QCoreApplication::translate("Home", "TF/IDF", nullptr));
        Instructor_3->setText(QCoreApplication::translate("Home", "Instructor Solution", nullptr));
        label_7->setText(QCoreApplication::translate("Home", "JMLP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
