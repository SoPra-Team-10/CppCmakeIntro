cmake_minimum_required(VERSION 3.12)
project(HuffmanEncoder)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")

add_executable(${PROJECT_NAME} main.cpp)