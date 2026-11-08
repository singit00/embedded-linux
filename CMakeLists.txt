cmake_minimum_required(VERSION 3.16)

project(
    EmbeddedLinuxProject
    VERSION 1.0.0
    LANGUAGES CXX   
)

# This instruction specifies the required minimum version of CMake 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(
    embedded-linux-app
    src/main.cpp
)