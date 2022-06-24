# https://viblo.asia/p/dao-dau-voi-cmake-thong-qua-vi-du-07LKXNbelV4
cmake_minimum_required(VERSION 3.22)
project(a-little-bit-about-c++)

set(CMAKE_CXX_STANDARD 14)

include_directories(big-o-green-32)
include_directories(big-o-green-32/l03)

set(SOURCES big-o-green-32/l01_hello_world.cpp big-o-green-32/l01_sum_two_integers.cpp big-o-green-32/l03/sum.cpp)

# https://technoteshelp.com/how-to-use-cmake-file-glob-srcs-with-a-build-directory/
file(GLOB SOURCES "big-o-green-32/*.cpp" "big-o-green-32/*/*.cpp")

#add_executable(big-o-green-32 ${SOURCES})

#https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#static-libs
add_executable(l01_hello_world big-o-green-32/l01_hello_world.cpp)
add_executable(l01_sum_two_integers big-o-green-32/l01_sum_two_integers.cpp)
add_executable(sum big-o-green-32/l03/sum.cpp)
add_executable(integer_digits big-o-green-32/l03/integer_digits.cpp)

#add_executable(a-little-bit-about-c++ main.cpp)