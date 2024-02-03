cmake_minimum_required(VERSION 3.28)
project(Example_1)

find_package(Catch2 3 REQUIRED)

add_executable(Example_1 main.cpp)

target_link_libraries(Example_1 CppArgumentsReader)
