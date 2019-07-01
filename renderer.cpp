#include "renderer.h"

Renderer::Renderer()
{
    renderer = vtkSmartPointer<vtkRenderer>::New();
    renderer->SetBackground(0.7, 0.7, 0.7);
    this->viewDrilling(); // 显示钻孔
    this->slotViewTop(); // 显示顶板
}

//显示和隐藏钻孔====================================================================
void Renderer::viewDrilling()
{
    renderer->AddActor(layer.pointsActor);
}
void Renderer::hideDrilling()
{
    renderer->RemoveActor(layer.pointsActor);
}

//显示和隐藏编码====================================================================
void Renderer::viewCode()
{
    for(int i = 0; i<m ; i++)
    {
        renderer->AddActor(layer.textActors[i]);
    }
}
void Renderer::hideCode()
{
    for(int i = 0; i<m ; i++)
    {
        renderer->RemoveActor(layer.textActors[i]);
    }
}

//地层展示=========================================================================
void Renderer::slotViewSort() // 地层显示
{
//    renderer->AddActor(layer.triangulatedActor);
//    renderer->AddActor(layer.triangulatedActor2);
//    renderer->AddActor(layer.triangulatedActor3);
//    renderer->AddActor(layer.triangulatedActor4);
//    renderer->AddActor(layer.triangulatedActor5);
//    renderer->AddActor(layer.triangulatedActor6);
    this->slotViewTop();
    this->slotViewBottom();
    this->slotViewBorder();
    renderer->AddActor(layer.textActor);
}
void Renderer::slotHideSort()
{
//    renderer->RemoveActor(layer.triangulatedActor);
//    renderer->RemoveActor(layer.triangulatedActor2);
//    renderer->RemoveActor(layer.triangulatedActor3);
//    renderer->RemoveActor(layer.triangulatedActor4);
//    renderer->RemoveActor(layer.triangulatedActor5);
//    renderer->RemoveActor(layer.triangulatedActor6);
    this->slotHideTop();
    this->slotHideBottom();
    this->slotHideBorder();
    renderer->RemoveActor(layer.textActor);
}
void Renderer::slotViewTop() // 顶层显示
{
    renderer->AddActor(layer.triangulatedActor);
}
void Renderer::slotHideTop()
{
    renderer->RemoveActor(layer.triangulatedActor);
}
void Renderer::slotViewBottom() // 底层显示
{
    renderer->AddActor(layer.triangulatedActor2);
    renderer->AddActor(layer.triangulatedActor3);
    renderer->AddActor(layer.triangulatedActor4);
    renderer->AddActor(layer.triangulatedActor5);
    renderer->AddActor(layer.triangulatedActor6);
}
void Renderer::slotHideBottom()
{
    renderer->RemoveActor(layer.triangulatedActor2);
    renderer->RemoveActor(layer.triangulatedActor3);
    renderer->RemoveActor(layer.triangulatedActor4);
    renderer->RemoveActor(layer.triangulatedActor5);
    renderer->RemoveActor(layer.triangulatedActor6);
}
void Renderer::slotViewBorder() // 围边显示
{
    renderer->AddActor(layer.triangulatedActor7);
    renderer->AddActor(layer.triangulatedActor8);
    renderer->AddActor(layer.triangulatedActor9);
    renderer->AddActor(layer.triangulatedActor10);
    renderer->AddActor(layer.triangulatedActor11);
    renderer->AddActor(layer.triangulatedActor12);
    renderer->AddActor(layer.triangulatedActor13);
    renderer->AddActor(layer.triangulatedActor14);
    renderer->AddActor(layer.triangulatedActor15);
    renderer->AddActor(layer.planeActor);
}
void Renderer::slotHideBorder()
{
    renderer->RemoveActor(layer.triangulatedActor7);
    renderer->RemoveActor(layer.triangulatedActor8);
    renderer->RemoveActor(layer.triangulatedActor9);
    renderer->RemoveActor(layer.triangulatedActor10);
    renderer->RemoveActor(layer.triangulatedActor11);
    renderer->RemoveActor(layer.triangulatedActor12);
    renderer->RemoveActor(layer.triangulatedActor13);
    renderer->RemoveActor(layer.triangulatedActor14);
    renderer->RemoveActor(layer.triangulatedActor15);
    renderer->RemoveActor(layer.planeActor);
}



//显示和隐藏孔迹线=================================================================

//显示孔迹线======================================================================
void Renderer::viewLine()
{
    //L1_1层actor
    for(int i = 0; i<L1_1; i++)
    {
        renderer->AddActor(line.L1_1lineActors[i]);
    }

    //L1_2层actor
    for(int i = 0; i<L1_2; i++)
    {
        renderer->AddActor(line.L1_2lineActors[i]);
    }

    //L2_1层actor
    for(int i = 0; i<L2_1; i++)
    {
        renderer->AddActor(line.L2_1lineActors[i]);
    }

    //L2_2层actor
    for(int i = 0; i<L2_2; i++)
    {
        renderer->AddActor(line.L2_2lineActors[i]);
    }

    //L2_3层actor
    for(int i = 0; i<L2_3; i++)
    {
        renderer->AddActor(line.L2_3lineActors[i]);
    }

    //L3_1层actor
    for(int i = 0; i<L3_1; i++)
    {
        renderer->AddActor(line.L3_1lineActors[i]);
    }

    //L3_2层actor
    for(int i = 0; i<L3_2; i++)
    {
        renderer->AddActor(line.L3_2lineActors[i]);
    }

    //L3_3层actor
    for(int i = 0; i<L3_3; i++)
    {
        renderer->AddActor(line.L3_3lineActors[i]);
    }

    //L4_1层actor
    for(int i = 0; i<L4_1; i++)
    {
        renderer->AddActor(line.L4_1lineActors[i]);
    }

    //L4_2层actor
    for(int i = 0; i<L4_2; i++)
    {
        renderer->AddActor(line.L4_2lineActors[i]);
    }

    //L5_1_1层actor
    for(int i = 0; i<L5_1_1; i++)
    {
        renderer->AddActor(line.L5_1_1lineActors[i]);
    }

    //L5_1_2层actor
    for(int i = 0; i<L5_1_2; i++)
    {
        renderer->AddActor(line.L5_1_2lineActors[i]);
    }

    //L5_2层actor
    for(int i = 0; i<L5_2; i++)
    {
        renderer->AddActor(line.L5_2lineActors[i]);
    }

    //L5_3层actor
    for(int i = 0; i<L5_3; i++)
    {
        renderer->AddActor(line.L5_3lineActors[i]);
    }

    //L5_4层actor
    for(int i = 0; i<L5_4; i++)
    {
        renderer->AddActor(line.L5_4lineActors[i]);
    }

    //L6层actor
    for(int i = 0; i<L6; i++)
    {
        renderer->AddActor(line.L6lineActors[i]);
    }

    //L7_1层actor
    for(int i = 0; i<L7_1; i++)
    {
        renderer->AddActor(line.L7_1lineActors[i]);
    }

    //L7_2层actor
    for(int i = 0; i<L7_2; i++)
    {
        renderer->AddActor(line.L7_2lineActors[i]);
    }

    //L8_1层actor
    for(int i = 0; i<L8_1; i++)
    {
        renderer->AddActor(line.L8_1lineActors[i]);
    }

    //L8_2层actor
    for(int i = 0; i<L8_2; i++)
    {
        renderer->AddActor(line.L8_2lineActors[i]);
    }

    //L9_1层actor
    for(int i = 0; i<L9_1; i++)
    {
        renderer->AddActor(line.L9_1lineActors[i]);
    }

    //L9_2层actor
    for(int i = 0; i<L9_2; i++)
    {
        renderer->AddActor(line.L9_2lineActors[i]);
    }

    //L10层actor
    for(int i = 0; i<L10; i++)
    {
        renderer->AddActor(line.L10lineActors[i]);
    }

    //L11层actor
    for(int i = 0; i<L11; i++)
    {
        renderer->AddActor(line.L11lineActors[i]);
    }

    //L12层actor
    for(int i = 0; i<L12; i++)
    {
        renderer->AddActor(line.L12lineActors[i]);
    }

    //L13层actor
    for(int i = 0; i<L13; i++)
    {
        renderer->AddActor(line.L13lineActors[i]);
    }

    //L13_2层actor
    for(int i = 0; i<L13_2; i++)
    {
        renderer->AddActor(line.L13_2lineActors[i]);
    }

    //L14层actor
    for(int i = 0; i<L14; i++)
    {
        renderer->AddActor(line.L14lineActors[i]);
    }

    //chazhi层actor
    for(int i = 0; i<chazhi; i++)
    {
        renderer->AddActor(line.chazhilineActors[i]);
    }

    //bujialayer层actor
    for(int i = 0; i<bujialayer; i++)
    {
        renderer->AddActor(line.bujialayerlineActors[i]);
    }
}

//隐藏孔迹线============================================================================
void Renderer::hideLine()
{
    //L1_1层actor
    for(int i = 0; i<L1_1; i++)
    {
        renderer->RemoveActor(line.L1_1lineActors[i]);
    }

    //L1_2层actor
    for(int i = 0; i<L1_2; i++)
    {
        renderer->RemoveActor(line.L1_2lineActors[i]);
    }

    //L2_1层actor
    for(int i = 0; i<L2_1; i++)
    {
        renderer->RemoveActor(line.L2_1lineActors[i]);
    }

    //L2_2层actor
    for(int i = 0; i<L2_2; i++)
    {
        renderer->RemoveActor(line.L2_2lineActors[i]);
    }

    //L2_3层actor
    for(int i = 0; i<L2_3; i++)
    {
        renderer->RemoveActor(line.L2_3lineActors[i]);
    }

    //L3_1层actor
    for(int i = 0; i<L3_1; i++)
    {
        renderer->RemoveActor(line.L3_1lineActors[i]);
    }

    //L3_2层actor
    for(int i = 0; i<L3_2; i++)
    {
        renderer->RemoveActor(line.L3_2lineActors[i]);
    }

    //L3_3层actor
    for(int i = 0; i<L3_3; i++)
    {
        renderer->RemoveActor(line.L3_3lineActors[i]);
    }

    //L4_1层actor
    for(int i = 0; i<L4_1; i++)
    {
        renderer->RemoveActor(line.L4_1lineActors[i]);
    }

    //L4_2层actor
    for(int i = 0; i<L4_2; i++)
    {
        renderer->RemoveActor(line.L4_2lineActors[i]);
    }

    //L5_1_1层actor
    for(int i = 0; i<L5_1_1; i++)
    {
        renderer->RemoveActor(line.L5_1_1lineActors[i]);
    }

    //L5_1_2层actor
    for(int i = 0; i<L5_1_2; i++)
    {
        renderer->RemoveActor(line.L5_1_2lineActors[i]);
    }

    //L5_2层actor
    for(int i = 0; i<L5_2; i++)
    {
        renderer->RemoveActor(line.L5_2lineActors[i]);
    }

    //L5_3层actor
    for(int i = 0; i<L5_3; i++)
    {
        renderer->RemoveActor(line.L5_3lineActors[i]);
    }

    //L5_4层actor
    for(int i = 0; i<L5_4; i++)
    {
        renderer->RemoveActor(line.L5_4lineActors[i]);
    }

    //L6层actor
    for(int i = 0; i<L6; i++)
    {
        renderer->RemoveActor(line.L6lineActors[i]);
    }

    //L7_1层actor
    for(int i = 0; i<L7_1; i++)
    {
        renderer->RemoveActor(line.L7_1lineActors[i]);
    }

    //L7_2层actor
    for(int i = 0; i<L7_2; i++)
    {
        renderer->RemoveActor(line.L7_2lineActors[i]);
    }

    //L8_1层actor
    for(int i = 0; i<L8_1; i++)
    {
        renderer->RemoveActor(line.L8_1lineActors[i]);
    }

    //L8_2层actor
    for(int i = 0; i<L8_2; i++)
    {
        renderer->RemoveActor(line.L8_2lineActors[i]);
    }

    //L9_1层actor
    for(int i = 0; i<L9_1; i++)
    {
        renderer->RemoveActor(line.L9_1lineActors[i]);
    }

    //L9_2层actor
    for(int i = 0; i<L9_2; i++)
    {
        renderer->RemoveActor(line.L9_2lineActors[i]);
    }

    //L10层actor
    for(int i = 0; i<L10; i++)
    {
        renderer->RemoveActor(line.L10lineActors[i]);
    }

    //L11层actor
    for(int i = 0; i<L11; i++)
    {
        renderer->RemoveActor(line.L11lineActors[i]);
    }

    //L12层actor
    for(int i = 0; i<L12; i++)
    {
        renderer->RemoveActor(line.L12lineActors[i]);
    }

    //L13层actor
    for(int i = 0; i<L13; i++)
    {
        renderer->RemoveActor(line.L13lineActors[i]);
    }

    //L13_2层actor
    for(int i = 0; i<L13_2; i++)
    {
        renderer->RemoveActor(line.L13_2lineActors[i]);
    }

    //L14层actor
    for(int i = 0; i<L14; i++)
    {
        renderer->RemoveActor(line.L14lineActors[i]);
    }

    //chazhi层actor
    for(int i = 0; i<chazhi; i++)
    {
        renderer->RemoveActor(line.chazhilineActors[i]);
    }

    //bujialayer层actor
    for(int i = 0; i<bujialayer; i++)
    {
        renderer->RemoveActor(line.bujialayerlineActors[i]);
    }
}

//显示和隐藏柱状孔迹线=================================================================

//显示柱状孔迹线======================================================================
void Renderer::viewTube()
{
    //L1_1层actor
    for(int i = 0; i<L1_1; i++)
    {
        renderer->AddActor(line.L1_1tubeActors[i]);
    }

    //L1_2层actor
    for(int i = 0; i<L1_2; i++)
    {
        renderer->AddActor(line.L1_2tubeActors[i]);
    }

    //L2_1层actor
    for(int i = 0; i<L2_1; i++)
    {
        renderer->AddActor(line.L2_1tubeActors[i]);
    }

    //L2_2层actor
    for(int i = 0; i<L2_2; i++)
    {
        renderer->AddActor(line.L2_2tubeActors[i]);
    }

    //L2_3层actor
    for(int i = 0; i<L2_3; i++)
    {
        renderer->AddActor(line.L2_3tubeActors[i]);
    }

    //L3_1层actor
    for(int i = 0; i<L3_1; i++)
    {
        renderer->AddActor(line.L3_1tubeActors[i]);
    }

    //L3_2层actor
    for(int i = 0; i<L3_2; i++)
    {
        renderer->AddActor(line.L3_2tubeActors[i]);
    }

    //L3_3层actor
    for(int i = 0; i<L3_3; i++)
    {
        renderer->AddActor(line.L3_3tubeActors[i]);
    }

    //L4_1层actor
    for(int i = 0; i<L4_1; i++)
    {
        renderer->AddActor(line.L4_1tubeActors[i]);
    }

    //L4_2层actor
    for(int i = 0; i<L4_2; i++)
    {
        renderer->AddActor(line.L4_2tubeActors[i]);
    }

    //L5_1_1层actor
    for(int i = 0; i<L5_1_1; i++)
    {
        renderer->AddActor(line.L5_1_1tubeActors[i]);
    }

    //L5_1_2层actor
    for(int i = 0; i<L5_1_2; i++)
    {
        renderer->AddActor(line.L5_1_2tubeActors[i]);
    }

    //L5_2层actor
    for(int i = 0; i<L5_2; i++)
    {
        renderer->AddActor(line.L5_2tubeActors[i]);
    }

    //L5_3层actor
    for(int i = 0; i<L5_3; i++)
    {
        renderer->AddActor(line.L5_3tubeActors[i]);
    }

    //L5_4层actor
    for(int i = 0; i<L5_4; i++)
    {
        renderer->AddActor(line.L5_4tubeActors[i]);
    }

    //L6层actor
    for(int i = 0; i<L6; i++)
    {
        renderer->AddActor(line.L6tubeActors[i]);
    }

    //L7_1层actor
    for(int i = 0; i<L7_1; i++)
    {
        renderer->AddActor(line.L7_1tubeActors[i]);
    }

    //L7_2层actor
    for(int i = 0; i<L7_2; i++)
    {
        renderer->AddActor(line.L7_2tubeActors[i]);
    }

    //L8_1层actor
    for(int i = 0; i<L8_1; i++)
    {
        renderer->AddActor(line.L8_1tubeActors[i]);
    }

    //L8_2层actor
    for(int i = 0; i<L8_2; i++)
    {
        renderer->AddActor(line.L8_2tubeActors[i]);
    }

    //L9_1层actor
    for(int i = 0; i<L9_1; i++)
    {
        renderer->AddActor(line.L9_1tubeActors[i]);
    }

    //L9_2层actor
    for(int i = 0; i<L9_2; i++)
    {
        renderer->AddActor(line.L9_2tubeActors[i]);
    }

    //L10层actor
    for(int i = 0; i<L10; i++)
    {
        renderer->AddActor(line.L10tubeActors[i]);
    }

    //L11层actor
    for(int i = 0; i<L11; i++)
    {
        renderer->AddActor(line.L11tubeActors[i]);
    }

    //L12层actor
    for(int i = 0; i<L12; i++)
    {
        renderer->AddActor(line.L12tubeActors[i]);
    }

    //L13层actor
    for(int i = 0; i<L13; i++)
    {
        renderer->AddActor(line.L13tubeActors[i]);
    }

    //L13_2层actor
    for(int i = 0; i<L13_2; i++)
    {
        renderer->AddActor(line.L13_2tubeActors[i]);
    }

    //L14层actor
    for(int i = 0; i<L14; i++)
    {
        renderer->AddActor(line.L14tubeActors[i]);
    }

    //chazhi层actor
    for(int i = 0; i<chazhi; i++)
    {
        renderer->AddActor(line.chazhitubeActors[i]);
    }

    //bujialayer层actor
    for(int i = 0; i<bujialayer; i++)
    {
        renderer->AddActor(line.bujialayertubeActors[i]);
    }
}

//隐藏柱状孔迹线============================================================================
void Renderer::hideTube()
{
    //L1_1层actor
    for(int i = 0; i<L1_1; i++)
    {
        renderer->RemoveActor(line.L1_1tubeActors[i]);
    }

    //L1_2层actor
    for(int i = 0; i<L1_2; i++)
    {
        renderer->RemoveActor(line.L1_2tubeActors[i]);
    }

    //L2_1层actor
    for(int i = 0; i<L2_1; i++)
    {
        renderer->RemoveActor(line.L2_1tubeActors[i]);
    }

    //L2_2层actor
    for(int i = 0; i<L2_2; i++)
    {
        renderer->RemoveActor(line.L2_2tubeActors[i]);
    }

    //L2_3层actor
    for(int i = 0; i<L2_3; i++)
    {
        renderer->RemoveActor(line.L2_3tubeActors[i]);
    }

    //L3_1层actor
    for(int i = 0; i<L3_1; i++)
    {
        renderer->RemoveActor(line.L3_1tubeActors[i]);
    }

    //L3_2层actor
    for(int i = 0; i<L3_2; i++)
    {
        renderer->RemoveActor(line.L3_2tubeActors[i]);
    }

    //L3_3层actor
    for(int i = 0; i<L3_3; i++)
    {
        renderer->RemoveActor(line.L3_3tubeActors[i]);
    }

    //L4_1层actor
    for(int i = 0; i<L4_1; i++)
    {
        renderer->RemoveActor(line.L4_1tubeActors[i]);
    }

    //L4_2层actor
    for(int i = 0; i<L4_2; i++)
    {
        renderer->RemoveActor(line.L4_2tubeActors[i]);
    }

    //L5_1_1层actor
    for(int i = 0; i<L5_1_1; i++)
    {
        renderer->RemoveActor(line.L5_1_1tubeActors[i]);
    }

    //L5_1_2层actor
    for(int i = 0; i<L5_1_2; i++)
    {
        renderer->RemoveActor(line.L5_1_2tubeActors[i]);
    }

    //L5_2层actor
    for(int i = 0; i<L5_2; i++)
    {
        renderer->RemoveActor(line.L5_2tubeActors[i]);
    }

    //L5_3层actor
    for(int i = 0; i<L5_3; i++)
    {
        renderer->RemoveActor(line.L5_3tubeActors[i]);
    }

    //L5_4层actor
    for(int i = 0; i<L5_4; i++)
    {
        renderer->RemoveActor(line.L5_4tubeActors[i]);
    }

    //L6层actor
    for(int i = 0; i<L6; i++)
    {
        renderer->RemoveActor(line.L6tubeActors[i]);
    }

    //L7_1层actor
    for(int i = 0; i<L7_1; i++)
    {
        renderer->RemoveActor(line.L7_1tubeActors[i]);
    }

    //L7_2层actor
    for(int i = 0; i<L7_2; i++)
    {
        renderer->RemoveActor(line.L7_2tubeActors[i]);
    }

    //L8_1层actor
    for(int i = 0; i<L8_1; i++)
    {
        renderer->RemoveActor(line.L8_1tubeActors[i]);
    }

    //L8_2层actor
    for(int i = 0; i<L8_2; i++)
    {
        renderer->RemoveActor(line.L8_2tubeActors[i]);
    }

    //L9_1层actor
    for(int i = 0; i<L9_1; i++)
    {
        renderer->RemoveActor(line.L9_1tubeActors[i]);
    }

    //L9_2层actor
    for(int i = 0; i<L9_2; i++)
    {
        renderer->RemoveActor(line.L9_2tubeActors[i]);
    }

    //L10层actor
    for(int i = 0; i<L10; i++)
    {
        renderer->RemoveActor(line.L10tubeActors[i]);
    }

    //L11层actor
    for(int i = 0; i<L11; i++)
    {
        renderer->RemoveActor(line.L11tubeActors[i]);
    }

    //L12层actor
    for(int i = 0; i<L12; i++)
    {
        renderer->RemoveActor(line.L12tubeActors[i]);
    }

    //L13层actor
    for(int i = 0; i<L13; i++)
    {
        renderer->RemoveActor(line.L13tubeActors[i]);
    }

    //L13_2层actor
    for(int i = 0; i<L13_2; i++)
    {
        renderer->RemoveActor(line.L13_2tubeActors[i]);
    }

    //L14层actor
    for(int i = 0; i<L14; i++)
    {
        renderer->RemoveActor(line.L14tubeActors[i]);
    }

    //chazhi层actor
    for(int i = 0; i<chazhi; i++)
    {
        renderer->RemoveActor(line.chazhitubeActors[i]);
    }

    //bujialayer层actor
    for(int i = 0; i<bujialayer; i++)
    {
        renderer->RemoveActor(line.bujialayertubeActors[i]);
    }
}


//分层显示钻孔=================================================================================

void Renderer::showL1_1(bool linearDisplay,bool columnDisplay)
{
    //L1_1层actor
    for(int i = 0; i<L1_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L1_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L1_1tubeActors[i]);
    }
}
void Renderer::showL1_2(bool linearDisplay,bool columnDisplay)
{
    //L1_2层actor
    for(int i = 0; i<L1_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L1_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L1_2tubeActors[i]);
    }
}
void Renderer::showL2_1(bool linearDisplay,bool columnDisplay)
{
    //L2_1层actor
    for(int i = 0; i<L2_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L2_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L2_1tubeActors[i]);
    }
}
void Renderer::showL2_2(bool linearDisplay,bool columnDisplay)
{
    //L2_2层actor
    for(int i = 0; i<L2_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L2_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L2_2tubeActors[i]);
    }
}
void Renderer::showL2_3(bool linearDisplay,bool columnDisplay)
{
    //L2_3层actor
    for(int i = 0; i<L2_3; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L2_3lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L2_3tubeActors[i]);
    }
}
void Renderer::showL3_1(bool linearDisplay,bool columnDisplay)
{
    //L3_1层actor
    for(int i = 0; i<L3_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L3_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L3_1tubeActors[i]);
    }
}
void Renderer::showL3_2(bool linearDisplay,bool columnDisplay)
{
    //L3_2层actor
    for(int i = 0; i<L3_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L3_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L3_2tubeActors[i]);
    }
}
void Renderer::showL3_3(bool linearDisplay,bool columnDisplay)
{
    //L3_3层actor
    for(int i = 0; i<L3_3; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L3_3lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L3_3tubeActors[i]);
    }
}
void Renderer::showL4_1(bool linearDisplay,bool columnDisplay)
{
    //L4_1层actor
    for(int i = 0; i<L4_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L4_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L4_1tubeActors[i]);
    }
}
void Renderer::showL4_2(bool linearDisplay,bool columnDisplay)
{
    //L4_2层actor
    for(int i = 0; i<L4_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L4_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L4_2tubeActors[i]);
    }
}
void Renderer::showL5_1_1(bool linearDisplay,bool columnDisplay)
{
    //L5_1_1层actor
    for(int i = 0; i<L5_1_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L5_1_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L5_1_1tubeActors[i]);
    }
}
void Renderer::showL5_1_2(bool linearDisplay,bool columnDisplay)
{
    //L5_1_2层actor
    for(int i = 0; i<L5_1_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L5_1_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L5_1_2tubeActors[i]);
    }
}
void Renderer::showL5_2(bool linearDisplay,bool columnDisplay)
{
    //L5_2层actor
    for(int i = 0; i<L5_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L5_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L5_2tubeActors[i]);
    }
}
void Renderer::showL5_3(bool linearDisplay,bool columnDisplay)
{
    //L5_3层actor
    for(int i = 0; i<L5_3; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L5_3lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L5_3tubeActors[i]);
    }
}
void Renderer::showL5_4(bool linearDisplay,bool columnDisplay)
{
    //L5_4层actor
    for(int i = 0; i<L5_4; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L5_4lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L5_4tubeActors[i]);
    }
}
void Renderer::showL6(bool linearDisplay,bool columnDisplay)
{
    //L6层actor
    for(int i = 0; i<L6; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L6lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L6tubeActors[i]);
    }
}
void Renderer::showL7_1(bool linearDisplay,bool columnDisplay)
{
    //L7_1层actor
    for(int i = 0; i<L7_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L7_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L7_1tubeActors[i]);
    }
}
void Renderer::showL7_2(bool linearDisplay,bool columnDisplay)
{
    //L7_2层actor
    for(int i = 0; i<L7_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L7_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L7_2tubeActors[i]);
    }
}
void Renderer::showL8_1(bool linearDisplay,bool columnDisplay)
{
    //L8_1层actor
    for(int i = 0; i<L8_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L8_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L8_1tubeActors[i]);
    }
}
void Renderer::showL8_2(bool linearDisplay,bool columnDisplay)
{
    //L8_2层actor
    for(int i = 0; i<L8_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L8_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L8_2tubeActors[i]);
    }
}
void Renderer::showL9_1(bool linearDisplay,bool columnDisplay)
{
    //L9_1层actor
    for(int i = 0; i<L9_1; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L9_1lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L9_1tubeActors[i]);
    }
}
void Renderer::showL9_2(bool linearDisplay,bool columnDisplay)
{
    //L9_2层actor
    for(int i = 0; i<L9_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L9_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L9_2tubeActors[i]);
    }
}
void Renderer::showL10(bool linearDisplay,bool columnDisplay)
{
    //L10层actor
    for(int i = 0; i<L10; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L10lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L10tubeActors[i]);
    }
}
void Renderer::showL11(bool linearDisplay,bool columnDisplay)
{
    //L11层actor
    for(int i = 0; i<L11; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L11lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L11tubeActors[i]);
    }
}
void Renderer::showL12(bool linearDisplay,bool columnDisplay)
{
    //L12层actor
    for(int i = 0; i<L12; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L12lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L12tubeActors[i]);
    }
}
void Renderer::showL13(bool linearDisplay,bool columnDisplay)
{
    //L13层actor
    for(int i = 0; i<L13; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L13lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L13tubeActors[i]);
    }
}
void Renderer::showL13_2(bool linearDisplay,bool columnDisplay)
{
    //L13_2层actor
    for(int i = 0; i<L13_2; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L13_2lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L13_2tubeActors[i]);
    }
}
void Renderer::showL14(bool linearDisplay,bool columnDisplay)
{
    //L14层actor
    for(int i = 0; i<L14; i++)
    {
        if(linearDisplay) renderer->AddActor(line.L14lineActors[i]);
        if(columnDisplay) renderer->AddActor(line.L14tubeActors[i]);
    }
}
void Renderer::showchazhi(bool linearDisplay,bool columnDisplay)
{
    //chazhi层actor
    for(int i = 0; i<chazhi; i++)
    {
        if(linearDisplay) renderer->AddActor(line.chazhilineActors[i]);
        if(columnDisplay) renderer->AddActor(line.chazhitubeActors[i]);
    }
}
void Renderer::showbujialayer(bool linearDisplay,bool columnDisplay)
{
    //bujialayer层actor
    for(int i = 0; i<bujialayer; i++)
    {
        if(linearDisplay) renderer->AddActor(line.bujialayerlineActors[i]);
        if(columnDisplay) renderer->AddActor(line.bujialayertubeActors[i]);
    }
}
