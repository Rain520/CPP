cmake_minimum_required(VERSION 3.23)
project(shiyanyi)

set(CMAKE_CXX_STANDARD 14)

add_executable(shiyanyi main.cpp Tree.h Tree.cpp Date.cpp Date.h People.cpp People.h Songer.h Songer.cpp)
