#ifndef REMOVEDRILLINGDETAIL_H
#define REMOVEDRILLINGDETAIL_H

#pragma execution_character_set("utf-8")

#include "odbchelper.h"

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>

extern QString getid2;
extern QString getjborehole3;

class removeDD : public QWidget
{
    Q_OBJECT
public:
    removeDD();

public slots:
    void remove();
    void exit();

private:
    QLabel *L1;
    QLineEdit *id;
    QLabel *L2;
    QLineEdit *jborehole;
    QPushButton *confirm;
    QPushButton *cancel;
    QVBoxLayout *layout;
};

#endif // REMOVEDRILLINGDETAIL_H
