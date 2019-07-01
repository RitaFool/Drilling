#include "layer.h"

Layer::Layer()
{
    //插入数据======================================================================================================
    points = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<m;i++)
    {
        points->InsertNextPoint(east1[i],north1[i],altitude1[i]);
    }

    //4，5，6岩性
    points2 = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<sortcount4;i++)
    {
        points2->InsertNextPoint(jeast4[i],jnorth4[i],jaltitude4[i]-100);
    }

    //第二层3
    points3 = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<sortcount3;i++)
    {
        points3->InsertNextPoint(jeast3[i],jnorth3[i],jaltitude3[i]-100);
    }
    //第二层4 红色
    points4 = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<sortcount4;i++)
    {
        points4->InsertNextPoint(jeast4[i],jnorth4[i],jaltitude4[i]-100);
    }
    //第二层5 绿色
    points5 = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<sortcount5;i++)
    {
        points2->InsertNextPoint(jeast5[i],jnorth5[i],jaltitude5[i]-100);
        points5->InsertNextPoint(jeast5[i],jnorth5[i],jaltitude5[i]-100);
    }
    //第二层6 蓝色
    points6 = vtkSmartPointer<vtkPoints>::New();
    for(int i=0;i<sortcount6;i++)
    {
        points2->InsertNextPoint(jeast6[i],jnorth6[i],jaltitude6[i]-100);
    }


    //围边1-1
    points7 = vtkSmartPointer<vtkPoints>::New();
    points7->InsertNextPoint(east1[6],north1[6],altitude1[6]);
    points7->InsertNextPoint(east1[5],north1[5],altitude1[5]);
    points7->InsertNextPoint(east1[6]+0.1,north1[6]+0.1,altitude1[6]-102);
    points7->InsertNextPoint(east1[5]+0.1,north1[5]+0.1,altitude1[5]-102);

    //围边1-2
    points8 = vtkSmartPointer<vtkPoints>::New();
    points8->InsertNextPoint(east1[5],north1[5],altitude1[5]);
    points8->InsertNextPoint(east1[41],north1[41],altitude1[41]);
    points8->InsertNextPoint(east1[9],north1[9],altitude1[9]);
    points8->InsertNextPoint(east1[55],north1[55],altitude1[55]);
    points8->InsertNextPoint(east1[56],north1[56],altitude1[56]);

    points8->InsertNextPoint(east1[5]+0.1,north1[5]+0.1,altitude1[5]-102);
    points8->InsertNextPoint(east1[41]+0.1,north1[41]+0.1,altitude1[41]-102);
    points8->InsertNextPoint(east1[9]+0.1,north1[9]+0.1,altitude1[9]-102);
    points8->InsertNextPoint(east1[55]+0.1,north1[55]+0.1,altitude1[55]-102);
    points8->InsertNextPoint(east1[56]+0.1,north1[56]+0.1,altitude1[56]-102);

    //围边1-3
    points9 = vtkSmartPointer<vtkPoints>::New();
    points9->InsertNextPoint(east1[56],north1[56],altitude1[56]);
    points9->InsertNextPoint(east1[7],north1[7],altitude1[7]);
    points9->InsertNextPoint(east1[56]+0.1,north1[56]+0.1,altitude1[56]-102);
    points9->InsertNextPoint(east1[7]+0.1,north1[7]+0.1,altitude1[7]-102);

    //围边2-1
    points10 = vtkSmartPointer<vtkPoints>::New();
    points10->InsertNextPoint(east1[7],north1[7],altitude1[7]);
    points10->InsertNextPoint(east1[62],north1[62],altitude1[62]);
    points10->InsertNextPoint(east1[45],north1[45],altitude1[45]);
    points10->InsertNextPoint(east1[49],north1[49],altitude1[49]);

    points10->InsertNextPoint(east1[7]+0.1,north1[7]+0.1,altitude1[7]-102);
    points10->InsertNextPoint(east1[62]+0.1,north1[62]+0.1,altitude1[62]-102);
    points10->InsertNextPoint(east1[45]+0.1,north1[45]+0.1,altitude1[45]-102);
    points10->InsertNextPoint(east1[49]+0.1,north1[49]+0.1,altitude1[49]-102);

    //围边2-2
    points11 = vtkSmartPointer<vtkPoints>::New();
    points11->InsertNextPoint(east1[49],north1[49],altitude1[49]);
    points11->InsertNextPoint(east1[48],north1[48],altitude1[48]);

    points11->InsertNextPoint(east1[49]+0.1,north1[49]+0.1,altitude1[49]-102);
    points11->InsertNextPoint(east1[48]+0.1,north1[48]+0.1,altitude1[48]-102);

    //围边2-3
    points12 = vtkSmartPointer<vtkPoints>::New();
    points12->InsertNextPoint(east1[48],north1[48],altitude1[48]);
    points12->InsertNextPoint(east1[29],north1[29],altitude1[29]);
    points12->InsertNextPoint(east1[30],north1[30],altitude1[30]);

    points12->InsertNextPoint(east1[48]+0.1,north1[48]+0.1,altitude1[48]-102);
    points12->InsertNextPoint(east1[29]+0.1,north1[29]+0.1,altitude1[29]-102);
    points12->InsertNextPoint(east1[30]+0.1,north1[30]+0.1,altitude1[30]-102);

    //围边3-1
    points13 = vtkSmartPointer<vtkPoints>::New();
    points13->InsertNextPoint(east1[50],north1[50],altitude1[50]);
    points13->InsertNextPoint(east1[53],north1[53],altitude1[53]);
    points13->InsertNextPoint(east1[52],north1[52],altitude1[52]);
    points13->InsertNextPoint(east1[3],north1[3],altitude1[3]);

    points13->InsertNextPoint(east1[50]+0.1,north1[50]+0.1,altitude1[50]-102);
    points13->InsertNextPoint(east1[53]+0.1,north1[53]+0.1,altitude1[53]-102);
    points13->InsertNextPoint(east1[52]+0.1,north1[52]+0.1,altitude1[52]-102);
    points13->InsertNextPoint(east1[3]+0.1,north1[3]+0.1,altitude1[3]-102);

    //围边3-2
    points14 = vtkSmartPointer<vtkPoints>::New();
    points14->InsertNextPoint(east1[3],north1[3],altitude1[3]);
    points14->InsertNextPoint(east1[0],north1[0],altitude1[0]);
    points14->InsertNextPoint(east1[32],north1[32],altitude1[32]);

    points14->InsertNextPoint(east1[3]+0.1,north1[3]+0.1,altitude1[3]-102);
    points14->InsertNextPoint(east1[0]+0.1,north1[0]+0.1,altitude1[0]-102);
    points14->InsertNextPoint(east1[32]+0.1,north1[32]+0.1,altitude1[32]-102);

    //围边4
    points15 = vtkSmartPointer<vtkPoints>::New();
    points15->InsertNextPoint(east1[32],north1[32],altitude1[32]);
    points15->InsertNextPoint(east1[31],north1[31],altitude1[31]);
    points15->InsertNextPoint(east1[2],north1[2],altitude1[2]);
    points15->InsertNextPoint(east1[4],north1[4],altitude1[4]);
    points15->InsertNextPoint(east1[6],north1[6],altitude1[6]);

    points15->InsertNextPoint(east1[32]+0.1,north1[32]+0.1,altitude1[32]-102);
    points15->InsertNextPoint(east1[31]+0.1,north1[31]+0.1,altitude1[31]-102);
    points15->InsertNextPoint(east1[2]+0.1,north1[2]+0.1,altitude1[2]-102);
    points15->InsertNextPoint(east1[4]+0.1,north1[4]+0.1,altitude1[4]-102);
    points15->InsertNextPoint(east1[6]+0.1,north1[6]+0.1,altitude1[6]-102);

    //三角剖分建立地层========================================================================================
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
    pointsActor->GetProperty()->SetPointSize(getThickness);
    pointsActor->GetProperty()->SetColor(getdColorR, getdColorG, getdColorB);

    triangulatedMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper->SetInputData(delaunay->GetOutput());
    triangulatedActor = vtkSmartPointer<vtkActor>::New();
    triangulatedActor->SetMapper(triangulatedMapper);
    triangulatedActor->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor->GetProperty()->SetColor(0,0.8,0.4);

    //4，5，6岩性
    polydata2 = vtkSmartPointer<vtkPolyData>::New();
    polydata2->SetPoints(points2);

    delaunay2 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay2->SetInputData(polydata2);
    delaunay2->Update();
    triangulatedMapper2 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper2->SetInputData(delaunay2->GetOutput());
    triangulatedActor2 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor2->SetMapper(triangulatedMapper2);
    triangulatedActor2->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor2->GetProperty()->SetColor(0.3,1,0.8);

    //第二层岩性3
    polydata3 = vtkSmartPointer<vtkPolyData>::New();
    polydata3->SetPoints(points3);

    delaunay3 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay3->SetInputData(polydata3);
    delaunay3->Update();
    triangulatedMapper3 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper3->SetInputData(delaunay3->GetOutput());
    triangulatedActor3 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor3->SetMapper(triangulatedMapper3);
    triangulatedActor3->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor3->GetProperty()->SetColor(0.4,0.5,0.8);

    //第二层岩性4
    polydata4 = vtkSmartPointer<vtkPolyData>::New();
    polydata4->SetPoints(points4);

    delaunay4 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay4->SetInputData(polydata4);
    delaunay4->Update();
    triangulatedMapper4 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper4->SetInputData(delaunay4->GetOutput());
    triangulatedActor4 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor4->SetMapper(triangulatedMapper4);
    triangulatedActor4->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor4->GetProperty()->SetColor(1,0,0);

    //第二层岩性5
    polydata5 = vtkSmartPointer<vtkPolyData>::New();
    polydata5->SetPoints(points5);

    delaunay5 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay5->SetInputData(polydata5);
    delaunay5->Update();
    triangulatedMapper5 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper5->SetInputData(delaunay5->GetOutput());
    triangulatedActor5 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor5->SetMapper(triangulatedMapper5);
    triangulatedActor5->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor5->GetProperty()->SetColor(0,1,0);

    //第二层岩性6
    polydata6 = vtkSmartPointer<vtkPolyData>::New();
    polydata6->SetPoints(points6);

    delaunay6 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay6->SetInputData(polydata6);
    delaunay6->Update();
    triangulatedMapper6 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper6->SetInputData(delaunay6->GetOutput());
    triangulatedActor6 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor6->SetMapper(triangulatedMapper6);
    triangulatedActor6->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor6->GetProperty()->SetColor(0,0,1);

    //显示编码================================================================================================
    for(int i = 0; i<m; i++)
    {
        textPropertys.push_back(vtkSmartPointer<vtkTextProperty>::New());
        textActors.push_back(vtkSmartPointer<vtkTextActor3D>::New());
        QString str = jborehole[i]+"\n"+"("+QString::number(east1[i],10,2)+","+QString::number(north1[i],10,2)+","+QString::number(altitude1[i],10,2)+")";
        textActors[i]->SetInput(str.toLatin1().data());
        textActors[i]->SetTextProperty(textPropertys[i]);
        textActors[i]->GetTextProperty()->SetFontFamily(20);
        textActors[i]->GetTextProperty()->SetFontSize(10); // 设置字体大小
        textActors[i]->SetPosition(east1[i],north1[i],altitude1[i]); // 设置编码位置
        textActors[i]->GetTextProperty()->SetColor(0, 0, 1); // 设置编码颜色
        textActors[i]->SetScale(0.2 ,0.2, 0.2); //设置文字大小
    }

    //围边1-1==================================================================================================
    polydata7 = vtkSmartPointer<vtkPolyData>::New();
    polydata7->SetPoints(points7);

    delaunay7 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay7->SetInputData(polydata7);
    delaunay7->Update();

    triangulatedMapper7 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper7->SetInputData(delaunay7->GetOutput());
    triangulatedActor7 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor7->SetMapper(triangulatedMapper7);
    triangulatedActor7->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor7->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边1-2================================================================================================
    polydata8 = vtkSmartPointer<vtkPolyData>::New();
    polydata8->SetPoints(points8);

    delaunay8 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay8->SetInputData(polydata8);
    delaunay8->Update();

    triangulatedMapper8 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper8->SetInputData(delaunay8->GetOutput());
    triangulatedActor8 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor8->SetMapper(triangulatedMapper8);
    triangulatedActor8->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor8->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边1-3================================================================================================
    polydata9 = vtkSmartPointer<vtkPolyData>::New();
    polydata9->SetPoints(points9);

    delaunay9 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay9->SetInputData(polydata9);
    delaunay9->Update();

    triangulatedMapper9 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper9->SetInputData(delaunay9->GetOutput());
    triangulatedActor9 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor9->SetMapper(triangulatedMapper9);
    triangulatedActor9->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor9->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边2-1================================================================================================
    polydata10 = vtkSmartPointer<vtkPolyData>::New();
    polydata10->SetPoints(points10);

    delaunay10 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay10->SetInputData(polydata10);
    delaunay10->Update();

    triangulatedMapper10 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper10->SetInputData(delaunay10->GetOutput());
    triangulatedActor10 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor10->SetMapper(triangulatedMapper10);
    triangulatedActor10->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor10->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边2-2================================================================================================
    polydata11 = vtkSmartPointer<vtkPolyData>::New();
    polydata11->SetPoints(points11);

    delaunay11 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay11->SetInputData(polydata11);
    delaunay11->Update();

    triangulatedMapper11 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper11->SetInputData(delaunay11->GetOutput());
    triangulatedActor11 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor11->SetMapper(triangulatedMapper11);
    triangulatedActor11->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor11->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边2-3================================================================================================
    polydata12 = vtkSmartPointer<vtkPolyData>::New();
    polydata12->SetPoints(points12);

    delaunay12 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay12->SetInputData(polydata12);
    delaunay12->Update();

    triangulatedMapper12 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper12->SetInputData(delaunay12->GetOutput());
    triangulatedActor12 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor12->SetMapper(triangulatedMapper12);
    triangulatedActor12->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor12->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边3-1================================================================================================
    polydata13 = vtkSmartPointer<vtkPolyData>::New();
    polydata13->SetPoints(points13);

    delaunay13 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay13->SetInputData(polydata13);
    delaunay13->Update();

    triangulatedMapper13 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper13->SetInputData(delaunay13->GetOutput());
    triangulatedActor13 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor13->SetMapper(triangulatedMapper13);
    triangulatedActor13->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor13->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边3-2================================================================================================
    polydata14 = vtkSmartPointer<vtkPolyData>::New();
    polydata14->SetPoints(points14);

    delaunay14 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay14->SetInputData(polydata14);
    delaunay14->Update();

    triangulatedMapper14 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper14->SetInputData(delaunay14->GetOutput());
    triangulatedActor14 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor14->SetMapper(triangulatedMapper14);
    triangulatedActor14->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor14->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边4==================================================================================================
    polydata15 = vtkSmartPointer<vtkPolyData>::New();
    polydata15->SetPoints(points15);

    delaunay15 = vtkSmartPointer<vtkDelaunay2D>::New();
    delaunay15->SetInputData(polydata15);
    delaunay15->Update();

    triangulatedMapper15 = vtkSmartPointer<vtkPolyDataMapper>::New();
    triangulatedMapper15->SetInputData(delaunay15->GetOutput());
    triangulatedActor15 = vtkSmartPointer<vtkActor>::New();
    triangulatedActor15->SetMapper(triangulatedMapper15);
    triangulatedActor15->GetProperty()->SetOpacity(getlOpacity);
    triangulatedActor15->GetProperty()->SetColor(0.9,0.9,0.98);

    //围边EX
    vtkSmartPointer<vtkPlaneSource> planeSource = vtkSmartPointer<vtkPlaneSource>::New();
    planeSource->SetOrigin(east1[50], north1[50], altitude1[50]);
    planeSource->SetPoint1(east1[30], north1[30], altitude1[30]);
    planeSource->SetPoint2(east1[50], north1[50], altitude1[50]-102);
    vtkSmartPointer<vtkPolyDataMapper> planeMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    planeMapper->SetInputConnection(planeSource->GetOutputPort());
    planeActor = vtkSmartPointer<vtkActor>::New();
    planeActor->SetMapper(planeMapper);
    planeActor->GetProperty()->SetColor(0.9,0.9,0.98);
    planeActor->GetProperty()->SetOpacity(getlOpacity);


    //地层编号================================================================================================
    textActor = vtkSmartPointer<vtkTextActor3D>::New();
    textProperty = vtkSmartPointer<vtkTextProperty>::New();
    QString str1 = QString("L1-1");
    textActor->SetInput(str1.toLatin1().data());
    textActor->SetTextProperty(textProperty);
    textActor->GetTextProperty()->SetFontFamily(20);
    textActor->GetTextProperty()->SetFontSize(30); // 设置字体大小
    textActor->SetPosition(2100,4180,-30); // 设置编号位置
    textActor->GetTextProperty()->SetColor(0, 0, 1); // 设置编码颜色
    textActor->SetScale(1 ,1, 1); //设置文字大小
    textActor->RotateX(90.0);

}

Layer::~Layer()
{

}
