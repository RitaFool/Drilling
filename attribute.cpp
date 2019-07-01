#include "attribute.h"

#pragma execution_character_set("utf-8")

attribute::attribute(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("钻孔属性");
    this->resize(480,200);
    list = new QListWidget;
    list->setCurrentRow(0);

    pages = new QStackedWidget;
    pages->addWidget(new Page1);             //往堆栈窗口里面添加页面
    pages->addWidget(new Page2);
    pages->addWidget(new Page3);
    pages->addWidget(new Page4);
    pages->addWidget(new Page5);
    pages->addWidget(new Page6);

    setLists();

    QHBoxLayout *myLayout = new QHBoxLayout;
    myLayout->addWidget(list);               //设置布局
    myLayout->addWidget(pages);
    myLayout->setStretchFactor(list, 1);     //设置显示列表和窗口的比例1：10
    myLayout->setStretchFactor(pages, 10);
    setLayout(myLayout);

}

void attribute::setLists()
{
    QListWidgetItem *page1Button = new QListWidgetItem(list);                   //设置显示列表
    page1Button->setText(tr("钻孔颜色"));
    page1Button->setTextAlignment(Qt::AlignHCenter);
    page1Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page2Button = new QListWidgetItem(list);
    page2Button->setText(tr("钻孔粗细"));
    page2Button->setTextAlignment(Qt::AlignHCenter);
    page2Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page3Button = new QListWidgetItem(list);
    page3Button->setText(tr("钻孔透明度"));
    page3Button->setTextAlignment(Qt::AlignHCenter);
    page3Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page4Button = new QListWidgetItem(list);
    page4Button->setText(tr("编码颜色"));
    page4Button->setTextAlignment(Qt::AlignHCenter);
    page4Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page5Button = new QListWidgetItem(list);
    page5Button->setText(tr("编码大小"));
    page5Button->setTextAlignment(Qt::AlignHCenter);
    page5Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page6Button = new QListWidgetItem(list);
    page6Button->setText(tr("编码透明度"));
    page6Button->setTextAlignment(Qt::AlignHCenter);
    page6Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


    connect(list,                                                               //将显示列表与堆栈窗口关联，点击列表中的按键，显示相应的窗口
                SIGNAL(currentItemChanged(QListWidgetItem *,QListWidgetItem *)),
                this, SLOT(changePage(QListWidgetItem *,QListWidgetItem *)));
}

void attribute::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;
     pages->setCurrentIndex(list->row(current));
}

attribute::~attribute()
{

}
