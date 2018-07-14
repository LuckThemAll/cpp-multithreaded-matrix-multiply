#define CATCH_CONFIG_MAIN
#include "matrix.h"
#include <iostream>
#include "catch.hpp"

TEST_CASE("Creating and not transposed") {
    vector<vector<double>> A = { { 1, 2 },{ 3, 4 } };
    Multiplier mulA = Multiplier(A);
    REQUIRE(mulA.matrix == A);
    REQUIRE_FALSE(mulA.transposed);
}

TEST_CASE("transposing") {
    vector<vector<double>> A = { { 1, 2 },{ 3, 4 } };
    vector<vector<double>> B = { { 1, 3 }, { 2, 4 } };
    Multiplier mulA = Multiplier(A);
    mulA.Transpose();
    Multiplier mulB = Multiplier(B);
    REQUIRE(mulA.matrix == mulB.matrix);
    REQUIRE(mulA.transposed);
}

TEST_CASE("One thread test") {
    vector<vector<double>> vecA = { { 1, 3 },{ 1, 2 } };
    Multiplier A = Multiplier(vecA);
    vector<vector<double>> vecB = { { 1, 2, 1 },{ 3, 1, 0 } };
    Multiplier B = Multiplier(vecB);

    vector<vector<double>> ans = { { 10, 5, 1 },{ 7, 4, 1 } };

    SECTION("Without transpose") {
        vector<vector<double>> result = A.Multiply(B, 1);
        REQUIRE(result == ans);
    }

    SECTION("With transpose") {
        A.Transpose();
        vector<vector<double>> result = A.Multiply(B, 1);
        REQUIRE(result == ans);
    }
}

TEST_CASE("Two threads test") {
    vector<vector<double>> vecA(10, vector<double>(10, 10));
    vector<vector<double>> vecB(10, vector<double>(10, 100));

    Multiplier A = Multiplier(vecA);
    Multiplier B = Multiplier(vecB);
    vector<vector<double>> ans(10, vector<double>(10, 10000));

    SECTION("Without transpose") {
        vector<vector<double>> result = A.Multiply(B, 2);
        REQUIRE(result == ans);
    }

    SECTION("With transpose") {
        A.Transpose();
        vector<vector<double>> result = A.Multiply(B, 2);
        REQUIRE(result == ans);
    }
}