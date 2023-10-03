#include<QNetworkInterface>
#include<QNetworkAddressEntry>

class myNetworkInterface : public QObject {
Q_OBJECT

public:
    explicit myNetworkInterface(QObject *parent = nullptr, QString interfaceName = "");


bool isValid();

    bool isActive();

    QHostAddress getAddress();

private:
    QString m_interfaceName;
    QNetworkInterface m_interface;
    QNetworkAddressEntry m_addressEntry;



};