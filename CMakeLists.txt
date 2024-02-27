cmake_minimum_required(VERSION 3.10)
project(SurvivalEngineer)

# Add the executable target
add_executable(SurvivalEngineer
    src/main.cpp
    src/window/WindowManager.cpp
    src/player/Player.cpp
    src/debugger/Debugger.cpp
)

# Include directories
target_include_directories(SurvivalEngineer PRIVATE
    ${CMAKE_SOURCE_DIR}/vendor/spdlog/include
    ${CMAKE_SOURCE_DIR}/vendor/imgui
    ${CMAKE_SOURCE_DIR}/vendor/raylib_macos/include
    ${CMAKE_SOURCE_DIR}/vendor/rlImGui
)

# Link libraries
target_link_libraries(SurvivalEngineer PRIVATE
    ${CMAKE_SOURCE_DIR}/vendor/raylib_macos/lib/libraylib.a
    ${CMAKE_SOURCE_DIR}/vendor/rlImGui/_bin/Debug/librlImGui.a
)

if(APPLE)
    target_link_libraries(SurvivalEngineer PRIVATE
        "-framework IOKit"
        "-framework Cocoa"
        "-framework CoreVideo"
        "-framework OpenGL"
    )
endif()


target_compile_options(SurvivalEngineer PRIVATE -std=c++17 -stdlib=libc++)