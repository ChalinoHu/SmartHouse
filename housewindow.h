#ifndef HOUSEWINDOW_H
#define HOUSEWINDOW_H

#include <QMainWindow>

namespace Ui {
class HouseWindow;
}

class HouseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HouseWindow(QWidget *parent = 0);
    ~HouseWindow();

private slots:
    void on_ledPushButton_1_clicked(bool checked);

    void on_ledPushButton_2_clicked(bool checked);

    void on_funPushButton_3_clicked(bool checked);

    void on_doorPushButton_4_clicked(bool checked);

private:
    Ui::HouseWindow *ui;
};

#endif // HOUSEWINDOW_H
