//
// Created by batzi on 03.02.2024.
//
#include <catch2/catch_test_macros.hpp>

import CppArgumentsReader;

TEST_CASE("Too small amount of arguments", "[Basic]") {
    car::ArgumentsReader argument_reader;

    REQUIRE_THROWS_AS(argument_reader.read(0, nullptr), car::ArgumentsReaderExceptions);
}

TEST_CASE("Not valid arguments pointer", "[Basic]") {
    car::ArgumentsReader argument_reader;

    REQUIRE_THROWS_AS(argument_reader.read(2, nullptr), car::ArgumentsReaderExceptions);
}

/*
TEST_CASE("Single argument", "[Basic-String]") {
    char* argument = "--text=test";
    const char* arguments[1] = { argument };

    car::ArgumentsReader argument_reader;
    argument_reader.read(1, arguments);
    auto list = argument_reader.get_Arguments_list();
    CHECK(list[0] == "text");
    CHECK(argument_reader.get("text") == "test");
}
*/