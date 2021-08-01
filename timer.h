#pragma once

#include <QWidget>
#include <QLabel>

class Timer : public QWidget {

    Q_OBJECT

public:
    Timer(QWidget *parent=nullptr);

protected:
    void timerEvent(QTimerEvent *e);

private:
    QLabel *label;
};;