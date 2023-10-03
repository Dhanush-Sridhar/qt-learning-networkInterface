
#include "myNetworkInterface.h"

myNetworkInterface::myNetworkInterface(QObject *parent, QString interfaceName) : QObject(parent), m_interfaceName(interfaceName) {
    m_interface = QNetworkInterface::interfaceFromName(interfaceName);

}


bool myNetworkInterface::isValid() {
    return m_interface.isValid();
}

bool myNetworkInterface::isActive() {
    return m_interface.flags().testFlag(QNetworkInterface::IsUp) && m_interface.flags().testFlag(QNetworkInterface::IsRunning);
}


QHostAddress myNetworkInterface::getAddress() {
    QList<QNetworkAddressEntry> addressEntries = m_interface.addressEntries() ;
    QHostAddress address;
    foreach(QNetworkAddressEntry interface, addressEntries) {
        if (interface.ip().protocol() == QAbstractSocket::IPv4Protocol) {
            address = interface.ip();
            break;
        }
    }

    return address;
}