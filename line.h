#ifndef LINE_H
#define LINE_H

#include "odbchelper.h"

#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkPolyDataMapper.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkLine.h>
#include <vtkFloatArray.h>
#include <vtkCellData.h>
#include <vtkLineSource.h>
#include <vtkProperty.h>
#include <vtkActor.h>
#include <vtkTubeFilter.h>


class Line
{
public:
    Line();
    std::vector<vtkSmartPointer<vtkActor> > L1_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L1_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L2_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L2_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L2_3lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L3_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L3_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L3_3lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L4_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L4_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_1_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_1_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_3lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_4lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L6lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L7_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L7_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L8_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L8_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L9_1lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L9_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L10lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L11lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L12lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L13lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L13_2lineActors;
    std::vector<vtkSmartPointer<vtkActor> > L14lineActors;
    std::vector<vtkSmartPointer<vtkActor> > chazhilineActors;
    std::vector<vtkSmartPointer<vtkActor> > bujialayerlineActors;

    std::vector<vtkSmartPointer<vtkLineSource> > L1_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L1_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L2_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L2_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L2_3lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L3_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L3_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L3_3lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L4_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L4_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L5_1_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L5_1_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L5_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L5_3lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L5_4lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L6lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L7_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L7_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L8_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L8_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L9_1lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L9_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L10lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L11lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L12lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L13lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L13_2lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > L14lineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > chazhilineSources;
    std::vector<vtkSmartPointer<vtkLineSource> > bujialayerlineSources;

    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L1_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L1_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L2_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L2_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L2_3lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L3_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L3_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L3_3lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L4_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L4_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_1_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_1_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_3lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_4lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L6lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L7_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L7_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L8_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L8_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L9_1lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L9_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L10lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L11lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L12lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L13lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L13_2lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L14lineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > chazhilineMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > bujialayerlineMappers;

    //管道
    std::vector<vtkSmartPointer<vtkActor> > L1_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L1_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L2_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L2_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L2_3tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L3_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L3_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L3_3tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L4_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L4_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_1_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_1_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_3tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L5_4tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L6tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L7_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L7_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L8_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L8_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L9_1tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L9_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L10tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L11tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L12tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L13tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L13_2tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > L14tubeActors;
    std::vector<vtkSmartPointer<vtkActor> > chazhitubeActors;
    std::vector<vtkSmartPointer<vtkActor> > bujialayertubeActors;

    std::vector<vtkSmartPointer<vtkTubeFilter> > L1_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L1_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L2_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L2_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L2_3tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L3_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L3_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L3_3tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L4_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L4_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L5_1_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L5_1_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L5_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L5_3tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L5_4tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L6tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L7_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L7_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L8_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L8_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L9_1tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L9_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L10tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L11tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L12tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L13tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L13_2tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > L14tubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > chazhitubeFilters;
    std::vector<vtkSmartPointer<vtkTubeFilter> > bujialayertubeFilters;

    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L1_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L1_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L2_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L2_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L2_3tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L3_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L3_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L3_3tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L4_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L4_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_1_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_1_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_3tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L5_4tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L6tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L7_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L7_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L8_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L8_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L9_1tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L9_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L10tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L11tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L12tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L13tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L13_2tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > L14tubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > chazhitubeMappers;
    std::vector<vtkSmartPointer<vtkPolyDataMapper> > bujialayertubeMappers;
};

#endif // LINE_H
