cmake_minimum_required(VERSION 3.28)
project(tests)

find_package(Catch2 3 REQUIRED)

add_executable(tests test_1.cpp)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain CppArgumentsReader)

include(CTest)
include(Catch)
catch_discover_tests(tests)
