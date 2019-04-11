#include "CommunicationManager.h"

BatteryThread* CommunicationManager::batteryThread;
ConsoleThread* CommunicationManager::consoleThread;

bool CommunicationManager::loopbackFound = false;
QNetworkInterface CommunicationManager::loopbackInterface;

void CommunicationManager::init()
{
    // Init and start battery thread
    QThread* batteryQThread = new QThread;
    batteryThread = new BatteryThread();
    batteryThread->moveToThread(batteryQThread);

    // Connect the required signals for a QThread
    QObject::connect(batteryThread, &BatteryThread::error, &CommunicationManager::errorString);
    connect(batteryQThread, SIGNAL(started()), batteryThread, SLOT(start()));
    connect(batteryThread, SIGNAL(finished()), batteryQThread, SLOT(quit()));
    connect(batteryThread, SIGNAL(finished()), batteryThread, SLOT(deleteLater()));
    connect(batteryQThread, SIGNAL(finished()), batteryQThread, SLOT(deleteLater()));

    batteryQThread->start();


    // Init and start console thread
    QThread* consoleQThread = new QThread;
    CommunicationManager::consoleThread = new ConsoleThread();
    consoleThread->moveToThread(consoleQThread);

    // Connect the required signals for a QThread
    QObject::connect(consoleThread, &ConsoleThread::error, &CommunicationManager::errorString);
    connect(consoleQThread, SIGNAL(started()), consoleThread, SLOT(start()));
    connect(consoleThread, SIGNAL(finished()), consoleQThread, SLOT(quit()));
    connect(consoleThread, SIGNAL(finished()), consoleThread, SLOT(deleteLater()));
    connect(consoleQThread, SIGNAL(finished()), consoleQThread, SLOT(deleteLater()));

    consoleQThread->start();
}

QNetworkInterface CommunicationManager::getLoopbackInterface()
{
    if(CommunicationManager::loopbackFound)
    {
        return CommunicationManager::loopbackInterface;
    }
    else
    {
        // Get loopback interface from list of interfaces
        QList<QNetworkInterface> ifaces = QNetworkInterface::allInterfaces();
        for(int i=0; i < ifaces.size(); i++)
        {
            QNetworkInterface interface = ifaces.at(i);
            if((bool)(interface.flags() & QNetworkInterface::IsLoopBack))
            {
                CommunicationManager::loopbackFound = true;
                return interface;
            }
        }

        throw "ERROR: No network loopback interface found";
    }
}

void CommunicationManager::errorString(QString error)
{
    qDebug() << error;
}
