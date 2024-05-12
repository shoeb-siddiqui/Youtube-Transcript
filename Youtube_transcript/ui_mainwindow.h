/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Play;
    QPushButton *Pause;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *downloadButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(759, 493);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Image/icons8-youtube-94.png")));
        label->setScaledContents(true);

        horizontalLayout_3->addWidget(label);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Times New Roman\";"));

        horizontalLayout_2->addWidget(textBrowser);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Play = new QPushButton(centralWidget);
        Play->setObjectName(QStringLiteral("Play"));
        Play->setStyleSheet(QLatin1String("\n"
" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
" \n"
"\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/play-buttton.png"), QSize(), QIcon::Normal, QIcon::Off);
        Play->setIcon(icon);
        Play->setIconSize(QSize(30, 20));

        horizontalLayout_5->addWidget(Play);

        Pause = new QPushButton(centralWidget);
        Pause->setObjectName(QStringLiteral("Pause"));
        Pause->setStyleSheet(QLatin1String("\n"
" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
" \n"
"\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Image/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        Pause->setIcon(icon1);
        Pause->setIconSize(QSize(30, 20));

        horizontalLayout_5->addWidget(Pause);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        downloadButton = new QPushButton(centralWidget);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
" color: white;\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout->addWidget(downloadButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
" color: white;\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String(" QPushButton{\n"
"\n"
"background: transparent;\n"
" border: none;\n"
" color: white;\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" { background: green;\n"
" color: black; font:\n"
" bold 10px;\n"
" }"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 759, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Youtube-Transcript", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "YOUTUBE", Q_NULLPTR));
        Play->setText(QString());
        Pause->setText(QString());
        downloadButton->setText(QApplication::translate("MainWindow", "Tran-Script", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Logs", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
