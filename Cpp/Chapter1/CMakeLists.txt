cmake_minimum_required(VERSION 3.5)

project(Chapter1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test main.cpp)

add_executable(1_11  1_11.cpp)

add_executable(1_2  1_2.cpp)

add_executable(1_3  1_3.cpp)
