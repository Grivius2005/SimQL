cmake_minimum_required(VERSION 3.20)
cmake_policy(SET CMP0135 NEW)
project(SimQL)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(test)

add_executable(SimQL main.cpp)
