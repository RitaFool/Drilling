﻿#ifndef LAYER_H
#define LAYER_H

#include "odbchelper.h"

#include <vtkSmartPointer.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkDelaunay2D.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkProperty.h>
#include <vtkTextActor3D.h>
#include <vtkTextProperty.h>

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

    std::vector<vtkSmartPointer<vtkTextActor3D> > textActors;
    std::vector<vtkSmartPointer<vtkTextProperty> > textPropertys;
};


#endif // LAYER_H
