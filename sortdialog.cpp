#include "sortdialog.h"
#include "widget.h"
#include <QtWidgets>

#pragma execution_character_set("utf-8")

float getnColorR=0;
float getnColorG=0;
float getnColorB=1;

float getnOpacity=0.8f;
double getnSize=30;
float getlOpacity=0.5f;

sortdialog::sortdialog(QWidget *parent)
    : QDialog(parent)
{

}

sortdialog::~sortdialog()
{

}

Page8::Page8(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入地层透明度(0-1,越小越透明):");
    text1 =new QLineEdit();
    QPushButton *btn1 = new QPushButton("设置");
    QHBoxLayout *hLayout1 = new QHBoxLayout();
    QHBoxLayout *hLayout2 = new QHBoxLayout();
    QVBoxLayout *vLayout = new QVBoxLayout;
    hLayout1->addWidget(label);
    hLayout2->addWidget(text1);
    vLayout->addLayout(hLayout1);
    vLayout->addLayout(hLayout2);
    vLayout->addWidget(btn1,0,Qt::AlignTop);
    setLayout(vLayout);
    connect(btn1,SIGNAL(clicked()),this,SLOT(lOpacity()));
}

Page9::Page9(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请使用调色盘或手动输入要调整颜色的RGB值");
    QLabel *label1 =new QLabel("R:");
    text1 =new QLineEdit();
    QLabel *label2 =new QLabel("G:");
    text2 =new QLineEdit();
    QLabel *label3 =new QLabel("B:");
    text3 =new QLineEdit();
    QPushButton *btn1 = new QPushButton(QObject::tr("调色盘"));
    QPushButton *btn2 = new QPushButton(QObject::tr("确认"));
    QHBoxLayout *hLayout1 = new QHBoxLayout();
    QHBoxLayout *hLayout2 = new QHBoxLayout();
    QHBoxLayout *hLayout3 = new QHBoxLayout();
    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget(label);
    hLayout1->addWidget(label1);
    hLayout1->addWidget(text1);
    vLayout->addLayout(hLayout1);
    hLayout2->addWidget(label2);
    hLayout2->addWidget(text2);
    vLayout->addLayout(hLayout2);
    hLayout3->addWidget(label3);
    hLayout3->addWidget(text3);
    vLayout->addLayout(hLayout3);
    vLayout->addWidget(btn1,0,Qt::AlignTop);
    vLayout->addWidget(btn2,0,Qt::AlignTop);
    setLayout(vLayout);
    connect(btn1,SIGNAL(clicked()),this,SLOT(shownColor()));
    connect(btn2,SIGNAL(clicked()),this,SLOT(nColor()));
}

Page10::Page10(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入编号大小(最低为0,过大可能影响观感):");
    text1 =new QLineEdit();
    QPushButton *btn1 = new QPushButton("设置");
    QHBoxLayout *hLayout1 = new QHBoxLayout();
    QHBoxLayout *hLayout2 = new QHBoxLayout();
    QVBoxLayout *vLayout = new QVBoxLayout;
    hLayout1->addWidget(label);
    hLayout2->addWidget(text1);
    vLayout->addLayout(hLayout1);
    vLayout->addLayout(hLayout2);
    vLayout->addWidget(btn1,0,Qt::AlignTop);
    setLayout(vLayout);
    connect(btn1,SIGNAL(clicked()),this,SLOT(nSize()));
}

Page11::Page11(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入编号透明度(0-1,越小越透明):");
    text1 =new QLineEdit();
    QPushButton *btn1 = new QPushButton("设置");
    QHBoxLayout *hLayout1 = new QHBoxLayout();
    QHBoxLayout *hLayout2 = new QHBoxLayout();
    QVBoxLayout *vLayout = new QVBoxLayout;
    hLayout1->addWidget(label);
    hLayout2->addWidget(text1);
    vLayout->addLayout(hLayout1);
    vLayout->addLayout(hLayout2);
    vLayout->addWidget(btn1,0,Qt::AlignTop);
    setLayout(vLayout);
    connect(btn1,SIGNAL(clicked()),this,SLOT(nOpacity()));
}

void Page8::lOpacity()
{
    QString str = text1->text();
    getlOpacity = str.toFloat();
    if(getlOpacity>=0&&getlOpacity<=1){
        QMessageBox::about(NULL,QString("设置成功"),QString("设置地层透明度成功"));
        rend.layer.triangulatedActor->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor2->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor3->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor4->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor5->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor6->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor7->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor8->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor9->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor10->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor11->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor12->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor13->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor14->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.triangulatedActor15->GetProperty()->SetOpacity(getlOpacity);
        rend.layer.planeActor->GetProperty()->SetOpacity(getlOpacity);
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("地层透明度错误"));
    }
}

void Page9::nColor()
{
    QString str1=text1->text();
    QString str2=text2->text();
    QString str3=text3->text();
    if(str1.toFloat()>=0 && str1.toFloat()<=255 && str2.toFloat()>=0 && str2.toFloat()<=255 && str2.toFloat()>=0 && str2.toFloat()<=255)
    {
        getnColorR = (str1.toFloat())/255;
        getnColorG = (str2.toFloat())/255;
        getnColorB = (str3.toFloat())/255;

        QMessageBox::about(NULL,QString("设置成功"),QString("设置编号颜色成功"));
        rend.layer.textActor->GetTextProperty()->SetColor(getnColorR,getnColorG,getnColorB);
        a->GetRenderWindow()->Render();

    }else
    {
        QMessageBox::warning(NULL,QString("设置失败"),QString("设置编号颜色失败"));
    }
}

void Page9::shownColor()
{
    QColor c = QColorDialog::getColor(Qt::blue);//静态方法，默认为蓝色，括号中的参数为默认颜色
    if(c.isValid())
    {
        QString r=QString::number(c.red(),10);
        QString g=QString::number(c.green(),10);
        QString b=QString::number(c.blue(),10);
        text1->setText(r);
        text2->setText(g);
        text3->setText(b);
    }else
    {
        QMessageBox::warning(NULL,QString("Warning"),QString("颜色错误"));
    }
}

void Page10::nSize()
{
    QString str = text1->text();
    if(getnSize>=0){
        getnSize = str.toDouble();
        QMessageBox::about(NULL,QString("设置成功"),QString("设置编号大小成功"));
        rend.layer.textActor->GetTextProperty()->SetFontSize(getnSize);
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("编号大小错误"));
    }
}

void Page11::nOpacity()
{
    QString str = text1->text();
    if(getnOpacity>=0&&getnOpacity<=1){
        getnOpacity = str.toFloat();
        QMessageBox::about(NULL,QString("设置成功"),QString("设置编号透明度成功"));
        rend.layer.textActor->GetTextProperty()->SetOpacity(getnOpacity);
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("编号透明度错误"));
    }
}
