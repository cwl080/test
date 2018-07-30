#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>



static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("protest10-9");
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open())
        qDebug() << "Failed to connect to root mysql admin";
    else qDebug() << "open";


    return true;
}

#endif // CONNECTION_H
