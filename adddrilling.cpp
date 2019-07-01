#include "adddrilling.h"

#pragma execution_character_set("utf-8")

QString getid;
QString getjborehole;
QString getjtype;
QString getjeast;
QString getjnorth;
QString getjaltitude;
QString getjdepth;
QString getjpath;
QString getjdrill;

addD::addD()
{
    this->setWindowTitle("添加钻孔");
    this->resize(600,200);

    L1 = new QLabel("id:");
    id = new QLineEdit();
    L2 = new QLabel("jborehole:");
    jborehole = new QLineEdit();
    L3 = new QLabel("jtype:");
    jtype = new QLineEdit();
    L4 = new QLabel("jeast:");
    jeast = new QLineEdit();
    L5 = new QLabel("jnorth:");
    jnorth = new QLineEdit();
    L6 = new QLabel("jaltitude:");
    jaltitude = new QLineEdit();
    L7 = new QLabel("jdepth:");
    jdepth = new QLineEdit();
    L8 = new QLabel("jpath:");
    jpath = new QLineEdit();
    L9 = new QLabel("jdrill:");
    jdrill = new QLineEdit();

    confirm = new QPushButton("添加");
    cancel = new QPushButton("取消");

    layout01 = new QHBoxLayout();
    layout02 = new QHBoxLayout();
    layout03 = new QHBoxLayout();
    layout04 = new QHBoxLayout();
    layout05 = new QHBoxLayout();
    layout06 = new QHBoxLayout();
    layout07 = new QHBoxLayout();
    layout08 = new QHBoxLayout();
    layout09 = new QHBoxLayout();

    layout1 = new QVBoxLayout();
    layout2 = new QVBoxLayout();
    layout3 = new QHBoxLayout();
    layout4 = new QHBoxLayout();
    layout5 = new QVBoxLayout();

    layout01->addWidget(L1);
    layout01->addWidget(id);

    layout02->addWidget(L2);
    layout02->addWidget(jborehole);

    layout03->addWidget(L3);
    layout03->addWidget(jtype);

    layout04->addWidget(L4);
    layout04->addWidget(jeast);

    layout05->addWidget(L5);
    layout05->addWidget(jnorth);

    layout1->addLayout(layout01);
    layout1->addLayout(layout02);
    layout1->addLayout(layout03);
    layout1->addLayout(layout04);
    layout1->addLayout(layout05);

    layout06->addWidget(L6);
    layout06->addWidget(jaltitude);

    layout07->addWidget(L7);
    layout07->addWidget(jdepth);

    layout08->addWidget(L8);
    layout08->addWidget(jpath);

    layout09->addWidget(L9);
    layout09->addWidget(jdrill);

    layout2->addLayout(layout06);
    layout2->addLayout(layout07);
    layout2->addLayout(layout08);
    layout2->addLayout(layout09);

    layout3->addLayout(layout1);
    layout3->addLayout(layout2);

    layout4->addWidget(confirm);
    layout4->addWidget(cancel);

    layout5->addLayout(layout3);
    layout5->addLayout(layout4);

    this->setLayout(layout5);
    connect(confirm,SIGNAL(clicked()),this,SLOT(add()));
    connect(cancel,SIGNAL(clicked()),this,SLOT(close()));
}

void addD::add()
{
    odbchelper odbc;

    getid = this->id->text();
    getjborehole = this->jborehole->text();
    getjtype = this->jtype->text();
    getjeast = this->jeast->text();
    getjnorth = this->jnorth->text();
    getjaltitude = this->jaltitude->text();
    getjdepth = this->jdepth->text();
    getjpath = this->jpath->text();
    getjdrill = this->jdrill->text();

    odbc.addDrillingData(getid.toInt(),getjborehole,getjtype,getjeast.toFloat(),getjnorth.toFloat(),getjaltitude.toFloat(),getjdepth.toFloat(),getjpath,getjdrill);

}

