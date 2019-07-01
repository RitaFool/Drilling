#ifndef VIRTUALLINE_H
#define VIRTUALLINE_H

#include "odbchelper.h"

#include <vtkSmartPointer.h>
#include <vtkActor.h>
#include <vtkPolyDataMapper.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkLine.h>
#include <vtkFloatArray.h>
#include <vtkCellData.h>
#include <vtkLineSource.h>
#include <vtkProperty.h>

class VirtualLine
{
public:
    VirtualLine();
    std::vector<vtkSmartPointer<vtkActor> > virtualLineActors;
    std::vector<vtkSmartPointer<vtkLineSource> > virtualLineSources;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > virtualLineMappers;
};

#endif // VIRTUALLINE_H
