#include "WindowManager.h"

WindowManager::WindowManager(int width, int height, const char* title)
{
	InitWindow(width, height, title);
	rlImGuiSetup(true);

	camera.zoom = 1.0f;

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		Draw();
		drawDebugger();
		EndDraw();
	}

}

WindowManager::~WindowManager()
{
	rlImGuiShutdown();
	CloseWindow();
}

void WindowManager::Draw()
{
	BeginDrawing();
	ClearBackground(BLACK);

	BeginMode2D(WindowManager::camera);
	
	rlPushMatrix();
		rlTranslatef(0, 25*50, 0);
		rlRotatef(90, 1, 0, 0);
		if(sceneGridVisible) DrawGrid(100, 25);
	rlPopMatrix();

	EndMode2D();

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

void WindowManager::drawDebugger()
{
    if ((IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) && IsKeyPressed(KEY_D)) {
		debuggerVisible = !debuggerVisible;
	}

	if(debuggerVisible){
		debugger.drawDebugger(sceneGridVisible);
	}
}
