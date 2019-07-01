#include "removedrilling.h"

#pragma execution_character_set("utf-8")

QString getjborehole2;

removeD::removeD()
{
    this->setWindowTitle("删除钻孔");
    this->resize(400,100);

    L1 = new QLabel("jborehole:");
    jborehole = new QLineEdit();

    confirm = new QPushButton("删除");
    cancel = new QPushButton("取消");

    layout = new QVBoxLayout();
    layout->addWidget(L1);
    layout->addWidget(jborehole);
    layout->addWidget(confirm);
    layout->addWidget(cancel);

    this->setLayout(layout);
    connect(confirm,SIGNAL(clicked()),this,SLOT(remove()));
    connect(cancel,SIGNAL(clicked()),this,SLOT(exit()));

}

void removeD::remove()
{
    odbchelper odbc;

    getjborehole2 = this->jborehole->text();
    odbc.removeDrillingData(getjborehole2);

}

void removeD::exit()
{
    this->hide();
}
