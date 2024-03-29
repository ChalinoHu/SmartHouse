#ifndef TCPSOCKET_H
#define TCPSOCKET_H
#include <QTcpSocket>
#include "userinformation.h"

class TcpSocket:public QObject
{
    Q_OBJECT

public:
    TcpSocket();
    ~TcpSocket();

signals:
    void registerStatu(const QString &error);
    void loginStatu(const QString &error,const QString &clientId);

public slots:
    void recvTcpData(void);
    void registerUserByTcp(const UserInformation &user);
    void loginUserByTcp(const QString &username,const QString &password);
    void controlDeviceByTcp(int deviceId, int statu, const QString &clientId);

private:
   QTcpSocket *tcp;
};

#endif // TCPSOCKET_H
