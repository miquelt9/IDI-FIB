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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conversor
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nombreLabel;
    QSpinBox *numberBox;
    QDial *dial;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *binariLabel;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *binLCD;
    QHBoxLayout *horizontalLayout_2;
    QLabel *octalLabel;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *octalLCD;
    QHBoxLayout *horizontalLayout_3;
    QLabel *hexaLabel;
    QSpacerItem *horizontalSpacer_3;
    QLCDNumber *hexaLCD;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QPushButton *exitButton;

    void setupUi(QWidget *Conversor)
    {
        if (Conversor->objectName().isEmpty())
            Conversor->setObjectName(QString::fromUtf8("Conversor"));
        Conversor->resize(618, 507);
        gridLayout_2 = new QGridLayout(Conversor);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nombreLabel = new QLabel(Conversor);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        horizontalLayout_4->addWidget(nombreLabel);

        numberBox = new QSpinBox(Conversor);
        numberBox->setObjectName(QString::fromUtf8("numberBox"));

        horizontalLayout_4->addWidget(numberBox);

        dial = new QDial(Conversor);
        dial->setObjectName(QString::fromUtf8("dial"));

        horizontalLayout_4->addWidget(dial);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        binariLabel = new QLabel(Conversor);
        binariLabel->setObjectName(QString::fromUtf8("binariLabel"));
        binariLabel->setStyleSheet(QString::fromUtf8("color:green"));

        horizontalLayout->addWidget(binariLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        binLCD = new QLCDNumber(Conversor);
        binLCD->setObjectName(QString::fromUtf8("binLCD"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(binLCD->sizePolicy().hasHeightForWidth());
        binLCD->setSizePolicy(sizePolicy);
        binLCD->setMinimumSize(QSize(100, 30));
        binLCD->setStyleSheet(QString::fromUtf8("color:white; background-color:green"));
        binLCD->setDigitCount(10);
        binLCD->setMode(QLCDNumber::Bin);

        horizontalLayout->addWidget(binLCD);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        octalLabel = new QLabel(Conversor);
        octalLabel->setObjectName(QString::fromUtf8("octalLabel"));
        octalLabel->setStyleSheet(QString::fromUtf8("color:blue"));

        horizontalLayout_2->addWidget(octalLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        octalLCD = new QLCDNumber(Conversor);
        octalLCD->setObjectName(QString::fromUtf8("octalLCD"));
        sizePolicy.setHeightForWidth(octalLCD->sizePolicy().hasHeightForWidth());
        octalLCD->setSizePolicy(sizePolicy);
        octalLCD->setMinimumSize(QSize(100, 30));
        octalLCD->setStyleSheet(QString::fromUtf8("color:white; background-color:blue"));
        octalLCD->setDigitCount(10);
        octalLCD->setMode(QLCDNumber::Oct);

        horizontalLayout_2->addWidget(octalLCD);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        hexaLabel = new QLabel(Conversor);
        hexaLabel->setObjectName(QString::fromUtf8("hexaLabel"));
        hexaLabel->setStyleSheet(QString::fromUtf8("color:red"));

        horizontalLayout_3->addWidget(hexaLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        hexaLCD = new QLCDNumber(Conversor);
        hexaLCD->setObjectName(QString::fromUtf8("hexaLCD"));
        sizePolicy.setHeightForWidth(hexaLCD->sizePolicy().hasHeightForWidth());
        hexaLCD->setSizePolicy(sizePolicy);
        hexaLCD->setMinimumSize(QSize(100, 30));
        hexaLCD->setStyleSheet(QString::fromUtf8("color:white; background-color:red"));
        hexaLCD->setDigitCount(10);
        hexaLCD->setMode(QLCDNumber::Hex);

        horizontalLayout_3->addWidget(hexaLCD);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        exitButton = new QPushButton(Conversor);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        gridLayout->addWidget(exitButton, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Conversor);
        QObject::connect(exitButton, SIGNAL(clicked()), Conversor, SLOT(close()));
        QObject::connect(numberBox, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), numberBox, SLOT(setValue(int)));
        QObject::connect(numberBox, SIGNAL(valueChanged(int)), binLCD, SLOT(display(int)));
        QObject::connect(numberBox, SIGNAL(valueChanged(int)), octalLCD, SLOT(display(int)));
        QObject::connect(numberBox, SIGNAL(valueChanged(int)), hexaLCD, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Conversor);
    } // setupUi

    void retranslateUi(QWidget *Conversor)
    {
        Conversor->setWindowTitle(QCoreApplication::translate("Conversor", "Form", nullptr));
        nombreLabel->setText(QCoreApplication::translate("Conversor", "Escriu un nombre natural:", nullptr));
        binariLabel->setText(QCoreApplication::translate("Conversor", "Binari", nullptr));
        octalLabel->setText(QCoreApplication::translate("Conversor", "Octal", nullptr));
        hexaLabel->setText(QCoreApplication::translate("Conversor", "Hexadecimal", nullptr));
        exitButton->setText(QCoreApplication::translate("Conversor", "Surt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Conversor: public Ui_Conversor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
