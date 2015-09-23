#include "SpectrPlugin.h"

#include "PlotterWindow.h"
#include "PluginAttributes/SpectrPluginAttributes.h"

SpectrPlugin::SpectrPlugin(QObject* parent)
{

}

SpectrPlugin::~SpectrPlugin()
{

}

void SpectrPlugin::Execute(HyperCube* cube, IAttributes* attr)
{
    PlotterWindow *w = new PlotterWindow();
    w->show();
    w->plotSpectr(cube,((SpectrPluginAttributes*)attr)->GetX(),((SpectrPluginAttributes*)attr)->GetY());
}
