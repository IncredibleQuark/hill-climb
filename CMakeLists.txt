cmake_minimum_required(VERSION 3.19)
project(hill_climb)

set(CMAKE_CXX_STANDARD 14)

add_executable(hill_climb main.cpp Location.cpp Location.h Point.cpp Point.h Algorithm.cpp Algorithm.h)