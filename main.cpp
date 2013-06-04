#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include <QMutex>
#include <QQueue>
#include <string>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
