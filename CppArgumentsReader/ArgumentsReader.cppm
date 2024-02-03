//
// Created by batzi on 03.02.2024.
//
export module CppArgumentsReader:ArgumentsReader;
import :ArgumentsReaderExceptions;

namespace car {
    export class ArgumentsReader {
    public:
        void read(const int p_arguments_number, const char** p_arguments) {
            if (p_arguments_number <= 1) {
                throw ArgumentsReaderExceptions("Provided too small number of arguments");
            }

            if (p_arguments == nullptr) {
                throw ArgumentsReaderExceptions("Arguments pointer is not valid");
            }
        }
    };
}