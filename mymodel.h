#ifndef MYMODEL_H
#define MYMODEL_H

#include <QAbstractTableModel>
#include <QTimer>

class MyModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    MyModel(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QTimer *timer;
private slots:
    void timerHit();
};

#endif // MYMODEL_H
