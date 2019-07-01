#include "lithologydrilling.h"

#pragma execution_character_set("utf-8")

LithologyDrilling::LithologyDrilling()
{
    this->setWindowTitle("钻孔分层显示");
    this->resize(400,300);

    layout = new QVBoxLayout();
    label = new QLabel("请选择需要显示的地层：");
    btn = new QPushButton("确定");
    connect(btn,SIGNAL(clicked()),this,SLOT(slotOk()));

    layout1 = new QHBoxLayout();
    layout2 = new QHBoxLayout();
    layout3 = new QHBoxLayout();
    layout4 = new QHBoxLayout();
    layout5 = new QHBoxLayout();
    layout6 = new QHBoxLayout();
    layout7 = new QHBoxLayout();
    layout8 = new QHBoxLayout();
    layout9 = new QHBoxLayout();
    layout10 = new QHBoxLayout();

    //checkbox=================================================================================
    L1_1CheckBox = new QCheckBox("L1_1层", this);
    L1_2CheckBox = new QCheckBox("L1_2层", this);
    L2_1CheckBox = new QCheckBox("L2_1层", this);
    L2_2CheckBox = new QCheckBox("L2_2层", this);
    L2_3CheckBox = new QCheckBox("L2_3层", this);
    L3_1CheckBox = new QCheckBox("L3_1层", this);
    L3_2CheckBox = new QCheckBox("L3_2层", this);
    L3_3CheckBox = new QCheckBox("L3_3层", this);
    L4_1CheckBox = new QCheckBox("L4_1层", this);
    L4_2CheckBox = new QCheckBox("L4_2层", this);
    L5_1_1CheckBox = new QCheckBox("L5_1_1层", this);
    L5_1_2CheckBox = new QCheckBox("L5_1_2层", this);
    L5_2CheckBox = new QCheckBox("L5_2层", this);
    L5_3CheckBox = new QCheckBox("L5_3层", this);
    L5_4CheckBox = new QCheckBox("L5_4层", this);
    L6CheckBox = new QCheckBox("L6层", this);
    L7_1CheckBox = new QCheckBox("L7_1层", this);
    L7_2CheckBox = new QCheckBox("L7_2层", this);
    L8_1CheckBox = new QCheckBox("L8_1层", this);
    L8_2CheckBox = new QCheckBox("L8_2层", this);
    L9_1CheckBox = new QCheckBox("L9_1层", this);
    L9_2CheckBox = new QCheckBox("L9_2层", this);
    L10CheckBox = new QCheckBox("L10层", this);
    L11CheckBox = new QCheckBox("L11层", this);
    L12CheckBox = new QCheckBox("L12层", this);
    L13CheckBox = new QCheckBox("L13层", this);
    L13_2CheckBox = new QCheckBox("L13_2层", this);
    L14CheckBox = new QCheckBox("L14层", this);
    chazhiCheckBox = new QCheckBox("chazhi层", this);
    bujialayerCheckBox = new QCheckBox("bujialayer层", this);

    //添加layout======================================================================================
    layout1->addWidget(L1_1CheckBox);
    layout1->addWidget(L1_2CheckBox);
    layout1->addWidget(L2_1CheckBox);

    layout2->addWidget(L2_2CheckBox);
    layout2->addWidget(L2_3CheckBox);
    layout2->addWidget(L3_1CheckBox);

    layout3->addWidget(L3_2CheckBox);
    layout3->addWidget(L3_3CheckBox);
    layout3->addWidget(L4_1CheckBox);

    layout4->addWidget(L4_2CheckBox);
    layout4->addWidget(L5_1_1CheckBox);
    layout4->addWidget(L5_1_2CheckBox);

    layout5->addWidget(L5_2CheckBox);
    layout5->addWidget(L5_3CheckBox);
    layout5->addWidget(L5_4CheckBox);

    layout6->addWidget(L6CheckBox);
    layout6->addWidget(L7_1CheckBox);
    layout6->addWidget(L7_2CheckBox);

    layout7->addWidget(L8_1CheckBox);
    layout7->addWidget(L8_2CheckBox);
    layout7->addWidget(L9_1CheckBox);

    layout8->addWidget(L9_2CheckBox);
    layout8->addWidget(L10CheckBox);
    layout8->addWidget(L11CheckBox);

    layout9->addWidget(L12CheckBox);
    layout9->addWidget(L13CheckBox);
    layout9->addWidget(L13_2CheckBox);

    layout10->addWidget(L14CheckBox);
    layout10->addWidget(chazhiCheckBox);
    layout10->addWidget(bujialayerCheckBox);

    layout->addWidget(label);
    layout->addLayout(layout1);
    layout->addLayout(layout2);
    layout->addLayout(layout3);
    layout->addLayout(layout4);
    layout->addLayout(layout5);
    layout->addLayout(layout6);
    layout->addLayout(layout7);
    layout->addLayout(layout8);
    layout->addLayout(layout9);
    layout->addLayout(layout10);
    layout->addWidget(btn);
    this->setLayout(layout);
}

//checkbox的槽函数========================================================================
void LithologyDrilling::slotOk(){
    if(L1_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL1_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L1_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL1_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L2_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL2_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L2_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL2_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L2_3CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL2_3(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L3_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL3_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L3_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL3_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L3_3CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL3_3(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L4_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL4_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L4_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL4_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L5_1_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL5_1_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L5_1_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL5_1_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L5_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL5_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L5_3CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL5_3(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L5_4CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL5_4(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L6CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL6(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L7_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL7_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L7_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL7_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L8_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL8_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L8_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL8_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L9_1CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL9_1(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L9_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL9_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L10CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL10(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L11CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL11(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L12CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL12(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L13CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL13(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L13_2CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL13_2(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(L14CheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showL14(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(chazhiCheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showchazhi(rend.linearDisplayState,rend.columnDisplayState);
    }
    if(bujialayerCheckBox->isChecked()){
        if(rend.linearDisplayState || rend.columnDisplayState)
        rend.showbujialayer(rend.linearDisplayState,rend.columnDisplayState);
    }
    this->close();
}
