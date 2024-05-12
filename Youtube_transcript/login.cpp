#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


    Qt::WindowFlags flags = Qt::CustomizeWindowHint;
    setWindowFlags(flags);
    Main_wind = new MainWindow;


//        ui->Imagelabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
//        ui->Imagelabel->setScaledContents(true);
//        ui->Login_lable->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
//        ui->Login_lable->setScaledContents(true);
//        ui->groupBox_REGISTER->setVisible(false);







}

Login::~Login()
{
    delete ui;
    delete Main_wind;
}
void Login::on_Login_2_clicked()
{

    QString usernameStr = ui->usernameStr->text();
     QString pswdStr = ui->pswdStr->text();

     if (usernameStr.isEmpty() || pswdStr.isEmpty()) {

         QMessageBox* messageBox = new QMessageBox;
         messageBox->setIcon(QMessageBox::Warning);
         messageBox->setText("Username and password cannot be empty.");
         messageBox->setStandardButtons(QMessageBox::Ok);
         messageBox->setDefaultButton(QMessageBox::Ok);
         messageBox->setWindowTitle("Warning");
         messageBox->exec();
         delete messageBox;
     } else {
         QSqlQuery query;
         query.prepare("SELECT * FROM Login_user WHERE USERNAME = :usernameStr AND PASSWORD = :pswdStr");
         query.bindValue(":usernameStr", usernameStr);
         query.bindValue(":pswdStr", pswdStr);

         if (query.exec() && query.next()) {
             // A matching record was found, indicating a successful login
             qDebug() << "Login successful as admin";
             Main_wind->showMaximized();
         } else {
             // No matching record found, indicating an unsuccessful login
             QMessageBox::critical(this, "Invalid Login", "Invalid username or password. Please try again.");
         }
     }

}

void Login::on_Register_clicked()
{
    Register rejectedd(this);
    if (rejectedd.exec() == QDialog::Accepted) {

    }
}

void Login::on_Forgot_clicked()
{
    Forgot_password Forgot(this);
    if (Forgot.exec() == QDialog::Accepted) {

    }

}

void Login::on_Exit_clicked()
{
    QMessageBox* messageBox = new QMessageBox;
    messageBox->setIcon(QMessageBox::Question);
    messageBox->setText("Do you really want to exit?");
    messageBox->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox->setDefaultButton(QMessageBox::Yes);
    int result = messageBox->exec();
    if (result == QMessageBox::Yes)
    {
        exit(0);
    }
    else
    {

    }

    delete messageBox;
}
