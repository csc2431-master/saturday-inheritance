cmake_minimum_required(VERSION 3.10)
project(saturday_inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(saturday_inheritance main.cpp person.cpp person.h employee.cpp employee.h)