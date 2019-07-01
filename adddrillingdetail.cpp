#include "adddrillingdetail.h"

#pragma execution_character_set("utf-8")

QString getDid;
QString getDjborehole;
QString getDjsample;
QString getDjdepthfrom;
QString getDjdepthto;
QString getDjeastfrom;
QString getDjnorthfrom;
QString getDjaltitudefrom;
QString getDjeastto;
QString getDjnorthto;
QString getDjaltitudeto;
QString getDjlithology;
QString getDjflag;
QString getDlithologysort;
QString getDattribute;

addDD::addDD()
{
    this->setWindowTitle("添加孔迹线信息");
    this->resize(600,300);

    L1 = new QLabel("id:");
    Did = new QLineEdit();
    L2 = new QLabel("jborehole:");
    Djborehole = new QLineEdit();
    L3 = new QLabel("jsample:");
    Djsample = new QLineEdit();
    L4 = new QLabel("jdepthfrom:");
    Djdepthfrom = new QLineEdit();
    L5 = new QLabel("jdepthto:");
    Djdepthto = new QLineEdit();
    L6 = new QLabel("jeastfrom:");
    Djeastfrom = new QLineEdit();
    L7 = new QLabel("jnorthfrom:");
    Djnorthfrom = new QLineEdit();
    L8 = new QLabel("jaltitudefrom:");
    Djaltitudefrom = new QLineEdit();
    L9 = new QLabel("jeastto:");
    Djeastto = new QLineEdit();
    L10 = new QLabel("jnorthto:");
    Djnorthto = new QLineEdit();
    L11 = new QLabel("jaltitudeto:");
    Djaltitudeto = new QLineEdit();
    L12 = new QLabel("jlithology:");
    Djlithology = new QLineEdit();
    L13 = new QLabel("jflag:");
    Djflag = new QLineEdit();
    L14 = new QLabel("lithologysort:");
    Dlithologysort = new QLineEdit();
    L15 = new QLabel("attribute:");
    Dattribute = new QLineEdit();

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
    layout10 = new QHBoxLayout();
    layout11 = new QHBoxLayout();
    layout12 = new QHBoxLayout();
    layout13 = new QHBoxLayout();
    layout14 = new QHBoxLayout();
    layout15 = new QHBoxLayout();

    layout1 = new QVBoxLayout();
    layout2 = new QVBoxLayout();
    layout3 = new QHBoxLayout();
    layout4 = new QHBoxLayout();
    layout5 = new QVBoxLayout();

    layout01->addWidget(L1);
    layout01->addWidget(Did);

    layout02->addWidget(L2);
    layout02->addWidget(Djborehole);

    layout03->addWidget(L3);
    layout03->addWidget(Djsample);

    layout04->addWidget(L4);
    layout04->addWidget(Djdepthfrom);

    layout05->addWidget(L5);
    layout05->addWidget(Djdepthto);

    layout06->addWidget(L6);
    layout06->addWidget(Djeastfrom);

    layout07->addWidget(L7);
    layout07->addWidget(Djnorthfrom);

    layout08->addWidget(L8);
    layout08->addWidget(Djaltitudefrom);

    layout1->addLayout(layout01);
    layout1->addLayout(layout02);
    layout1->addLayout(layout03);
    layout1->addLayout(layout04);
    layout1->addLayout(layout05);
    layout1->addLayout(layout06);
    layout1->addLayout(layout07);
    layout1->addLayout(layout08);

    layout09->addWidget(L9);
    layout09->addWidget(Djeastto);

    layout10->addWidget(L10);
    layout10->addWidget(Djnorthto);

    layout11->addWidget(L11);
    layout11->addWidget(Djaltitudeto);

    layout12->addWidget(L12);
    layout12->addWidget(Djlithology);

    layout13->addWidget(L13);
    layout13->addWidget(Djflag);

    layout14->addWidget(L14);
    layout14->addWidget(Dlithologysort);

    layout15->addWidget(L15);
    layout15->addWidget(Dattribute);

    layout2->addLayout(layout09);
    layout2->addLayout(layout10);
    layout2->addLayout(layout11);
    layout2->addLayout(layout12);
    layout2->addLayout(layout13);
    layout2->addLayout(layout14);
    layout2->addLayout(layout15);

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

void addDD::add()
{
    odbchelper odbc;

    getDid = this->Did->text();
    getDjborehole = this->Djborehole->text();
    getDjsample = this->Djsample->text();
    getDjdepthfrom = this->Djdepthfrom->text();
    getDjdepthto = this->Djdepthto->text();
    getDjeastfrom = this->Djeastfrom->text();
    getDjnorthfrom = this->Djnorthfrom->text();
    getDjaltitudefrom = this->Djaltitudefrom->text();
    getDjeastto = this->Djeastto->text();
    getDjnorthto = this->Djnorthto->text();
    getDjaltitudeto = this->Djaltitudeto->text();
    getDjlithology = this->Djlithology->text();
    getDjflag = this->Djflag->text();
    getDlithologysort = this->Dlithologysort->text();
    getDattribute = this->Dattribute->text();

    odbc.addDrillingDetail(getDid.toInt(),getDjborehole,getDjsample,getDjdepthfrom.toFloat(),getDjdepthto.toFloat(),getDjeastfrom.toFloat(),getDjnorthfrom.toFloat(),getDjaltitudefrom.toFloat(),getDjeastto.toFloat(),getDjnorthto.toFloat(),getDjaltitudeto.toFloat(),getDjlithology,getDjflag,getDlithologysort.toInt(),getDattribute.toFloat());

}
