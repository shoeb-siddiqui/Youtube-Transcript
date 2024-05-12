/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *pushButton;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Register_2;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *email;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *user_name_line;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *pass_line;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(452, 334);
        Register->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1, 1, 441, 91));
        pushButton->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
"\n"
"	font: 12pt \"Algerian\";\n"
"color: rgb(85, 0, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/add-friend.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(100, 100));
        label_5 = new QLabel(Register);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(121, 11, 19, 59));
        widget = new QWidget(Register);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 270, 202, 41));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        Register_2 = new QPushButton(widget);
        Register_2->setObjectName(QStringLiteral("Register_2"));
        Register_2->setStyleSheet(QLatin1String(" QPushButton{\n"
"	color: rgb(255, 255, 0);\n"
"\n"
"background: transparent;\n"
" border: none;\n"
"\n"
"	font: 20pt \"Algerian\";\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout_4->addWidget(Register_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        widget1 = new QWidget(Register);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 110, 451, 141));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 16pt \"Algerian\";\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_3->addWidget(label_3);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_6);

        email = new QLineEdit(widget1);
        email->setObjectName(QStringLiteral("email"));
        email->setStyleSheet(QLatin1String("QLineEdit {  border: 2px solid gray;\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"border-radius: 5px;}"));

        horizontalLayout_3->addWidget(email);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 16pt \"Algerian\";\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(label);

        user_name_line = new QLineEdit(widget1);
        user_name_line->setObjectName(QStringLiteral("user_name_line"));
        user_name_line->setStyleSheet(QLatin1String("QLineEdit {  border: 2px solid gray;\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 87 10pt \"Arial Black\";\n"
"border-radius: 5px;}"));

        horizontalLayout->addWidget(user_name_line);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 16pt \"Algerian\";\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(label_2);

        pass_line = new QLineEdit(widget1);
        pass_line->setObjectName(QStringLiteral("pass_line"));
        pass_line->setStyleSheet(QLatin1String("QLineEdit {  border: 2px solid gray;\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 87 10pt \"Arial Black\";\n"
"border-radius: 5px;}"));

        horizontalLayout_2->addWidget(pass_line);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Singup", Q_NULLPTR));
        pushButton->setText(QString());
        label_5->setText(QString());
        Register_2->setText(QApplication::translate("Register", "Register", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "Email", Q_NULLPTR));
        label_6->setText(QApplication::translate("Register", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
