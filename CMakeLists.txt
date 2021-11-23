cmake_minimum_required(VERSION 3.16)
project(triangle CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(triangle main.cpp src/Triangle/Triangle.cpp)
