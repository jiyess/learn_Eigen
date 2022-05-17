cmake_minimum_required(VERSION 3.22)
project(learn_eigen)

set(CMAKE_CXX_STANDARD 11)

include_directories("/opt/homebrew/Cellar/eigen/3.4.0_1/include/eigen3/")

add_executable(learn_eigen main.cpp)
