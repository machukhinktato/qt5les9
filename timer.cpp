#include "timer.h"
#include <QHBoxLayout>
#include <QTime>


Timer::Timer(QWidget *parent): QWidget(parent) {
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);

    label = new QLabel("", this);
    hbox->addWidget(label, 0, Qt::AlignLeft | Qt::AlignTop);

    QTime qTime = QTime::currentTime();
    QString stime = qTime.toString();
    label->setText(stime);

    startTimer(1000);
}

void Timer::timerEvent(QTimerEvent *event) {
    Q_UNUSED(event);

    QTime qTime = QTime::currentTime();
    QString stime = qTime.toString();
    label->setText(stime);
}