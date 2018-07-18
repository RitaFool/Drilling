﻿#include "layer.h"

Layer::Layer()
{
    //插入数据==================================================================
    points = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<m;i++)
    {
        points->InsertNextPoint(east1[i],north1[i],altitude1[i]);
    }
    for(int i=0;i<n;i++)
    {
        points->InsertNextPoint(east2[i],north2[i],altitude2[i]);
    }

    //三角剖分建立地层============================================================
    polydata = vtkSmartPointer<vtkPolyData>::New();
    polydata->SetPoints(points);

    delaunay = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay->SetInputData(polydata);
    delaunay->Update();

    glyphFilter = vtkSmartPointer<vtkVertexGlyphFilter>::New();
    glyphFilter->SetInputData(polydata);
    glyphFilter->Update();

    pointsMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    pointsMapper->SetInputData(glyphFilter->GetOutput());
    pointsActor = vtkSmartPointer<vtkActor>::New();
    pointsActor->SetMapper(pointsMapper);
    pointsActor->GetProperty()->SetPointSize(5);
    pointsActor->GetProperty()->SetColor(0, 1, 0);

    triangulatedMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper->SetInputData(delaunay->GetOutput());
    triangulatedActor = vtkSmartPointer<vtkActor>::New();
    triangulatedActor->SetMapper(triangulatedMapper);
    triangulatedActor->GetProperty()->SetOpacity(0.8);
    triangulatedActor->GetProperty()->SetColor(0,1,0);

    //显示编码===============================================================
    for(int i = 0; i<m; i++)
    {
        textPropertys.push_back(vtkSmartPointer<vtkTextProperty>::New());
        textPropertys[i]->SetColor(1 ,1 ,0);
        textPropertys[i]->SetFontSize(18);
        textPropertys[i]->SetFontFamily(0);
        textPropertys[i]->SetJustification(1);
        textPropertys[i]->SetBold(1);
        textPropertys[i]->SetItalic(1);
        textPropertys[i]->SetShadow(0);
        textActors.push_back(vtkSmartPointer<vtkTextActor3D>::New());
        textActors[i]->SetInput("test");
        textActors[i]->SetTextProperty(textPropertys[i]);
        textActors[i]->SetPosition(east1[i],north1[i], altitude1[i]); //设置位置
        textActors[i]->SetScale(0.3 ,0.3 , 0.3); //设置文字大小
        textActors[i]->RotateX(180.0);//沿X轴旋转90度
    }

}

Layer::~Layer()
{
}
