#include "spdlog/spdlog.h"
#include "window/WindowManager.h"

int main() {
	spdlog::info("Hello, World!");

	WindowManager window(800, 600, "Survival Engineer");

	return 0;
}