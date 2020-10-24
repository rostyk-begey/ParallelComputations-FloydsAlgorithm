cmake_minimum_required(VERSION 3.17)
project(Task4)

set(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(Task4 main.cpp Matrix.cpp Matrix.h ConsoleApp.cpp ConsoleApp.h)