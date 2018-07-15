cmake_minimum_required(VERSION 3.7)
project(cpp_multithreaded_matrix_multiply)

set(CMAKE_CXX_STANDARD 14)

add_executable(benchmarks benchmarks.cpp matrix.h matrix.cpp)
add_executable(catch_tests catch_tests.cpp matrix.h matrix.cpp)
