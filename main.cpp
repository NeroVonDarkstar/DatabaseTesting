#include <QCoreApplication>
#include <iostream>
#include <QTextStream>
#include <QtDebug>
#include <QFile>
#include <QIODevice>
#include <QtSql>
#include <QCoreApplication>
#include <QSslCipher>
#include <QSslSocket>
#include <iostream>
#include <QTextStream>
#include <QDebug>
#include <QByteArray>
#include <QFile>
#include <QIODevice>
#include <QSslKey>
#include <QSslCertificate>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSsl>
#include <QHostAddress>

using namespace std;

bool createConnection();
void adduser();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "Starting new database" << endl;
    bool executedtrue = createConnection();
    if (executedtrue == true){
        cout << "Connection successful" << endl;
    }
    else{
        cout << "not yet jim" << endl;
    }
    return a.exec();
}

bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setConnectOptions();

    db.setDatabaseName("test");
    db.setHostName("localhost");
    db.setUserName("MattAdmin");
    db.setPassword("p455w0rd");
    if (!db.open()) {
        cout << "Database Error" << endl;
        return false;
    }
    return true;



    string username;
    string password;
    cout << "please select the username you wish to use: " << endl;
    cin >> username;
    cout << "Please enter the password you wish to use: " << endl;
    cin >> password;
    int newId = -1;
    bool ret = false;

            if (db.isOpen())
                    {
                    //http://www.sqlite.org/autoinc.html
                    // NULL = is the keyword for the autoincrement to generate next value

                    //QSqlQuery query;
                    //ret = query.exec(("insert into persons values(NULL,'%1','%2')")
                    //.arg(username).arg(password));

                    // Get database given autoincrement value
                    //if (ret)
                        {
                        // http://www.sqlite.org/c3ref/last_insert_rowid.html
                        //newId = query.lastInsertId().toInt();
                        }

                    }
                //return newId;

}
