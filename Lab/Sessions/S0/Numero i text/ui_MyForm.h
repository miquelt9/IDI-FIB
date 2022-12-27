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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *numeroLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *numeroEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *textEdit;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *clearButton;
    QPushButton *exitButton;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QString::fromUtf8("MyForm"));
        MyForm->resize(659, 600);
        verticalLayout_4 = new QVBoxLayout(MyForm);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        numeroLabel = new QLabel(MyForm);
        numeroLabel->setObjectName(QString::fromUtf8("numeroLabel"));

        horizontalLayout->addWidget(numeroLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        numeroEdit = new QLineEdit(MyForm);
        numeroEdit->setObjectName(QString::fromUtf8("numeroEdit"));
        numeroEdit->setStyleSheet(QString::fromUtf8("color:red"));

        horizontalLayout->addWidget(numeroEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textLabel = new QLabel(MyForm);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));

        horizontalLayout_2->addWidget(textLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        textEdit = new QLineEdit(MyForm);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("color:blue"));

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        clearButton = new QPushButton(MyForm);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout_2->addWidget(clearButton);

        exitButton = new QPushButton(MyForm);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        verticalLayout_2->addWidget(exitButton);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(MyForm);
        QObject::connect(clearButton, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(clearButton, SIGNAL(clicked()), numeroEdit, SLOT(clear()));
        QObject::connect(exitButton, SIGNAL(clicked()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QCoreApplication::translate("MyForm", "Form", nullptr));
        numeroLabel->setText(QCoreApplication::translate("MyForm", "N\303\272mero", nullptr));
        numeroEdit->setInputMask(QCoreApplication::translate("MyForm", "9999999999", nullptr));
        textLabel->setText(QCoreApplication::translate("MyForm", "Text", nullptr));
        textEdit->setInputMask(QCoreApplication::translate("MyForm", "AAAAAAAAAA", nullptr));
        textEdit->setText(QString());
        clearButton->setText(QCoreApplication::translate("MyForm", "Esborrar", nullptr));
        exitButton->setText(QCoreApplication::translate("MyForm", "Sortir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
