#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "handler_queue.h"

#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    handler_Queue = new Handler_Queue();

    alarmwindowui = new AlarmWindow();
    ui->setupUi(this);

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(OnTimer()));
    timer->start(100);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    handler_Queue->errorQueue.push(0);
    handler_Queue->errorQueue.push(1);
    handler_Queue->errorQueue.push(2);
    handler_Queue->errorQueue.push(0);

}

void MainWindow::OnTimer()
{
    if(!handler_Queue->errorQueue.empty())
    {
        int code = handler_Queue->errorQueue.front();
        alarmwindowui->SetWarningCode(code);
        alarmwindowui->show();

    }
}
