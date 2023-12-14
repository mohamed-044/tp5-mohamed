#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QtDebug>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QTableView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");    //connection locale
    db.setDatabaseName("bddjeu");   //connection a la base de données bddjeu
    db.setUserName("student");      //avec l'utilisaeur student
    db.setPassword("crif2024sn");   //avec le mot de passe crif2024sn
    if(db.open())                   //si la bdd est ouverte
    {
        qDebug() <<"Vous etes maintenant connecté à " << db.hostName(); //on affiche un message

        QSqlQuery query;

        query.exec("SELECT * FROM `tablejeu` ");    //on récupere dans la tablejeu
            while (query.next()) {                  //tant que query passe au suivant on continue
            QString idtablejeu = query.value(0).toString();     //on prend la variable id
            QString nom = query.value(1).toString();            //on prend la variable nom
            QString club = query.value(2).toString();           //on prend la variable club
            qDebug() <<"\t|------------------------------------------------------------------";
            qDebug() <<"\t|"<< idtablejeu <<"\t|"<< nom << "\t|" <<club <<"\t|";        // on affiche le contenu de la table
        }
            qDebug() <<"\t|-------------------------------------------------------------------";
            qDebug() << "Requete ok ! :";
            w.recup_table();
    }
    else        // sinon si la connection a échouée
    {
        qDebug() << "La connexion a échouée, désolée" << db.lastError().text();  // on affiche un message d'erreur
    }
    w.show();

    return a.exec();
}
