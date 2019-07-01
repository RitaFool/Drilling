#ifndef SORTDIALOG_H
#define SORTDIALOG_H
#pragma execution_character_set("utf-8")

#include <QDialog>
#include <QtWidgets>

extern float getnColorR;
extern float getnColorG;
extern float getnColorB;

extern float getnOpacity;
extern double getnSize;
extern float getlOpacity;

class sortdialog : public QDialog
{
    Q_OBJECT

public:
    sortdialog(QWidget *parent = 0);
    ~sortdialog();
};

class Page8 : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *text1;
public:
    Page8(QWidget *parent = 0);

public slots:
    void lOpacity();

};

class Page9 : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *text1;
    QLineEdit *text2;
    QLineEdit *text3;

public:
    Page9(QWidget *parent = 0);

public slots:
    void nColor();
    void shownColor();

};

class Page10 : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *text1;

public:
    Page10(QWidget *parent = 0);

public slots:
    void nSize();

};

class Page11 : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *text1;

public:
    Page11(QWidget *parent = 0);

public slots:
    void nOpacity();

};


#endif // SORTDIALOG_H
