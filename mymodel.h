#ifndef MYMODEL_H
#define MYMODEL_H

#include <QAbstractTableModel>
#include <QString>

const int COLS= 3;
const int ROWS= 2;

class MyModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    MyModel(QObject *parent);
   int rowCount(const QModelIndex& parent = QModelIndex()) const ;
   int columnCount(const QModelIndex& parent = QModelIndex()) const;
   QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
   bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole);
   Qt::ItemFlags flags(const QModelIndex& index) const ;
private:
    QString m_gridData[ROWS][COLS];
signals:
    void editCompleted(const QString&);
};


#endif // MYMODEL_H
