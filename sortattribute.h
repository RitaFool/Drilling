#ifndef SORTATTRIBUTE_H
#define SORTATTRIBUTE_H
#include "sortdialog.h"

#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QtWidgets>
#include <QHBoxLayout>

class sortattribute : public QWidget
{
    Q_OBJECT
public:
    sortattribute(QWidget *parent = 0);
    ~sortattribute();

public slots:
    void changePage(QListWidgetItem *current, QListWidgetItem *previous);

private:
    QListWidget *list;
    QStackedWidget *pages;
    void setLists();

};
#endif // SORTATTRIBUTE_H
