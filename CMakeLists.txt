cmake_minimum_required(VERSION 3.6)
project(ERPSystem)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp main.cpp Account.cpp Account.h Document.cpp Document.h)
add_executable(untitled ${SOURCE_FILES})