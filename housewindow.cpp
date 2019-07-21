#include "housewindow.h"
#include "ui_housewindow.h"

HouseWindow::HouseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HouseWindow)
{
    ui->setupUi(this);
}

HouseWindow::~HouseWindow()
{
    delete ui;
}

void HouseWindow::on_ledPushButton_1_clicked(bool checked)
{
    if(checked){
        ui->ledPushButton_1->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->ledWidgt_1->setStyleSheet("border-image: url(:/image/room/openled_ico.png);");
    }else{
        ui->ledPushButton_1->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->ledWidgt_1->setStyleSheet("border-image: url(:/image/room/closeled_ico.png);");
    }
}

void HouseWindow::on_ledPushButton_2_clicked(bool checked)
{
    if(checked){
        ui->ledPushButton_2->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->ledwidget_2->setStyleSheet("border-image: url(:/image/room/openled_ico.png);");
    }else{
        ui->ledPushButton_2->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->ledwidget_2->setStyleSheet("border-image: url(:/image/room/closeled_ico.png);");
    }
}

void HouseWindow::on_funPushButton_3_clicked(bool checked)
{
    if(checked){
        ui->funPushButton_3->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->funwidget->setStyleSheet("border-image: url(:/image/room/openfan_ico.png);");
    }else{
        ui->funPushButton_3->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->funwidget->setStyleSheet("border-image: url(:/image/room/closefan_ico.png);");
    }
}

void HouseWindow::on_doorPushButton_4_clicked(bool checked)
{
    if(checked){
        ui->doorPushButton_4->setStyleSheet("border-image: url(:/image/room/ON.png);");
        ui->doorwidget->setStyleSheet("border-image: url(:/image/room/opendoor_ico.png);");
    }else{
        ui->doorPushButton_4->setStyleSheet("border-image: url(:/image/room/OFF.png);");
        ui->doorwidget->setStyleSheet("border-image: url(:/image/room/closedoor_ico.png);");
    }
}
