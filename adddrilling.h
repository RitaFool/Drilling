#ifndef ADDDRILLING_H
#define ADDDRILLING_H

#pragma execution_character_set("utf-8")

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include "odbchelper.h"

extern QString getid;
extern QString getjborehole;
extern QString getjtype;
extern QString getjeast;
extern QString getjnorth;
extern QString getjaltitude;
extern QString getjdepth;
extern QString getjpath;
extern QString getjdrill;

class addD : public QWidget
{
    Q_OBJECT
public:
    addD();

public slots:
    void add();

private:
    QLabel *L1;
    QLabel *L2;
    QLabel *L3;
    QLabel *L4;
    QLabel *L5;
    QLabel *L6;
    QLabel *L7;
    QLabel *L8;
    QLabel *L9;

    QLineEdit *id;
    QLineEdit *jborehole;
    QLineEdit *jtype;
    QLineEdit *jeast;
    QLineEdit *jnorth;
    QLineEdit *jaltitude;
    QLineEdit *jdepth;
    QLineEdit *jpath;
    QLineEdit *jdrill;

    QPushButton *confirm;
    QPushButton *cancel;

    QVBoxLayout *layout1;
    QVBoxLayout *layout2;
    QHBoxLayout *layout3;
    QHBoxLayout *layout4;
    QVBoxLayout *layout5;

    QHBoxLayout *layout01;
    QHBoxLayout *layout02;
    QHBoxLayout *layout03;
    QHBoxLayout *layout04;
    QHBoxLayout *layout05;
    QHBoxLayout *layout06;
    QHBoxLayout *layout07;
    QHBoxLayout *layout08;
    QHBoxLayout *layout09;

};

#endif // ADDDRILLING_H
