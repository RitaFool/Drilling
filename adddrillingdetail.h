#ifndef ADDDRILLINGDETAIL_H
#define ADDDRILLINGDETAIL_H

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

extern QString getDid;
extern QString getDjborehole;
extern QString getDjsample;
extern QString getDjdepthfrom;
extern QString getDjdepthto;
extern QString getDjeastfrom;
extern QString getDjnorthfrom;
extern QString getDjaltitudefrom;
extern QString getDjeastto;
extern QString getDjnorthto;
extern QString getDjaltitudeto;
extern QString getDjlithology;
extern QString getDjflag;
extern QString getDlithologysort;
extern QString getDattribute;

class addDD : public QWidget
{
    Q_OBJECT
public:
    addDD();

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
    QLabel *L10;
    QLabel *L11;
    QLabel *L12;
    QLabel *L13;
    QLabel *L14;
    QLabel *L15;

    QLineEdit *Did;
    QLineEdit *Djborehole;
    QLineEdit *Djsample;
    QLineEdit *Djdepthfrom;
    QLineEdit *Djdepthto;
    QLineEdit *Djeastfrom;
    QLineEdit *Djnorthfrom;
    QLineEdit *Djaltitudefrom;
    QLineEdit *Djeastto;
    QLineEdit *Djnorthto;
    QLineEdit *Djaltitudeto;
    QLineEdit *Djlithology;
    QLineEdit *Djflag;
    QLineEdit *Dlithologysort;
    QLineEdit *Dattribute;

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
    QHBoxLayout *layout10;
    QHBoxLayout *layout11;
    QHBoxLayout *layout12;
    QHBoxLayout *layout13;
    QHBoxLayout *layout14;
    QHBoxLayout *layout15;

};

#endif // ADDDRILLINGDETAIL_H
