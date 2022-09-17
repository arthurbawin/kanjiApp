cmake_minimum_required(VERSION 3.1)
project(kanjiApp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(kanjiApp ${CMAKE_CURRENT_SOURCE_DIR}/exe/main.cpp)