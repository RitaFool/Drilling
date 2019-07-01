#include "removedrillingdetail.h"

QString getid2;
QString getjborehole3;

removeDD::removeDD()
{
    this->setWindowTitle("删除孔迹线信息");
    this->resize(400,100);

    L1 = new QLabel("id:");
    id = new QLineEdit();

    L2 = new QLabel("jborehole:");
    jborehole = new QLineEdit();

    confirm = new QPushButton("删除");
    cancel = new QPushButton("取消");

    layout = new QVBoxLayout();
    layout->addWidget(L1);
    layout->addWidget(id);
    layout->addWidget(L2);
    layout->addWidget(jborehole);
    layout->addWidget(confirm);
    layout->addWidget(cancel);

    this->setLayout(layout);
    connect(confirm,SIGNAL(clicked()),this,SLOT(remove()));
    connect(cancel,SIGNAL(clicked()),this,SLOT(exit()));
}

void removeDD::remove()
{
    odbchelper odbc;

    getid2 = this->id->text();
    getjborehole3 = this->jborehole->text();
    odbc.removeDrillingDetail(getid2.toInt(),getjborehole3);

}

void removeDD::exit()
{
    this->hide();
}
