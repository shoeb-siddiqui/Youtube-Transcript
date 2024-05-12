#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    Login w;
    w.show();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("lOGIN_YOU.db");
    if(db.open()){
        qDebug()<<"opened"<<endl;
    }else{
        qDebug()<<"not openede"<<endl;
    }

    return a.exec();
}

