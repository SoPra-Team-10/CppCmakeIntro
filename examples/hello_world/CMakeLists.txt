cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -Wall -Wpedantic -Wextra)

project(HelloWorld)

set(SOURCES main.cpp hello_world.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
