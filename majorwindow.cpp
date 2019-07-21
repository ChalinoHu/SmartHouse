#include "majorwindow.h"
#include "ui_majorwindow.h"
#include <QDebug>
#include <QTime>
#include <QDate>

MajorWindow::MajorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MajorWindow)
{
    ui->setupUi(this);

    room = new RoomWindow;
    connect(room,SIGNAL(controlDevice(int,int)),this,SLOT(controlDeviceSlot(int,int)));

    tcp = new TcpSocket;

    this->startTimer(1000);
}

MajorWindow::~MajorWindow()
{
    delete ui;
}

void MajorWindow::timerEvent(QTimerEvent *event)
{
   QTime time = QTime::currentTime();
   ui->timeLabel->setText(time.toString("hh:mm"));

   QDate date = QDate::currentDate();
   ui->dateLabel->setText(date.toString("yyyy-MM-dd dddd"));
}

void MajorWindow::on_devicePushButton_clicked()
{
    room->show();
}

void MajorWindow::controlDeviceSlot(int deviceId, int statu)
{
    //通过tcp发出控制指令
    tcp->controlDeviceByTcp(deviceId,statu,clientId);
}

QString MajorWindow::getClientId() const
{
    return clientId;
}

void MajorWindow::setClientId(const QString &value)
{
    clientId = value;
}
