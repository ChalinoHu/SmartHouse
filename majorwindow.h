#ifndef MAJORWINDOW_H
#define MAJORWINDOW_H

#include <QMainWindow>
#include "roomwindow.h"
#include "tcpsocket.h"

namespace Ui {
class MajorWindow;
}

class MajorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MajorWindow(QWidget *parent = 0);
    ~MajorWindow();

    void timerEvent(QTimerEvent *event);

    QString getClientId() const;
    void setClientId(const QString &value);

private slots:
    void on_devicePushButton_clicked();
    void controlDeviceSlot(int deviceId,int statu);

private:
    Ui::MajorWindow *ui;
    RoomWindow *room;
    QString clientId;
    TcpSocket *tcp;
};

#endif // MAJORWINDOW_H
