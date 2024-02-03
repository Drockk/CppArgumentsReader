cmake_minimum_required(VERSION 3.28)
project(CppArgumentsReader)

add_library(CppArgumentsReader)
target_sources(CppArgumentsReader
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES
        FILES
            ArgumentsReader.cppm
            ArgumentsReaderExceptions.cppm
            CppArgumentsReader.cppm
)
