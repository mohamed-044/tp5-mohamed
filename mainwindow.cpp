#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QModelIndex>
#include <QTableView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recup_table()  //on défni la méthode recup_table()
{
    QSqlTableModel *Model;         //Déclaration d'une variable de type QSqlTableModel
    Model = new QSqlTableModel;    //Création d'un nouvel objet QSqlTableModel
    Model->setTable("tablejeu");    //Spécification de la table SQL à récupérer
    Model->select();                //Récupération du contenu de la table
    ui->tableView->setModel(Model);   } //Affichage du contenu de la table dans le widget tableView




