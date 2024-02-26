#include "raylib.h"
#include "rlImGui.h"
#include "imgui.h"
#include "WindowManager.h"

WindowManager::WindowManager(int width, int height, const char* title)
{
	InitWindow(width, height, title);
	rlImGuiSetup(true);
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		Draw();
		EndDraw();
	}

}

WindowManager::~WindowManager()
{
	CloseWindow();
}

void WindowManager::Draw()
{
	BeginDrawing();
	ClearBackground(BLACK);
	drawImGui();
}

void WindowManager::EndDraw()
{
	endImGui();
	EndDrawing();
}

void WindowManager::drawImGui()
{
	rlImGuiBegin();
}

void WindowManager::endImGui()
{
	rlImGuiEnd();
}
