cmake_minimum_required(VERSION 3.14)
project(day_4)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH /usr/local)

set(EXECUTABLES "draw;line_play;envelope_star")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)
