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
    QSqlTableModel *Model;          //on crée un objet Model
    Model = new QSqlTableModel;
    Model->setTable("tablejeu");    //on récupère la tablejeu
    Model->select();
    ui->tableView->setModel(Model);   } //on affiche le contenu de la table dans le tableView




