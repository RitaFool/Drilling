#-------------------------------------------------
#
# Project created by QtCreator 2018-07-12T10:27:38
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Drilling
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += D:/VTK_debug/VTK/include/vtk-7.1
DLLDESTDIR += D:/VTK_debug/VTK/bin
LIBS += D:/VTK_debug/VTK/lib/vtkalglib-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkChartsCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonColor-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonComputationalGeometry-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonDataModel-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonExecutionModel-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonMath-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonMisc-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonSystem-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkCommonTransforms-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkDICOMParser-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkDomainsChemistry-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkDomainsChemistryOpenGL2-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkexoIIc-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkexpat-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersAMR-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersExtraction-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersFlowPaths-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersGeneral-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersGeneric-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersGeometry-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersHybrid-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersHyperTree-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersImaging-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersModeling-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersParallel-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersParallelImaging-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersPoints-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersProgrammable-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersSelection-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersSMP-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersSources-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersStatistics-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersTexture-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkFiltersVerdict-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkfreetype-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkGeovisCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkgl2ps-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkglew-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkGUISupportQt-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkGUISupportQtOpenGL-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkGUISupportQtSQL-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkhdf5-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkhdf5_hl-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingColor-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingFourier-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingGeneral-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingHybrid-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingMath-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingMorphological-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingSources-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingStatistics-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkImagingStencil-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkInfovisCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkInfovisLayout-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkInteractionImage-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkInteractionStyle-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkInteractionWidgets-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOAMR-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOEnSight-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOExodus-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOExport-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOGeometry-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOImage-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOImport-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOInfovis-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOLegacy-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOLSDyna-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOMINC-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOMovie-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIONetCDF-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOParallel-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOParallelXML-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOPLY-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOSQL-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOTecplotTable-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOVideo-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOXML-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkIOXMLParser-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkjpeg-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkjsoncpp-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtklibxml2-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkmetaio-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkNetCDF-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkNetCDF_cxx-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkoggtheora-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkParallelCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkpng-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkproj4-7.1_d.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingAnnotation-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingContext2D-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingContextOpenGL2-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingFreeType-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingGL2PSOpenGL2-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingImage-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingLabel-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingLOD-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingOpenGL2-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingQt-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingVolume-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkRenderingVolumeOpenGL2-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtksqlite-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtksys-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtktiff-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkverdict-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkViewsContext2D-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkViewsCore-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkViewsInfovis-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkViewsQt-7.1.lib
LIBS += D:/VTK_debug/VTK/lib/vtkzlib-7.1.lib

SOURCES += \
        main.cpp \
        widget.cpp \
    odbchelper.cpp \
    layer.cpp \
    line.cpp \
    renderer.cpp \
    adddrilling.cpp \
    virtualline.cpp \
    lithologydrilling.cpp \
    removedrilling.cpp \
    adddrillingdetail.cpp \
    removedrillingdetail.cpp \
    attribute.cpp \
    dialog.cpp \
    sortattribute.cpp \
    sortdialog.cpp

HEADERS += \
        widget.h \
    odbchelper.h \
    layer.h \
    line.h \
    renderer.h \
    adddrilling.h \
    virtualline.h \
    lithologydrilling.h \
    removedrilling.h \
    adddrillingdetail.h \
    removedrillingdetail.h \
    attribute.h \
    dialog.h \
    sortattribute.h \
    sortdialog.h
