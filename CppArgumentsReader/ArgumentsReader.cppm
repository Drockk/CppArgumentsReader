// Copyright (c) 2024. Bartosz Zielonka

//
// Created by Bartosz Zielonka on 03.02.2024.
//

#include <string>
#include <vector>
#include <iostream>

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

            std::cout << p_arguments;
        }

        [[nodiscard]] const std::vector<std::string>& get_parameters_list() const {
            return m_parameters_list;
        }

    private:
        std::vector<std::string> m_parameters_list;
    };
}
