#include "Debugger.h"

Debugger::Debugger()
{
}

Debugger::~Debugger()
{
}

void Debugger::drawDebugger(bool &sceneGridVisible)
{
    ImGui::Begin("Debugger");
    
    ImGui::Checkbox("Scene Grid", &sceneGridVisible);

    ImGui::End();
}