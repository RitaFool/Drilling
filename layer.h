#ifndef LAYER_H
#define LAYER_H

#include "odbchelper.h"
#include "dialog.h"
#include "sortdialog.h"

#include <vtkSmartPointer.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkDelaunay2D.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkTextActor3D.h>
#include <vtkTextProperty.h>
#include <vtkVectorText.h>
#include <vtkTransform.h>
#include <vtkTransformFilter.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkAppendPolyData.h>
#include <vtkTextProperty.h>
#include <vtkTextActor.h>
#include <vtkSurfaceReconstructionFilter.h>
#include <vtkContourFilter.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkActor.h>
#include <vtkPolyData.h>
//围边
#include <vtkPlaneSource.h>
#include <vtkFloatArray.h>
#include <vtkCamera.h>
#include <vtkPointData.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataReader.h>
#include <vtkSmoothPolyDataFilter.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkPlaneSource.h>

class Layer
{
public:
    Layer();
    ~Layer();

    vtkSmartPointer<vtkPoints> points;
    vtkSmartPointer<vtkPolyData> polydata;
    vtkSmartPointer<vtkDelaunay2D> delaunay;
    vtkSmartPointer<vtkVertexGlyphFilter> glyphFilter;
    vtkSmartPointer<vtkPolyDataMapper> pointsMapper;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper;
    vtkSmartPointer<vtkActor> pointsActor;
    vtkSmartPointer<vtkActor> triangulatedActor;

    vtkSmartPointer<vtkPoints> points2;
    vtkSmartPointer<vtkPolyData> polydata2;
    vtkSmartPointer<vtkDelaunay2D> delaunay2;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper2;
    vtkSmartPointer<vtkActor> triangulatedActor2;

    vtkSmartPointer<vtkPoints> points3;
    vtkSmartPointer<vtkPolyData> polydata3;
    vtkSmartPointer<vtkDelaunay2D> delaunay3;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper3;
    vtkSmartPointer<vtkActor> triangulatedActor3;

    vtkSmartPointer<vtkPoints> points4;
    vtkSmartPointer<vtkPolyData> polydata4;
    vtkSmartPointer<vtkDelaunay2D> delaunay4;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper4;
    vtkSmartPointer<vtkActor> triangulatedActor4;

    vtkSmartPointer<vtkPoints> points5;
    vtkSmartPointer<vtkPolyData> polydata5;
    vtkSmartPointer<vtkDelaunay2D> delaunay5;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper5;
    vtkSmartPointer<vtkActor> triangulatedActor5;

    vtkSmartPointer<vtkPoints> points6;
    vtkSmartPointer<vtkPolyData> polydata6;
    vtkSmartPointer<vtkDelaunay2D> delaunay6;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper6;
    vtkSmartPointer<vtkActor> triangulatedActor6;

    //钻孔编码
    std::vector<vtkSmartPointer<vtkTextActor3D> > textActors;
    std::vector<vtkSmartPointer<vtkTextProperty> > textPropertys;
    //地层编号
    vtkSmartPointer<vtkTextActor3D> textActor;
    vtkSmartPointer<vtkTextProperty> textProperty;

    //围边1-1
    vtkSmartPointer<vtkPoints> points7;
    vtkSmartPointer<vtkPolyData> polydata7;
    vtkSmartPointer<vtkDelaunay2D> delaunay7;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper7;
    vtkSmartPointer<vtkActor> triangulatedActor7;

    //围边1-2
    vtkSmartPointer<vtkPoints> points8;
    vtkSmartPointer<vtkPolyData> polydata8;
    vtkSmartPointer<vtkDelaunay2D> delaunay8;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper8;
    vtkSmartPointer<vtkActor> triangulatedActor8;

    //围边1-3
    vtkSmartPointer<vtkPoints> points9;
    vtkSmartPointer<vtkPolyData> polydata9;
    vtkSmartPointer<vtkDelaunay2D> delaunay9;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper9;
    vtkSmartPointer<vtkActor> triangulatedActor9;

    //围边2-1
    vtkSmartPointer<vtkPoints> points10;
    vtkSmartPointer<vtkPolyData> polydata10;
    vtkSmartPointer<vtkDelaunay2D> delaunay10;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper10;
    vtkSmartPointer<vtkActor> triangulatedActor10;

    //围边2-2
    vtkSmartPointer<vtkPoints> points11;
    vtkSmartPointer<vtkPolyData> polydata11;
    vtkSmartPointer<vtkDelaunay2D> delaunay11;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper11;
    vtkSmartPointer<vtkActor> triangulatedActor11;

    //围边2-3
    vtkSmartPointer<vtkPoints> points12;
    vtkSmartPointer<vtkPolyData> polydata12;
    vtkSmartPointer<vtkDelaunay2D> delaunay12;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper12;
    vtkSmartPointer<vtkActor> triangulatedActor12;

    //围边3-1
    vtkSmartPointer<vtkPoints> points13;
    vtkSmartPointer<vtkPolyData> polydata13;
    vtkSmartPointer<vtkDelaunay2D> delaunay13;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper13;
    vtkSmartPointer<vtkActor> triangulatedActor13;

    //围边3-2
    vtkSmartPointer<vtkPoints> points14;
    vtkSmartPointer<vtkPolyData> polydata14;
    vtkSmartPointer<vtkDelaunay2D> delaunay14;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper14;
    vtkSmartPointer<vtkActor> triangulatedActor14;

    //围边4
    vtkSmartPointer<vtkPoints> points15;
    vtkSmartPointer<vtkPolyData> polydata15;
    vtkSmartPointer<vtkDelaunay2D> delaunay15;
    vtkSmartPointer<vtkPolyDataMapper> triangulatedMapper15;
    vtkSmartPointer<vtkActor> triangulatedActor15;

    //围边EX
    vtkSmartPointer<vtkActor> planeActor;
};


#endif // LAYER_H
