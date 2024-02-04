// Copyright (c) 2024. Bartosz Zielonka

//
// Created by Bartosz Zielonka on 03.02.2024.
//
#include <stdexcept>

export module CppArgumentsReader:ArgumentsReaderExceptions;

namespace car {
    export class ArgumentsReaderExceptions final: public std::exception {
    public:
        explicit ArgumentsReaderExceptions(const char* p_message): m_message{p_message} {

        }
        [[nodiscard]] const char* what() const override {
            return m_message;
        }

    private:
        const char* m_message;
    };
}
