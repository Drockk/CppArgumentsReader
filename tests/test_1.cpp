//
// Created by batzi on 03.02.2024.
//
#include <catch2/catch_test_macros.hpp>

import CppArgumentsReader;

TEST_CASE("A", "[A]") {
    CHECK(plus(2, 5) == 7);
}

TEST_CASE("B", "[A]") {
    CHECK(plus(2, 5) == 6);
}
