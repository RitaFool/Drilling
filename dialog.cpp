#include "dialog.h"
#include "widget.h"
#include <QtWidgets>

#pragma execution_character_set("utf-8")

float getdColorR=0;
float getdColorG=1;
float getdColorB=0;

float getcColorR=0;
float getcColorG=0;
float getcColorB=1;

int getThickness=5;
float getcOpacity=0.8f;
double getcSize=0.5;
float getdOpacity=1;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{

}

Dialog::~Dialog()
{

}

Page1::Page1(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请使用调色盘或手动输入要调整颜色的RGB值：");
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
    connect(btn1,SIGNAL(clicked()),this,SLOT(showColor()));
    connect(btn2,SIGNAL(clicked()),this,SLOT(Color()));
}

Page2::Page2(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入钻孔粗细(最低为1,过大可能影响观感):");
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
    connect(btn1,SIGNAL(clicked()),this,SLOT(dThickness()));
}

Page3::Page3(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入钻孔透明度(0-1,越小越透明):");
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
    connect(btn1,SIGNAL(clicked()),this,SLOT(dOpacity()));
}

Page4::Page4(QWidget *parent)
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
    connect(btn1,SIGNAL(clicked()),this,SLOT(showcColor()));
    connect(btn2,SIGNAL(clicked()),this,SLOT(cColor()));
}

Page5::Page5(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入编码大小(最低为0,过大可能影响观感):");
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
    connect(btn1,SIGNAL(clicked()),this,SLOT(cSize()));
}

Page6::Page6(QWidget *parent)
    : QWidget(parent)
{
    QLabel *label =new QLabel("请输入编码透明度(0-1,越小越透明):");
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
    connect(btn1,SIGNAL(clicked()),this,SLOT(cOpacity()));
}


void Page1::Color()
{
    QString str1=text1->text();
    QString str2=text2->text();
    QString str3=text3->text();
    if(str1.toFloat()>=0 && str1.toFloat()<=255 && str2.toFloat()>=0 && str2.toFloat()<=255 && str2.toFloat()>=0 && str2.toFloat()<=255)
    {
        getdColorR = (str1.toFloat())/255;
        getdColorG = (str2.toFloat())/255;
        getdColorB = (str3.toFloat())/255;

        QMessageBox::about(NULL,QString("设置成功"),QString("设置钻孔颜色成功"));
        rend.layer.pointsActor->GetProperty()->SetColor(getdColorR,getdColorG,getdColorB);
        a->GetRenderWindow()->Render();
    }else
    {
        QMessageBox::warning(NULL,QString("设置失败"),QString("设置钻孔颜色失败"));
    }
}

void Page1::showColor()
{
    QColor c = QColorDialog::getColor(Qt::green);//静态方法，默认为绿色，括号中的参数为默认颜色
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

void Page2::dThickness()
{
    QString str = text1->text();
    getThickness = str.toInt();
    if(getThickness>=1){
        QMessageBox::about(NULL,QString("设置成功"),QString("设置钻孔粗细成功"));
        rend.layer.pointsActor->GetProperty()->SetPointSize(getThickness);
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("钻孔粗细错误"));
    }
}

void Page3::dOpacity()
{
    QString str = text1->text();
    getdOpacity = str.toFloat();
    if(getdOpacity>=0&&getdOpacity<=1){
        QMessageBox::about(NULL,QString("设置成功"),QString("设置钻孔透明度成功"));
        rend.layer.pointsActor->GetProperty()->SetOpacity(getdOpacity);
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("钻孔透明度错误"));
    }
}

void Page4::cColor()
{
    QString str1=text1->text();
    QString str2=text2->text();
    QString str3=text3->text();
    if(str1.toFloat()>=0 && str1.toFloat()<=255 && str2.toFloat()>=0 && str2.toFloat()<=255 && str2.toFloat()>=0 && str2.toFloat()<=255)
    {
        getcColorR = (str1.toFloat())/255;
        getcColorG = (str2.toFloat())/255;
        getcColorB = (str3.toFloat())/255;

        QMessageBox::about(NULL,QString("设置成功"),QString("设置编码颜色成功"));
        for(int i = 0; i<m; i++)
        {
            rend.layer.textActors[i]->GetTextProperty()->SetColor(getcColorR,getcColorG,getcColorB);
        }
        a->GetRenderWindow()->Render();

    }else
    {
        QMessageBox::warning(NULL,QString("设置失败"),QString("设置编码颜色失败"));
    }
}

void Page4::showcColor()
{
    QColor c = QColorDialog::getColor(Qt::green);//静态方法，默认为绿色，括号中的参数为默认颜色
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

void Page5::cSize()
{
    QString str = text1->text();
    if(getcSize>=0){
        getcSize = str.toDouble();
        QMessageBox::about(NULL,QString("设置成功"),QString("设置编码大小成功"));
        for(int i = 0; i<m; i++)
        {
            rend.layer.textActors[i]->GetTextProperty()->SetFontSize(getcSize);
        }
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("编码大小错误"));
    }
}

void Page6::cOpacity()
{
    QString str = text1->text();
    if(getcOpacity>=0&&getcOpacity<=1){
        getcOpacity = str.toFloat();
        QMessageBox::about(NULL,QString("设置成功"),QString("设置钻孔透明度成功"));
        for(int i = 0; i<m; i++)
        {
            rend.layer.textActors[i]->GetTextProperty()->SetOpacity(getcOpacity);
        }
        a->GetRenderWindow()->Render();
    }else{
        QMessageBox::warning(NULL,QString("Warning"),QString("编码透明度错误"));
    }
}
