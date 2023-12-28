#ifndef QT_BASE_DATA_CONFIG_H
#define QT_BASE_DATA_CONFIG_H

#include <QObject>
#include <QMap>
#include <QVector>

class data_config : public QObject
{
Q_OBJECT
public:
    explicit data_config(QObject *parent = nullptr);

    QMap<int, QVector<QVector<int>>> mData;

};

#endif