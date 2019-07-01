#include "widget.h"

Renderer rend;
QVTKWidget *a;

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("Drilling");
    this->resize(600,400);

    //菜单项实例化
    drillingView = new QMenu(this);//this指当前窗口
    drillingCode = new QMenu(this);
    drillingEdit = new QMenu(this);
    sortView = new QMenu(this);

    drillingView = menuBar()->addMenu("钻孔显示");
    drillingCode = menuBar()->addMenu("钻孔编码");
    drillingEdit = menuBar()->addMenu("编辑钻孔");
    sortView = menuBar()->addMenu("地层展示");

    viewDrilling = new QAction("显示钻孔",this);
    viewDrilling->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_V));
    viewDrilling->setStatusTip("Drilling view");
    connect(viewDrilling,SIGNAL(triggered()),this,SLOT(slotViewDrilling()));

    hideDrilling = new QAction("隐藏钻孔",this);
    hideDrilling->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_H));
    hideDrilling->setStatusTip("Drilling hide");
    connect(hideDrilling,SIGNAL(triggered()),this,SLOT(slotHideDrilling()));

    viewLine = new QMenu("显示孔迹线",this);
    viewLine->setStatusTip("Line view");

    linearDisplay = new QAction("线状显示", this);
    linearDisplay->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
    linearDisplay->setCheckable(true);
    connect(linearDisplay,SIGNAL(changed()),this,SLOT(slotViewLine()));

    columnDisplay = new QAction("柱状显示", this);
    columnDisplay->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_M));
    columnDisplay->setCheckable(true);
    connect(columnDisplay,SIGNAL(changed()),this,SLOT(slotViewLine()));

    hideLine = new QAction("隐藏孔迹线",this);
    hideLine->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_P));
    hideLine->setStatusTip("Drilling hide");
    connect(hideLine,SIGNAL(triggered(bool)),this,SLOT(slotHideLine()));

    lithologyDrilling = new QAction("钻孔分层显示",this);
    lithologyDrilling->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_L));
    lithologyDrilling->setStatusTip("Drilling lithoLogy view");
    connect(lithologyDrilling,SIGNAL(triggered()),this,SLOT(slotLithologyDrilling()));

    viewCode = new QAction("显示编码",this);
    viewCode->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_C));
    viewCode->setStatusTip("Drilling code view");
    connect(viewCode,SIGNAL(triggered()),this,SLOT(slotViewCode()));

    hideCode = new QAction("隐藏编码",this);
    hideCode->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_U));
    hideCode->setStatusTip("Drilling code hide");
    connect(hideCode,SIGNAL(triggered()),this,SLOT(slotHideCode()));

    drillingProperties = new QAction("钻孔属性", this);
    drillingProperties->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_I));
    drillingProperties->setStatusTip("Drilling properties");
    connect(drillingProperties,SIGNAL(triggered()),this,SLOT(slotAttribute()));

    testDrilling = new QAction("钻孔检测",this);
    testDrilling->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_T));
    testDrilling->setStatusTip("Drilling Test");
    connect(testDrilling,SIGNAL(triggered()),this,SLOT(slotCheckDrilling()));

    addDrilling = new QAction("添加钻孔",this);
    addDrilling->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_A));
    addDrilling->setStatusTip("Drilling add");
    connect(addDrilling,SIGNAL(triggered()),this,SLOT(slotAddDrilling()));

    removeDrilling = new QAction("删除钻孔",this);
    removeDrilling->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_D));
    removeDrilling->setStatusTip("Drilling remove");
    connect(removeDrilling,SIGNAL(triggered()),this,SLOT(slotRemoveDrilling()));

    addDrillingData = new QAction("添加孔迹线信息",this);
    addDrillingData->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_W));
    addDrillingData->setStatusTip("Drilling add");
    connect(addDrillingData,SIGNAL(triggered()),this,SLOT(slotAddDrillingDetail()));

    removeDrillingData = new QAction("删除孔迹线信息",this);
    removeDrillingData->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_E));
    removeDrillingData->setStatusTip("Drilling remove");
    connect(removeDrillingData,SIGNAL(triggered()),this,SLOT(slotRemoveDrillingDetail()));

    sortMenu = new QMenu("地层显示",this);
    sortMenu->setStatusTip("Sort view menu");

    viewSort = new QAction("地层显示",this);
    viewSort->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_S));
    viewSort->setStatusTip("Sort view");
    connect(viewSort,SIGNAL(triggered()),this,SLOT(slotViewSort()));
    hideSort = new QAction("地层关闭",this);
    hideSort->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_B));
    hideSort->setStatusTip("Sort hide");
    connect(hideSort,SIGNAL(triggered()),this,SLOT(slotHideSort()));

    topMenu = new QMenu("顶层显示",this);
    topMenu->setStatusTip("Top view menu");

    viewTop = new QAction("顶层显示",this);
    viewTop->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
    viewTop->setStatusTip("Top view");
    connect(viewTop,SIGNAL(triggered()),this,SLOT(slotViewTop()));
    hideTop = new QAction("顶层关闭",this);
    hideTop->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_I));
    hideTop->setStatusTip("Top hide");
    connect(hideTop,SIGNAL(triggered()),this,SLOT(slotHideTop()));

    bottomMenu = new QMenu("底层显示",this);
    bottomMenu->setStatusTip("Bottom view menu");

    viewBottom = new QAction("底层显示",this);
    viewBottom->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
    viewBottom->setStatusTip("Bottom view");
    connect(viewBottom,SIGNAL(triggered()),this,SLOT(slotViewBottom()));
    hideBottom = new QAction("底层关闭",this);
    hideBottom->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_R));
    hideBottom->setStatusTip("Bottom hide");
    connect(hideBottom,SIGNAL(triggered()),this,SLOT(slotHideBottom()));

    borderMenu = new QMenu("围边显示",this);
    borderMenu->setStatusTip("Border view menu");

    viewBorder = new QAction("围边显示",this);
    viewBorder->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Y));
    viewBorder->setStatusTip("Border view");
    connect(viewBorder,SIGNAL(triggered()),this,SLOT(slotViewBorder()));
    hideBorder = new QAction("围边关闭",this);
    hideBorder->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_F));
    hideBorder->setStatusTip("Border hide");
    connect(hideBorder,SIGNAL(triggered()),this,SLOT(slotHideBorder()));

    sortAttribute = new QAction("地层属性",this);
    sortAttribute->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_J));
    sortAttribute->setStatusTip("Sort attribute");
    connect(sortAttribute,SIGNAL(triggered()),this,SLOT(slotSortAttribute()));

    drillingView->addAction(viewDrilling);
    drillingView->addAction(hideDrilling);
    drillingView->addMenu(viewLine);
    viewLine->addAction(linearDisplay);
    viewLine->addAction(columnDisplay);
    drillingView->addAction(hideLine);
    drillingView->addAction(lithologyDrilling);

    drillingCode->addAction(viewCode);
    drillingCode->addAction(hideCode);
    drillingCode->addAction(drillingProperties);

    drillingEdit->addAction(addDrilling);
    drillingEdit->addAction(removeDrilling);
    drillingEdit->addAction(addDrillingData);
    drillingEdit->addAction(removeDrillingData);
    drillingEdit->addAction(testDrilling);

    sortView->addMenu(sortMenu);
    sortMenu->addAction(viewSort);
    sortMenu->addAction(hideSort);
    sortView->addMenu(topMenu);
    topMenu->addAction(viewTop);
    topMenu->addAction(hideTop);
    sortView->addMenu(bottomMenu);
    bottomMenu->addAction(viewBottom);
    bottomMenu->addAction(hideBottom);
    sortView->addMenu(borderMenu);
    borderMenu->addAction(viewBorder);
    borderMenu->addAction(hideBorder);
    sortView->addAction(sortAttribute);

    menuBar()->hide();

    enterSys = new QPushButton(this);
    enterSys->setText("进入系统");
    enterSys->setGeometry(200,150,200,100);
    connect(enterSys,SIGNAL(clicked()),this,SLOT(enterSystem()));

}

Widget::~Widget()
{

}

//进入系统按钮槽函数
void Widget::enterSystem()
{
    menuBar()->show();
    a = new QVTKWidget(this);
    a->GetRenderWindow()->AddRenderer(rend.renderer);
    delete enterSys;
    setCentralWidget(a);
}

//显示和隐藏钻孔槽函数
void Widget::slotViewDrilling()
{
    rend.viewDrilling();
    a->GetRenderWindow()->Render();
}
void Widget::slotHideDrilling()
{
    rend.hideDrilling();
    a->GetRenderWindow()->Render();
}

//显示和隐藏孔迹线槽函数
void Widget::slotViewLine()
{
    if(linearDisplay->isChecked()) { rend.linearDisplayState=true; rend.viewLine(); }
    if(columnDisplay->isChecked()) { rend.columnDisplayState=true; rend.viewTube(); }
    if(!linearDisplay->isChecked()) { rend.linearDisplayState=false; rend.hideLine(); }
    if(!columnDisplay->isChecked()) { rend.columnDisplayState=false; rend.hideTube(); }
    a->GetRenderWindow()->Render();
}
void Widget::slotHideLine()
{
    linearDisplay->setChecked(false);
    columnDisplay->setChecked(false);
    a->GetRenderWindow()->Render();
}

void Widget::slotAddDrilling()
{
    add = new addD();
    add->show();
}

void Widget::slotRemoveDrilling()
{
    remove = new removeD();
    remove->show();
}
void Widget::slotAddDrillingDetail()
{
    add2 = new addDD();
    add2->show();
}

void Widget::slotRemoveDrillingDetail()
{
    remove2 = new removeDD();
    remove2->show();
}

//孔迹线分层显示槽函数
void Widget::slotLithologyDrilling()
{
    LithologyDrilling *l;
    l = new LithologyDrilling();
    l->show();
    rend.hideLine();
    rend.hideTube();
    a->GetRenderWindow()->Render();
}

//显示和隐藏编码槽函数
void Widget::slotViewCode()
{
    rend.viewCode();
    a->GetRenderWindow()->Render();
}
void Widget::slotHideCode()
{
    rend.hideCode();
    a->GetRenderWindow()->Render();
}

void Widget::slotCheckDrilling()
{
    QString checkResult=QString("检测结果正常！");

    bool dislocationFlag=false;//是否上下错位
    int *dislocationArray=new int[count];//记录上下错位所在地层的数组
    int a=0;
    bool continueFlag=false;//是否连续多层
    int *continueArray=new int[count];//记录连续多层所在地层的数组
    int b=0;
    bool noContinueFlag=false;//是否不连续多层
    int *noContinueArray=new int[count];//记录不连续多层所在地层的数组
    int c=0;
    bool zeroThicknessFlag=false;//是否有厚度为零的地层
    int *zeroThicknessArray=new int[count];//记录厚度为零的地层
    int d=0;

    for(int i=0;i<count;i++){
        //if判断防止数组越界
        if(i<count-1){
            if(jlithology[i]!="chazhi" && jlithology[i]!="bujialayer" && jlithology[i]!="1"
                    && jlithology[i+1]!="chazhi" && jlithology[i+1]!="bujialayer" && jlithology[i+1]!="1"){
                //检测是否上下错位并记录
                if(jlithology[i] > jlithology[i+1]){
                    dislocationFlag=true;
                    dislocationArray[a]=i;
                    a++;
                }
                //检测是否连续多层并记录
                if(jlithology[i] == jlithology[i+1]){
                    continueFlag=true;
                    continueArray[b]=i;
                    b++;
                 }
            }
        }
        if(i<count-2){
            if(jlithology[i]!="chazhi" && jlithology[i]!="bujialayer" && jlithology[i]!="1"
                    && jlithology[i+2]!="chazhi" && jlithology[i+2]!="bujialayer" && jlithology[i+2]!="1"){
                //检测是否不连续多层并记录
                if(jlithology[i] == jlithology[i+2] && jlithology[i] != jlithology[i+1]){
                    noContinueFlag=true;
                    noContinueArray[c]=i;
                    c++;
                }
            }
        }
        //检测是否有厚度为零的地层并记录
        if(jaltitudeto[i] - jaltitudefrom[i]==0){
            zeroThicknessFlag=true;
            zeroThicknessArray[d]=i;
            d++;
        }
    }
    //输出
    if(dislocationFlag || continueFlag || noContinueFlag || zeroThicknessFlag){
        checkResult="";//清空字符串
        if(dislocationFlag){
            checkResult.append("上下错位！\n");
            for(int i=0;i<a;i++){
                checkResult.append(jlithology[dislocationArray[i]]+"和"+jlithology[dislocationArray[i]+1]+"地层上下错位。\n");
            }
            checkResult.append("\n");
        }
        if(continueFlag){
            checkResult.append("连续多层！\n");
            for(int i=0;i<b;i++){
                checkResult.append(jlithology[continueArray[i]]+"地层连续多层。\n");
            }
            checkResult.append("\n");
        }
        if(noContinueFlag){
            checkResult.append("不连续多层！\n");
            for(int i=0;i<c;i++){
                checkResult.append(jlithology[noContinueArray[i]]+"和"+jlithology[noContinueArray[i]+1]+"和"+jlithology[noContinueArray[i]+2]+"不连续多层。\n");
            }
            checkResult.append("\n");
        }
        if(zeroThicknessFlag){
           checkResult.append("有厚度为零的地层！\n");
           for(int i=0;i<d;i++){
               checkResult.append(jlithology[zeroThicknessArray[i]]+"地层厚度为零。\n");
           }
           checkResult.append("\n");
        }
    }
    QMessageBox::about(this,"检测结果",checkResult);
}

void Widget::slotAttribute()
{
    win = new attribute();
    win->show();
}

//地层展示
void Widget::slotViewSort() // 地层显示
{
    rend.slotViewSort();
    a->GetRenderWindow()->Render();
}

void Widget::slotHideSort()
{
    rend.slotHideSort();
    a->GetRenderWindow()->Render();
}

void Widget::slotViewTop() // 顶层显示
{
    rend.slotViewTop();
    a->GetRenderWindow()->Render();
}

void Widget::slotHideTop()
{
    rend.slotHideTop();
    a->GetRenderWindow()->Render();
}

void Widget::slotViewBottom() // 底层显示
{
    rend.slotViewBottom();
    a->GetRenderWindow()->Render();
}

void Widget::slotHideBottom()
{
    rend.slotHideBottom();
    a->GetRenderWindow()->Render();
}

void Widget::slotViewBorder() // 围边显示
{
    rend.slotViewBorder();
    a->GetRenderWindow()->Render();
}

void Widget::slotHideBorder()
{
    rend.slotHideBorder();
    a->GetRenderWindow()->Render();
}

void Widget::slotSortAttribute() // 地层属性
{
    win1 = new sortattribute();
    win1->show();
}
