/********************************************************************************
** Form generated from reading UI file 'untitled.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNTITLED_H
#define UI_UNTITLED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *hoursIndicator;
    QDial *hoursDial;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *minutesIndicator;
    QDial *minutesDial;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(541, 432);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyForm->sizePolicy().hasHeightForWidth());
        MyForm->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(MyForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MyForm);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        hoursIndicator = new QLCDNumber(MyForm);
        hoursIndicator->setObjectName(QString::fromUtf8("hoursIndicator"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(hoursIndicator->sizePolicy().hasHeightForWidth());
        hoursIndicator->setSizePolicy(sizePolicy1);
        hoursIndicator->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(hoursIndicator);

        hoursDial = new QDial(MyForm);
        hoursDial->setObjectName(QString::fromUtf8("hoursDial"));
        sizePolicy1.setHeightForWidth(hoursDial->sizePolicy().hasHeightForWidth());
        hoursDial->setSizePolicy(sizePolicy1);
        hoursDial->setMaximum(23);

        verticalLayout->addWidget(hoursDial);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(MyForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        minutesIndicator = new QLCDNumber(MyForm);
        minutesIndicator->setObjectName(QString::fromUtf8("minutesIndicator"));
        sizePolicy.setHeightForWidth(minutesIndicator->sizePolicy().hasHeightForWidth());
        minutesIndicator->setSizePolicy(sizePolicy);
        minutesIndicator->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(minutesIndicator);

        minutesDial = new QDial(MyForm);
        minutesDial->setObjectName(QString::fromUtf8("minutesDial"));
        sizePolicy1.setHeightForWidth(minutesDial->sizePolicy().hasHeightForWidth());
        minutesDial->setSizePolicy(sizePolicy1);
        minutesDial->setMaximum(59);

        verticalLayout_2->addWidget(minutesDial);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);


        retranslateUi(MyForm);
        QObject::connect(minutesDial, SIGNAL(valueChanged(int)), minutesIndicator, SLOT(display(int)));
        QObject::connect(hoursDial, SIGNAL(valueChanged(int)), hoursIndicator, SLOT(display(int)));
        QObject::connect(pushButton, SIGNAL(released()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("MyForm", "Hours", nullptr));
        label_2->setText(QCoreApplication::translate("MyForm", "Minutes", nullptr));
        pushButton->setText(QCoreApplication::translate("MyForm", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNTITLED_H
