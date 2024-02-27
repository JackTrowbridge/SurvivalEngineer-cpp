#include "spdlog/spdlog.h"

#include "window/WindowManager.h"
#include "player/Player.h"

int main() {
	spdlog::info("Hello, World!");

	WindowManager window(800, 600, "Survival Engineer");
	Player player;

	return 0;
}