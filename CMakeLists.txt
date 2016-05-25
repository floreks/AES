cmake_minimum_required(VERSION 3.5)
project(AES_Port)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp cipher.cpp cipher.h)
add_executable(AES ${SOURCE_FILES})