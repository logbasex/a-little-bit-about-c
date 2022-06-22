# https://viblo.asia/p/dao-dau-voi-cmake-thong-qua-vi-du-07LKXNbelV4
cmake_minimum_required(VERSION 3.22)
project(a-little-bit-about-c++)

set(CMAKE_CXX_STANDARD 14)

include_directories(big-o-green-32)

set(SOURCES big-o-green-32/l01_hello_world.cpp)

file(GLOB SOURCES "big-o-green-32/*.cpp")

add_executable(big-o-green-32 ${SOURCES})

#add_executable(a-little-bit-about-c++ main.cpp)