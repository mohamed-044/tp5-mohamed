#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTableView>
#include <QSqlTableModel>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void recup_table(); //on déclare la méthode recup_table()


private:
    Ui::MainWindow *ui;
    void setupModel();

};
#endif // MAINWINDOW_H
