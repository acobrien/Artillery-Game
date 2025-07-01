cmake_minimum_required(VERSION 3.31)
project(Artillery_Game)

set(CMAKE_CXX_STANDARD 26)

add_executable(Artillery_Game main.cpp
        Shell.cpp
        Shell.h
)
