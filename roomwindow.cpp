#include "roomwindow.h"
#include "ui_roomwindow.h"
#include <QDebug>

RoomWindow::RoomWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RoomWindow)
{
    ui->setupUi(this);
}

RoomWindow::~RoomWindow()
{
    delete ui;
}

void RoomWindow::on_ledPushButton1_clicked(bool checked)
{
    int statu;

    if(checked){
        ui->ledPushButton1->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->ledWidget1->setStyleSheet("border-image: url(:/image/room/openled_ico.png);");
        statu = 0;//打开
    }else{
        ui->ledPushButton1->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->ledWidget1->setStyleSheet("border-image: url(:/image/room/closeled_ico.png);");
       statu = 1;
    }

    emit controlDevice(1,statu);
}

void RoomWindow::on_ledPushButton2_clicked(bool checked)
{
    int statu;

    if(checked){
        ui->ledPushButton2->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->ledWidget2->setStyleSheet("border-image: url(:/image/room/openled_ico.png);");
        statu = 0;
    }else{
        ui->ledPushButton2->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->ledWidget2->setStyleSheet("border-image: url(:/image/room/closeled_ico.png);");
        statu = 1;
    }

    emit controlDevice(2,statu);
}

void RoomWindow::on_fanPushButton_clicked(bool checked)
{
    int statu;

    if(checked){
        ui->fanPushButton->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->fanWidget->setStyleSheet("border-image: url(:/image/room/openfan_ico.png);");
        statu = 0;
    }else{
        ui->fanPushButton->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->fanWidget->setStyleSheet("border-image: url(:/image/room/closefan_ico.png);");
        statu = 1;
    }

    emit controlDevice(3,statu);
}

void RoomWindow::on_doorPushButton_clicked(bool checked)
{
    int statu;

    if(checked){
        ui->doorPushButton->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->doorWidget->setStyleSheet("border-image: url(:/image/room/opendoor_ico.png);");
        statu = 0;
    }else{
        ui->doorPushButton->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->doorWidget->setStyleSheet("border-image: url(:/image/room/closedoor_ico.png);");
        statu = 1;
    }

    emit controlDevice(4,statu);
}
