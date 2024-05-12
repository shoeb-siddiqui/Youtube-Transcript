/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *usernameStr;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *pswdStr;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Exit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Login_2;
    QPushButton *Register;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Forgot;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(611, 391);
        Login->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        layoutWidget_2 = new QWidget(Login);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(170, 110, 261, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 16pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_5);

        usernameStr = new QLineEdit(layoutWidget_2);
        usernameStr->setObjectName(QStringLiteral("usernameStr"));
        usernameStr->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        usernameStr->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(usernameStr);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 16pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_6);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pswdStr = new QLineEdit(layoutWidget_2);
        pswdStr->setObjectName(QStringLiteral("pswdStr"));
        pswdStr->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        pswdStr->setEchoMode(QLineEdit::Password);
        pswdStr->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(pswdStr);


        verticalLayout_2->addLayout(horizontalLayout_4);

        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(-4, 5, 611, 103));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Image/icons8-youtube-94.png")));
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 87 20pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 87 20pt \"Arial Black\";\n"
"\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Exit = new QPushButton(layoutWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
"\n"
"\n"
"color: rgb(85, 0, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: red;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        Exit->setIcon(icon);
        Exit->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(Exit);

        layoutWidget1 = new QWidget(Login);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 290, 261, 91));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Login_2 = new QPushButton(layoutWidget1);
        Login_2->setObjectName(QStringLiteral("Login_2"));
        Login_2->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
"\n"
"	font: 12pt \"Algerian\";\n"
"	color: rgb(0, 255, 0);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout_2->addWidget(Login_2);

        Register = new QPushButton(layoutWidget1);
        Register->setObjectName(QStringLiteral("Register"));
        Register->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
"\n"
"	font: 12pt \"Algerian\";\n"
"	color: rgb(85, 255, 0);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout_2->addWidget(Register);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        Forgot = new QPushButton(layoutWidget1);
        Forgot->setObjectName(QStringLiteral("Forgot"));
        Forgot->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
"\n"
"	font: 12pt \"Algerian\";\n"
"	color: rgb(170, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout_5->addWidget(Forgot);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        label_5->setText(QApplication::translate("Login", "USERNAME:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Login", "Password:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login", "Te", Q_NULLPTR));
        label_3->setText(QString());
        label->setText(QApplication::translate("Login", "Yotube-Transcript", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "Summarizer", Q_NULLPTR));
        Exit->setText(QString());
        Login_2->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        Register->setText(QApplication::translate("Login", "Register", Q_NULLPTR));
        Forgot->setText(QApplication::translate("Login", "Forgot", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
