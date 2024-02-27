#include "WindowManager.hpp"

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

	BeginMode2D(WindowManager::camera);
	
	rlPushMatrix();
		rlTranslatef(0, 25*50, 0);
		rlRotatef(90, 1, 0, 0);
		DrawGrid(100, 50);
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
