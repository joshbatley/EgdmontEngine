cmake_minimum_required(VERSION 3.26)
project(Game)

set(CMAKE_CXX_STANDARD 23)
include($ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)

find_package(SDL2 CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)

add_executable(Game Game/main.cpp)

target_link_libraries(Game PRIVATE SDL2::SDL2)
target_link_libraries(Game PRIVATE imgui::imgui)