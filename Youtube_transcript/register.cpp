#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_Register_2_clicked()
{
    QString usernameStr = ui->user_name_line->text();
    QString pswdStr = ui->pass_line->text();
    QString email = ui->email->text();

    if (usernameStr.isEmpty() || pswdStr.isEmpty() || email.isEmpty()) {
        // Display an error message if any of the fields are empty
        QMessageBox::critical(this, "Input Error", "Please fill in all fields.");
        return;  // Return to avoid attempting to insert when fields are empty
    }

    QSqlDatabase db = QSqlDatabase::database(); // Get the default database connection

    if (!db.isOpen()) {
        qDebug() << "Database connection is not open.";
        return;
    }

    // Check if the table "Login_user" exists
    QSqlQuery checkTableQuery(db);
    checkTableQuery.prepare("SELECT name FROM sqlite_master WHERE type='table' AND name='Login_user'");

    if (checkTableQuery.exec() && checkTableQuery.next()) {
        // The table already exists, so display a message
        qDebug() << "The table 'Login_user' already exists.";
    } else {
        // The table doesn't exist, so create it
        QSqlQuery createTableQuery(db);
        createTableQuery.prepare("CREATE TABLE Login_user (ID INTEGER PRIMARY KEY, USERNAME TEXT, PASSWORD TEXT)");

        if (createTableQuery.exec()) {
            qDebug() << "Table 'Login_user' created.";
        } else {
            qDebug() << "Table creation failed:" << createTableQuery.lastError().text();
        }
    }

    // Now, you can proceed to insert the user data
    QSqlQuery insertQuery(db);
    insertQuery.prepare("INSERT INTO Login_user (USERNAME, PASSWORD) VALUES (:username, :password)");
    insertQuery.bindValue(":username", usernameStr);
    insertQuery.bindValue(":password", pswdStr);

    if (insertQuery.exec()) {
        qDebug() << "User saved";
        // You can show a success message to the user here.
    } else {
        qDebug() << "Not saved in the table";
    }
     accept();
}
