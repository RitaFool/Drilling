#ifndef LITHOLOGYDRILLING_H
#define LITHOLOGYDRILLING_H

#include "widget.h"

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>

class LithologyDrilling : public QWidget
{
    Q_OBJECT
public:
    LithologyDrilling();
    QVBoxLayout *layout;
    QLabel *label;
    QPushButton *btn;

    QHBoxLayout *layout1;
    QHBoxLayout *layout2;
    QHBoxLayout *layout3;
    QHBoxLayout *layout4;
    QHBoxLayout *layout5;
    QHBoxLayout *layout6;
    QHBoxLayout *layout7;
    QHBoxLayout *layout8;
    QHBoxLayout *layout9;
    QHBoxLayout *layout10;

    QCheckBox *L1_1CheckBox;
    QCheckBox *L1_2CheckBox;
    QCheckBox *L2_1CheckBox;
    QCheckBox *L2_2CheckBox;
    QCheckBox *L2_3CheckBox;
    QCheckBox *L3_1CheckBox;
    QCheckBox *L3_2CheckBox;
    QCheckBox *L3_3CheckBox;
    QCheckBox *L4_1CheckBox;
    QCheckBox *L4_2CheckBox;
    QCheckBox *L5_1_1CheckBox;
    QCheckBox *L5_1_2CheckBox;
    QCheckBox *L5_2CheckBox;
    QCheckBox *L5_3CheckBox;
    QCheckBox *L5_4CheckBox;
    QCheckBox *L6CheckBox;
    QCheckBox *L7_1CheckBox;
    QCheckBox *L7_2CheckBox;
    QCheckBox *L8_1CheckBox;
    QCheckBox *L8_2CheckBox;
    QCheckBox *L9_1CheckBox;
    QCheckBox *L9_2CheckBox;
    QCheckBox *L10CheckBox;
    QCheckBox *L11CheckBox;
    QCheckBox *L12CheckBox;
    QCheckBox *L13CheckBox;
    QCheckBox *L13_2CheckBox;
    QCheckBox *L14CheckBox;
    QCheckBox *chazhiCheckBox;
    QCheckBox *bujialayerCheckBox;

public slots:
    void slotOk();
};

#endif // LITHOLOGYDRILLING_H
