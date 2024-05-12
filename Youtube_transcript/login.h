#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QTimer>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include "register.h"
#include "forgot_password.h"
#include "register.h"
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);

    ~Login();

private slots:




    void on_Login_2_clicked();

    void on_Register_clicked();

    void on_Forgot_clicked();

    void on_Exit_clicked();

private:
    Ui::Login *ui;
    MainWindow *Main_wind;

};

#endif // LOGIN_H
