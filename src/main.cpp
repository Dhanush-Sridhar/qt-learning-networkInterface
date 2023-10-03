#include<QCoreApplication>
#include "myNetworkInterface.h"

int main(int argc, char** argv) {
 QCoreApplication app(argc, argv);
qDebug()<<"Hello world";

myNetworkInterface interface(nullptr,"eno1");

if(interface.isValid()) {
    qDebug() << "Interface is valid";
    qDebug() << "Interface is active: " << interface.isActive();
    qDebug() << "Interface address: " << interface.getAddress();
} else {
    qDebug() << "Interface is not valid";
}
	return app.exec();
}
