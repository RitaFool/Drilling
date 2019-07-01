#ifndef REMOVEDRILLING_H
#define REMOVEDRILLING_H

#pragma execution_character_set("utf-8")

#include "odbchelper.h"

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>

extern QString getjborehole2;

class removeD : public QWidget
{
    Q_OBJECT
public:
    removeD();

public slots:
    void remove();
    void exit();

private:
    QLabel *L1;
    QLineEdit *jborehole;
    QPushButton *confirm;
    QPushButton *cancel;
    QVBoxLayout *layout;
};

#endif // REMOVEDRILLING_H
