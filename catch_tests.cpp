#define CATCH_CONFIG_MAIN
#include "matrix.h"
#include <iostream>
#include "catch.hpp"

TEST_CASE("Creating and not transposed") {
    vv_d A = { { 1, 2 },{ 3, 4 } };
    Matrix matrixA = Matrix(A);
    REQUIRE(matrixA.get_matrix() == A);
    REQUIRE_FALSE(matrixA.is_transposed());
}

TEST_CASE("transposing") {
    vv_d A = { { 1, 2 },{ 3, 4 } };
    vv_d B = { { 1, 3 }, { 2, 4 } };
    Matrix matrixA = Matrix(A);
    matrixA.transpose();
    Matrix matrixB = Matrix(B);
    REQUIRE(matrixA.get_matrix() == matrixB.get_matrix());
    REQUIRE(matrixA.is_transposed());
}

TEST_CASE("One thread test") {
    vv_d A = { { 1, 3 },{ 1, 2 } };
    vv_d B = { { 1, 2, 1 },{ 3, 1, 0 } };

    vv_d ans = { { 10, 5, 1 },{ 7, 4, 1 } };
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(A), std::make_shared<Matrix>(B));
    SECTION("Without transpose") {
        vv_d result = mul_servise.multiply();
        REQUIRE(result == ans);
    }

    SECTION("With transpose") {
        mul_servise.get_first_matrix()->transpose();
        vector<vector<double>> result = mul_servise.multiply(1);
        REQUIRE(result == ans);
    }
}

TEST_CASE("Two threads test") {
    vv_d A(10, vector<double>(10, 10));
    vv_d B(10, vector<double>(10, 100));
    vv_d ans(10, vector<double>(10, 10000));

    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(A), std::make_shared<Matrix>(B));
    SECTION("Without transpose") {
        vv_d result = mul_servise.multiply(2);
        REQUIRE(result == ans);
    }

    SECTION("With transpose") {
        mul_servise.get_first_matrix()->transpose();
        vv_d result = mul_servise.multiply(2);
        REQUIRE(result == ans);
    }
}

TEST_CASE("result correctness") {
    unsigned mat_size = 5;
    vv_d A(mat_size);
    vv_d B(mat_size);
    for (int i = 0; i < mat_size; ++i) {
        for (int j = 0; j < mat_size; ++j) {
            A[i].push_back(std::rand() % 100);
            B[i].push_back(std::rand() % 100);
        }
    }

    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(A), std::make_shared<Matrix>(B));

    vv_d oneThreadResult = mul_servise.multiply();
    vv_d twoThreadResult = mul_servise.multiply(2);

    SECTION("Without transpose") {
        REQUIRE(oneThreadResult == twoThreadResult);
    }

    mul_servise.get_first_matrix()->transpose();
    vv_d oneThreadResultTranspose = mul_servise.multiply(1);
    vv_d twoThreadResultTranspose = mul_servise.multiply(2);

    SECTION("With transpose") {
        REQUIRE(oneThreadResultTranspose == twoThreadResultTranspose);
    }

    SECTION("1 res == 2 res") {
        REQUIRE(twoThreadResultTranspose == oneThreadResult);
    }

    SECTION("first matrix transposed") {
        REQUIRE(mul_servise.get_first_matrix()->is_transposed());
    }

}
