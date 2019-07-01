#include "sortattribute.h"
#include "sortdialog.h"
#pragma execution_character_set("utf-8")

sortattribute::sortattribute(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("地层属性");
    this->resize(480,200);
    list = new QListWidget;
    list->setCurrentRow(0);

    pages = new QStackedWidget;
    pages->addWidget(new Page8);    //往堆栈窗口里面添加页面
    pages->addWidget(new Page9);
    pages->addWidget(new Page10);
    pages->addWidget(new Page11);

    setLists();

    QHBoxLayout *myLayout = new QHBoxLayout;
    myLayout->addWidget(list);               //设置布局
    myLayout->addWidget(pages);
    myLayout->setStretchFactor(list, 1);     //设置显示列表和窗口的比例1：10
    myLayout->setStretchFactor(pages, 10);
    setLayout(myLayout);

}

void sortattribute::setLists()
{
    QListWidgetItem *page8Button = new QListWidgetItem(list);                   //设置显示列表
    page8Button->setText(tr("地层透明度"));
    page8Button->setTextAlignment(Qt::AlignHCenter);
    page8Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page9Button = new QListWidgetItem(list);
    page9Button->setText(tr("编号颜色"));
    page9Button->setTextAlignment(Qt::AlignHCenter);
    page9Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page10Button = new QListWidgetItem(list);
    page10Button->setText(tr("编号大小"));
    page10Button->setTextAlignment(Qt::AlignHCenter);
    page10Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *page11Button = new QListWidgetItem(list);
    page11Button->setText(tr("编号透明度"));
    page11Button->setTextAlignment(Qt::AlignHCenter);
    page11Button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


    connect(list,                                                               //将显示列表与堆栈窗口关联，点击列表中的按键，显示相应的窗口
                SIGNAL(currentItemChanged(QListWidgetItem *,QListWidgetItem *)),
                this, SLOT(changePage(QListWidgetItem *,QListWidgetItem *)));
}

void sortattribute::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;
     pages->setCurrentIndex(list->row(current));
}

sortattribute::~sortattribute()
{

}
