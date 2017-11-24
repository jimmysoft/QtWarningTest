#ifndef ALARMWINDOW_H
#define ALARMWINDOW_H

#include <QWidget>

namespace Ui {
class AlarmWindow;
}

class AlarmWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AlarmWindow(QWidget *parent = 0);
    ~AlarmWindow();

    int SetWarningCode(int);
    int SetWarningLabels(int);
    int code;

private slots:
    void on_pushButton_clicked();

private:
    Ui::AlarmWindow *ui;
};

#endif // ALARMWINDOW_H
