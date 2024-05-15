cmake_minimum_required(VERSION 3.28)
project(herencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(herencia main.cpp
        cmake-build-debug/captain.h
        cmake-build-debug/abilities.h)
