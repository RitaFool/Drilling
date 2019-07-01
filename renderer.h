#ifndef RENDERER_H
#define RENDERER_H

#include "renderer.h"
#include "layer.h"
#include "line.h"
#include "odbchelper.h"
#include "virtualline.h"

#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkActor.h>

class Renderer
{
public:
    Renderer();
    void viewDrilling();
    void hideDrilling();
    void viewLine();
    void hideLine();
    void viewTube();
    void hideTube();
    void viewCode();
    void hideCode();

    //地层展示
    void slotViewSort(); // 地层显示
    void slotHideSort();
    void slotViewTop(); // 顶层显示
    void slotHideTop();
    void slotViewBottom(); // 地层显示
    void slotHideBottom();
    void slotViewBorder(); // 围边显示
    void slotHideBorder();

    void showL1_1(bool linearDisplay,bool columnDisplay);
    void showL1_2(bool linearDisplay,bool columnDisplay);
    void showL2_1(bool linearDisplay,bool columnDisplay);
    void showL2_2(bool linearDisplay,bool columnDisplay);
    void showL2_3(bool linearDisplay,bool columnDisplay);
    void showL3_1(bool linearDisplay,bool columnDisplay);
    void showL3_2(bool linearDisplay,bool columnDisplay);
    void showL3_3(bool linearDisplay,bool columnDisplay);
    void showL4_1(bool linearDisplay,bool columnDisplay);
    void showL4_2(bool linearDisplay,bool columnDisplay);
    void showL5_1_1(bool linearDisplay,bool columnDisplay);
    void showL5_1_2(bool linearDisplay,bool columnDisplay);
    void showL5_2(bool linearDisplay,bool columnDisplay);
    void showL5_3(bool linearDisplay,bool columnDisplay);
    void showL5_4(bool linearDisplay,bool columnDisplay);
    void showL6(bool linearDisplay,bool columnDisplay);
    void showL7_1(bool linearDisplay,bool columnDisplay);
    void showL7_2(bool linearDisplay,bool columnDisplay);
    void showL8_1(bool linearDisplay,bool columnDisplay);
    void showL8_2(bool linearDisplay,bool columnDisplay);
    void showL9_1(bool linearDisplay,bool columnDisplay);
    void showL9_2(bool linearDisplay,bool columnDisplay);
    void showL10(bool linearDisplay,bool columnDisplay);
    void showL11(bool linearDisplay,bool columnDisplay);
    void showL12(bool linearDisplay,bool columnDisplay);
    void showL13(bool linearDisplay,bool columnDisplay);
    void showL13_2(bool linearDisplay,bool columnDisplay);
    void showL14(bool linearDisplay,bool columnDisplay);
    void showchazhi(bool linearDisplay,bool columnDisplay);
    void showbujialayer(bool linearDisplay,bool columnDisplay);

    bool linearDisplayState=false;
    bool columnDisplayState=false;

    vtkSmartPointer<vtkRenderer> renderer;
    odbchelper sql;
    Layer layer;
private:
    Line line;
    VirtualLine virtualLine;
};

#endif // RENDERER_H
