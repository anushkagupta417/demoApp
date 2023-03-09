/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *PushButton_2;
    QPushButton *PushButton_3;
    QPushButton *PushButton_4;
    QPushButton *PushButton_6;
    QPushButton *PushButton_5;
    QPushButton *Instructor_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *image_3;
    QPushButton *pushButton_3;
    QLabel *label_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1024, 745);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font.setPointSize(18);
        Widget->setFont(font);
        Widget->setStyleSheet(QString::fromUtf8("background-color:rgba(20, 23, 38, 224)"));
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName("gridLayout_4");
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setAutoFillBackground(true);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 80, 998, 559));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setMaximumSize(QSize(1035, 559));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 970, 531));
        scrollAreaWidgetContents_2->setMaximumSize(QSize(970, 531));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 191, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PushButton_2 = new QPushButton(verticalLayoutWidget);
        PushButton_2->setObjectName("PushButton_2");
        PushButton_2->setFont(font);
        PushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_2);

        PushButton_3 = new QPushButton(verticalLayoutWidget);
        PushButton_3->setObjectName("PushButton_3");
        PushButton_3->setFont(font);
        PushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_3);

        PushButton_4 = new QPushButton(verticalLayoutWidget);
        PushButton_4->setObjectName("PushButton_4");
        PushButton_4->setFont(font);
        PushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_4);

        PushButton_6 = new QPushButton(verticalLayoutWidget);
        PushButton_6->setObjectName("PushButton_6");
        PushButton_6->setFont(font);
        PushButton_6->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_6);

        PushButton_5 = new QPushButton(verticalLayoutWidget);
        PushButton_5->setObjectName("PushButton_5");
        PushButton_5->setFont(font);
        PushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(PushButton_5);

        Instructor_2 = new QPushButton(verticalLayoutWidget);
        Instructor_2->setObjectName("Instructor_2");
        Instructor_2->setFont(font);
        Instructor_2->setStyleSheet(QString::fromUtf8("background-color:rgba(16, 20, 34, 222);"));

        verticalLayout->addWidget(Instructor_2);

        verticalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents_2);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(214, 10, 761, 521));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setPointSize(19);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_6->setWordWrap(true);
        label_6->setMargin(7);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        image_3 = new QLabel(verticalLayoutWidget_3);
        image_3->setObjectName("image_3");
        image_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/Frame 2.png")));
        image_3->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        image_3->setMargin(7);

        gridLayout_2->addWidget(image_3, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: purple;"));

        gridLayout_2->addWidget(pushButton_3, 10, 0, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font2.setPointSize(45);
        label_5->setFont(font2);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_5->setMargin(7);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(scrollArea_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        PushButton_2->setText(QCoreApplication::translate("Widget", "About", nullptr));
        PushButton_3->setText(QCoreApplication::translate("Widget", "KNN", nullptr));
        PushButton_4->setText(QCoreApplication::translate("Widget", "Naive Bayes", nullptr));
        PushButton_6->setText(QCoreApplication::translate("Widget", "Logistic Regression", nullptr));
        PushButton_5->setText(QCoreApplication::translate("Widget", "TF/IDF", nullptr));
        Instructor_2->setText(QCoreApplication::translate("Widget", "Instructor Solution", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "The k-nearest neighbors algorithm, also known as KNN or k-NN, is a non-parametric, supervised learning classifier, which uses proximity to make classifications or predictions about the grouping of an individual data point. While it can be used for either regression or classification problems, it is typically used as a classification algorithm, working off the assumption that similar points can be found near one another.\n"
"\n"
"", nullptr));
        image_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Widget", "START Practicing", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "KNN- K-Nearest Neighbors Algorithm.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
