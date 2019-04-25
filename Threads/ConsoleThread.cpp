
#include "ConsoleThread.h"
#include "CommunicationManager.h"

using namespace std;

// Constructor
ConsoleThread::ConsoleThread()
{
    qRegisterMetaType<ConsolePacket>("ConsolePacket");
}

// Destructor
ConsoleThread::~ConsoleThread()
{

}

// Starts the thread
void ConsoleThread::start()
{
    udpSocket = new QUdpSocket();
    udpSocket->bind(QHostAddress::AnyIPv4, CONSOLE_PORT, QUdpSocket::ShareAddress);

    udpSocket->joinMulticastGroup(QHostAddress(CommunicationManager::getUDPAddress()), CommunicationManager::getLoopbackInterface());

    connect(udpSocket, SIGNAL(readyRead()),
                this, SLOT(readPendingDatagrams()));
}

void ConsoleThread::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams())
    {
            QByteArray datagram;
            datagram.resize(udpSocket->pendingDatagramSize());
            QHostAddress sender;
            quint16 senderPort;

            udpSocket->readDatagram(datagram.data(), datagram.size(),
                                    &sender, &senderPort);

            processDatagram(datagram);
     }
}


void ConsoleThread::processDatagram(QByteArray datagram)
{
    ConsolePacket* consolePacket = (ConsolePacket*)datagram.data();
    latestPacket = consolePacket;
    emit newPacket(*consolePacket);
}

void ConsoleThread::injectMessage(QString message)
{
    ConsolePacket* consolePacket = new ConsolePacket();
    consolePacket->message = message.toStdString();
    consolePacket->strLength = message.length();
    latestPacket = consolePacket;
    emit newPacket(*consolePacket);
}
