#pragma once

class WindowManager {
public:
	WindowManager(int width, int height, const char* title);
	~WindowManager();

	void Draw();
	void EndDraw();

	void drawImGui();
	void endImGui();
};
