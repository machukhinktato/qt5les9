#pragma once

#include <QMainWindow>

class Move : public QWidget {

    Q_OBJECT
public:
    Move(QWidget *parent=nullptr);

protected:
    void moveEvent(QMoveEvent *e);
};