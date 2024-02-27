#ifndef DEBUGGER_H
#define DEBUGGER_H

#include "imgui.h"

class Debugger{
public:
    Debugger();
    ~Debugger();

    void drawDebugger(bool &sceneGridVisible);
};

#endif