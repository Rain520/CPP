cmake_minimum_required(VERSION 3.23)
project(shiyansi)

set(CMAKE_CXX_STANDARD 14)

add_executable(shiyansi main.cpp Person.cpp Person.h Student.cpp Student.h Graduate.cpp Graduate.h)
