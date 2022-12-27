/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *vermellButton;
    QSpacerItem *verticalSpacer_1;
    QRadioButton *verdButton;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *blauButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *Vermell;
    QSpacerItem *verticalSpacer;
    QLabel *Verd;
    QSpacerItem *verticalSpacer_3;
    QLabel *Blau;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(549, 380);
        verticalLayout_3 = new QVBoxLayout(MyForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vermellButton = new QRadioButton(MyForm);
        vermellButton->setObjectName(QString::fromUtf8("vermellButton"));

        verticalLayout->addWidget(vermellButton);

        verticalSpacer_1 = new QSpacerItem(13, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_1);

        verdButton = new QRadioButton(MyForm);
        verdButton->setObjectName(QString::fromUtf8("verdButton"));

        verticalLayout->addWidget(verdButton);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        blauButton = new QRadioButton(MyForm);
        blauButton->setObjectName(QString::fromUtf8("blauButton"));

        verticalLayout->addWidget(blauButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Vermell = new QLabel(MyForm);
        Vermell->setObjectName(QString::fromUtf8("Vermell"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Vermell->sizePolicy().hasHeightForWidth());
        Vermell->setSizePolicy(sizePolicy);
        Vermell->setMinimumSize(QSize(100, 0));
        Vermell->setStyleSheet(QString::fromUtf8("background-color:rgb(224, 27, 36)"));
        Vermell->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Vermell);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        Verd = new QLabel(MyForm);
        Verd->setObjectName(QString::fromUtf8("Verd"));
        sizePolicy.setHeightForWidth(Verd->sizePolicy().hasHeightForWidth());
        Verd->setSizePolicy(sizePolicy);
        Verd->setMinimumSize(QSize(70, 0));
        Verd->setStyleSheet(QString::fromUtf8("background-color:lightgreen"));
        Verd->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Verd);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        Blau = new QLabel(MyForm);
        Blau->setObjectName(QString::fromUtf8("Blau"));
        Blau->setEnabled(true);
        sizePolicy.setHeightForWidth(Blau->sizePolicy().hasHeightForWidth());
        Blau->setSizePolicy(sizePolicy);
        Blau->setMinimumSize(QSize(100, 0));
        Blau->setStyleSheet(QString::fromUtf8("background-color:blue"));
        Blau->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Blau);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        exitButton = new QPushButton(MyForm);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        gridLayout->addWidget(exitButton, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        retranslateUi(MyForm);
        QObject::connect(exitButton, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(verdButton, SIGNAL(clicked(bool)), Verd, SLOT(setDisabled(bool)));
        QObject::connect(verdButton, SIGNAL(clicked(bool)), Blau, SLOT(setEnabled(bool)));
        QObject::connect(blauButton, SIGNAL(clicked(bool)), Verd, SLOT(setEnabled(bool)));
        QObject::connect(blauButton, SIGNAL(clicked(bool)), Blau, SLOT(setDisabled(bool)));
        QObject::connect(verdButton, SIGNAL(clicked(bool)), Vermell, SLOT(setEnabled(bool)));
        QObject::connect(blauButton, SIGNAL(clicked(bool)), Vermell, SLOT(setEnabled(bool)));
        QObject::connect(vermellButton, SIGNAL(clicked(bool)), Vermell, SLOT(setDisabled(bool)));
        QObject::connect(vermellButton, SIGNAL(clicked(bool)), Verd, SLOT(setEnabled(bool)));
        QObject::connect(vermellButton, SIGNAL(clicked(bool)), Blau, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "Form", nullptr));
        vermellButton->setText(QCoreApplication::translate("MyForm", "Vermell", nullptr));
        verdButton->setText(QCoreApplication::translate("MyForm", "Verd", nullptr));
        blauButton->setText(QCoreApplication::translate("MyForm", "Blau", nullptr));
        Vermell->setText(QCoreApplication::translate("MyForm", "VERMELL", nullptr));
        Verd->setText(QCoreApplication::translate("MyForm", "VERD", nullptr));
        Blau->setText(QCoreApplication::translate("MyForm", "BLAU", nullptr));
        exitButton->setText(QCoreApplication::translate("MyForm", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
