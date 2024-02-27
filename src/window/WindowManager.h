#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include "raylib.h"    // Base raylib functionality
#include "raymath.h"   // Vector and matrix operations, dependent on raylib
#include "rlgl.h"      // Low-level graphics layer, dependent on raylib
#include "imgui.h"     // Dear ImGui library
#include "rlImGui.h"   // Integration of raylib with ImGui, dependent on both

#include "../debugger/Debugger.h"

class WindowManager {
public:
	WindowManager(int width, int height, const char* title);
	~WindowManager();

	Camera2D camera = { 0 };
	Debugger debugger;
	bool debuggerVisible = false;

	bool sceneGridVisible = true;

	void Draw();
	void EndDraw();

	void drawImGui();
	void endImGui();

	void drawDebugger();
};

#endif
