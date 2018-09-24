cmake_minimum_required(VERSION 3.9)

project(solver-fsocualaya)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

add_executable(solver_fsocualaya
        tree.h
        node.h
        main.cpp)
