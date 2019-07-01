#include "virtualline.h"

VirtualLine::VirtualLine()
{
    //虚拟孔迹线============================================================================
    for(int i = 0; i<n; i++)
    {
        virtualLineSources.push_back(vtkSmartPointer<vtkLineSource>::New());   //virtualLineSources
        virtualLineSources[i]->SetPoint1(east2[i],north2[i],altitude2[i]);
        virtualLineSources[i]->SetPoint2(east2[i],north2[i],altitude2[i]+depth2[i]);

        virtualLineMappers.push_back(vtkSmartPointer<vtkPolyDataMapper>::New());   //virtualLineMappers
        virtualLineMappers[i]->SetInputConnection(virtualLineSources[i]->GetOutputPort());

        virtualLineActors.push_back(vtkSmartPointer<vtkActor>::New()); //virtualLineActors
        virtualLineActors[i]->SetMapper(virtualLineMappers[i]);
        virtualLineActors[i]->GetProperty()->SetColor(0,0,1);  //孔迹线的属性
        virtualLineActors[i]->GetProperty()->SetLineWidth(3);
    }

}
