#ifndef FORGOT_PASSWORD_H
#define FORGOT_PASSWORD_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class Forgot_password;
}

class Forgot_password : public QDialog
{
    Q_OBJECT

public:
    explicit Forgot_password(QWidget *parent = 0);
    ~Forgot_password();

private slots:
    void on_Update_clicked();

private:
    Ui::Forgot_password *ui;
};

#endif // FORGOT_PASSWORD_H
