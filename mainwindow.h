#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QTableView;

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QTableView *tableView;
public:
    MainWindow(QWidget *parent = nullptr);
public slots:
    void showWindowTitle(const QString& title);
};


#endif // MAINWINDOW_H
