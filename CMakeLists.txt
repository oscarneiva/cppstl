cmake_minimum_required(VERSION 3.25)
project(cppstl)

set(CMAKE_CXX_STANDARD 14)

include_directories(cppstl)

add_executable(cppstl
        cppstl/Calculator.tpp
        cppstl/Calculator.h
        cppstl/cppstl.cpp)
