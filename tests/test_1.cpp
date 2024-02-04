// Copyright (c) 2024. Bartosz Zielonka

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
TEST_CASE("Single argument", "[Basic]") {
    auto* argument = "--text=test";
    const char* arguments[1] = { argument };

    car::ArgumentsReader argument_reader;
    argument_reader.read(2, arguments);
    const auto list = argument_reader.get_parameters_list();
    CHECK(!list.empty());
    CHECK(list[0] == "text");
    // CHECK(argument_reader.get("text") == "test");
}
*/