#include "alarmwindow.h"
#include "ui_alarmwindow.h"
#include "handler_queue.h"

AlarmWindow::AlarmWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlarmWindow)
{
    ui->setupUi(this);

    ui->label_Warning->setStyleSheet("QLabel { background-color : red; color : white; }");
    ui->label_Explanation->setStyleSheet("QLabel { background-color : white; color : red; }");
}

AlarmWindow::~AlarmWindow()
{
    delete ui;
}

int AlarmWindow::SetWarningCode(int code)
{
    this->code = code;

    SetWarningLabels(code);

    return 0;
}

int AlarmWindow::SetWarningLabels(int code)
{
    switch(code)
    {

        case 0:
        ui->label_Warning->setText("Warning: Camera Not Found");
        ui->label_Explanation->setText("Please check the Camera Connection");
        break;
        case 1:
        ui->label_Warning->setText("Warning: Motor Not Found");
        ui->label_Explanation->setText("Please check the Motor Connection");
        break;
        case 2:
        ui->label_Warning->setText("Warning: Gripper Not Found");
        ui->label_Explanation->setText("Please check the Gripper Connection");
        break;

    }

    return 0;
}



void AlarmWindow::on_pushButton_clicked()
{
    handler_Queue->errorQueue.pop();
    this->hide();
}
