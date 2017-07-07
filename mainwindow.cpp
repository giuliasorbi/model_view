#include <QTableView>
#include "mainwindow.h"
#include "mymodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    tableView = new QTableView(this);
    setCentralWidget(tableView);
    QAbstractTableModel *myModel = new MyModel(this);
    tableView->setModel(myModel);

    connect(myModel, SIGNAL(editCompleted(const QString&)), this, SLOT(showWindowTitle(const QString&)));
//    connect(myModel, SIGNAL(editCompleted(const QString&)), this, SLOT(setWindowTitle(const QString&)));
}

void MainWindow::showWindowTitle(const QString& title)
{
    setWindowTitle(title);
}
