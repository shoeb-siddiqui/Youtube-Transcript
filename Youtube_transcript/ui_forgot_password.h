/********************************************************************************
** Form generated from reading UI file 'forgot_password.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOT_PASSWORD_H
#define UI_FORGOT_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Forgot_password
{
public:
    QGroupBox *groupBox;
    QPushButton *Update;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLabel *label_2;
    QLineEdit *newPasswordLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QLabel *label_3;

    void setupUi(QDialog *Forgot_password)
    {
        if (Forgot_password->objectName().isEmpty())
            Forgot_password->setObjectName(QStringLiteral("Forgot_password"));
        Forgot_password->resize(604, 489);
        Forgot_password->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        groupBox = new QGroupBox(Forgot_password);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 40, 381, 381));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
" border: 2px solid purple;\n"
"    border-radius: 10px;\n"
""));
        Update = new QPushButton(groupBox);
        Update->setObjectName(QStringLiteral("Update"));
        Update->setGeometry(QRect(120, 280, 91, 51));
        Update->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: purple;\n"
"    \n"
"	color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    padding: 5px 10px;\n"
"font: 87 10pt \"Arial Black\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: red;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: green;\n"
"    color: white;  /* Text color when pressed */\n"
"	\n"
"}\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 381, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
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
        icon.addFile(QStringLiteral(":/Image/key (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(60, 50));

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("  background-color: purple;\n"
"font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(7, 140, 151, 24));
        label->setStyleSheet(QLatin1String("font: 16pt \"Algerian\";\n"
"color: rgb(85, 0, 255);\n"
"border:none;"));
        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(230, 140, 145, 24));
        usernameLineEdit->setStyleSheet(QLatin1String("QLineEdit {  border: 2px solid gray;\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"border-radius: 5px;}"));
        usernameLineEdit->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(7, 190, 201, 24));
        label_2->setStyleSheet(QLatin1String("font: 16pt \"Algerian\";\n"
"color: rgb(85, 0, 255);\n"
"border:none;"));
        newPasswordLineEdit = new QLineEdit(groupBox);
        newPasswordLineEdit->setObjectName(QStringLiteral("newPasswordLineEdit"));
        newPasswordLineEdit->setGeometry(QRect(230, 190, 141, 24));
        newPasswordLineEdit->setStyleSheet(QLatin1String("QLineEdit {  border: 2px solid gray;\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"border-radius: 5px;}"));
        newPasswordLineEdit->setAlignment(Qt::AlignCenter);
        confirmPasswordLineEdit = new QLineEdit(groupBox);
        confirmPasswordLineEdit->setObjectName(QStringLiteral("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setGeometry(QRect(230, 240, 141, 24));
        confirmPasswordLineEdit->setStyleSheet(QLatin1String("QLineEdit {  border: 2px solid gray;\n"
"	font: 87 10pt \"Arial Black\";\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"border-radius: 5px;}"));
        confirmPasswordLineEdit->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 240, 191, 24));
        label_3->setStyleSheet(QLatin1String("font: 16pt \"Algerian\";\n"
"color: rgb(85, 0, 255);\n"
"border:none;"));

        retranslateUi(Forgot_password);

        QMetaObject::connectSlotsByName(Forgot_password);
    } // setupUi

    void retranslateUi(QDialog *Forgot_password)
    {
        Forgot_password->setWindowTitle(QApplication::translate("Forgot_password", "Forgot-Password", Q_NULLPTR));
        groupBox->setTitle(QString());
        Update->setText(QApplication::translate("Forgot_password", "Update", Q_NULLPTR));
        pushButton->setText(QString());
        label_5->setText(QApplication::translate("Forgot_password", "RESET PASSWORD", Q_NULLPTR));
        label->setText(QApplication::translate("Forgot_password", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("Forgot_password", "New-password", Q_NULLPTR));
        label_3->setText(QApplication::translate("Forgot_password", "Confirm-pass", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Forgot_password: public Ui_Forgot_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOT_PASSWORD_H
