#include "forgot_password.h"
#include "ui_forgot_password.h"

Forgot_password::Forgot_password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forgot_password)
{
    ui->setupUi(this);
}

Forgot_password::~Forgot_password()
{
    delete ui;
}

void Forgot_password::on_Update_clicked()
{
    QString username = ui->usernameLineEdit->text();
       QString newPassword = ui->newPasswordLineEdit->text();
       QString confirmPassword = ui->confirmPasswordLineEdit->text();

       if (username.isEmpty() || newPassword.isEmpty() || confirmPassword.isEmpty()) {
           // Display an error message if any of the fields are empty
           QMessageBox msgBox;
           msgBox.setText("Please fill in all fields.");
           msgBox.setIcon(QMessageBox::Critical);
           msgBox.setStyleSheet("QLabel { font-family: 'Arial Black'; color: white; }");
           msgBox.exec();

           return;
       }

       if (newPassword != confirmPassword) {
           // Display an error message if the new password and confirm password do not match
           QMessageBox msgBox;
           msgBox.setText("New password and confirm password do not match.");
           msgBox.setIcon(QMessageBox::Critical);
           msgBox.setStyleSheet("QLabel { font-family: 'Arial Black'; color: white; }");
           msgBox.exec();

           return;
       }

       QSqlQuery checkQuery;
       checkQuery.prepare("SELECT * FROM Login_user WHERE USERNAME = :username");
       checkQuery.bindValue(":username", username);

       if (checkQuery.exec() && checkQuery.next()) {
           // Username exists, update the password
           QSqlQuery updateQuery;
           updateQuery.prepare("UPDATE Login_user SET PASSWORD = :newPassword WHERE USERNAME = :username");
           updateQuery.bindValue(":newPassword", newPassword);
           updateQuery.bindValue(":username", username);

           if (updateQuery.exec()) {
               // Password updated successfully
               qDebug() << "Password updated for user: " << username;
               // Display a success message to the user
               QMessageBox::information(this, "Password Reset", "Password updated successfully.");
           } else {
               // Handle the case where the password update failed
               qDebug() << "Failed to update password for user: " << username;
               // Display an error message
               QMessageBox::critical(this, "Password Reset Error", "Failed to update the password.");
           }
       } else {
           // Username does not exist in the database
           // Display an error message
           QMessageBox::critical(this, "User Not Found", "The provided username was not found.");
       }

       accept();
}
