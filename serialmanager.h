#ifndef SERIALMANAGER_H
#define SERIALMANAGER_H

#include <QObject>
#include <Q

class SerialManager : public QObject
{
    Q_OBJECT
public:
    explicit SerialManager(QObject *parent = 0);
    
signals:
    
public slots:
    void StartSerialConnection();

    
};

#endif // SERIALMANAGER_H
