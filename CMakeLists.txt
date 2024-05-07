cmake_minimum_required(VERSION 3.27)
project(npg_projekt)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(npg_projekt
        include.h
        src.cpp
        main.cpp)
