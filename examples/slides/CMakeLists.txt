cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")
if (CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -O3")
endif ()

project(MyProject)
add_executable(${PROJECT_NAME} main.cpp mylib.cpp)
target_link_libraries(${PROJECT_NAME} pthread)
add_subdirectory(Tests)
