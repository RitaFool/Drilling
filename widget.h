#ifndef WIDGET_H
#define WIDGET_H

#pragma execution_character_set("utf-8")

#include "layer.h"
#include "renderer.h"
#include "adddrilling.h"
#include "removedrilling.h"
#include "adddrillingdetail.h"
#include "removedrillingdetail.h"
#include "lithologydrilling.h"
#include "attribute.h"
#include "sortattribute.h"

#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVTKWidget.h>
#include <vtkRenderWindow.h>

extern Renderer rend;
extern QVTKWidget *a;

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void enterSystem();
    void slotViewDrilling();
    void slotHideDrilling();
    void slotViewLine();
    void slotHideLine();
    void slotAddDrilling();
    void slotRemoveDrilling();
    void slotAddDrillingDetail();
    void slotRemoveDrillingDetail();
    void slotLithologyDrilling();
    void slotCheckDrilling();
    void slotViewCode();
    void slotHideCode();
    void slotAttribute();

    void slotViewSort();
    void slotHideSort();
    void slotViewTop();
    void slotHideTop();
    void slotViewBottom();
    void slotHideBottom();
    void slotViewBorder();
    void slotHideBorder();
//    void slotSortStretch(); // 地层拉伸
    void slotSortAttribute();

private:
    QMenu *drillingView;
    QMenu *drillingCode;
    QMenu *drillingEdit;
    QMenu *viewLine;
    QMenu *sortView;

    QAction *viewDrilling;
    QAction *hideDrilling;
    QAction *hideLine;
    QAction *linearDisplay;
    QAction *columnDisplay;
    QAction *lithologyDrilling;
    QAction *viewCode;
    QAction *hideCode;
    QAction *drillingProperties;
    QAction *testDrilling;
    QAction *addDrilling;
    QAction *removeDrilling;
    QAction *addDrillingData;
    QAction *removeDrillingData;

    QMenu *sortMenu;
    QAction *viewSort;
    QAction *hideSort;
    QMenu *topMenu;
    QAction *viewTop;
    QAction *hideTop;
    QMenu *bottomMenu;
    QAction *viewBottom;
    QAction *hideBottom;
    QMenu *borderMenu;
    QAction *viewBorder;
    QAction *hideBorder;
    QAction *sortAttribute;
    QPushButton *enterSys;
    Layer *layer;
    addD *add;
    removeD *remove;

    addDD *add2;
    removeDD *remove2;

    attribute *win;
    sortattribute *win1;
};

#endif // WIDGET_H
