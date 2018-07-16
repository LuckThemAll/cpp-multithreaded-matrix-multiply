#define PICOBENCH_IMPLEMENT_WITH_MAIN

#define MATRIX_SIZE 100
#define ITERATIONS_COUNT 1000
#include "matrix.h"
#include <iostream>
#include "picobench/picobench.hpp"

static void thread1(picobench::state &s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply();
}
PICOBENCH(thread1).iterations({ITERATIONS_COUNT});

static void thread2(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(2);
}
PICOBENCH(thread2).iterations({ITERATIONS_COUNT});

static void thread3(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(3);
}
PICOBENCH(thread3).iterations({ITERATIONS_COUNT});

static void thread4(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(4);
}
PICOBENCH(thread4).iterations({ITERATIONS_COUNT});

static void thread5(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(5);
}
PICOBENCH(thread5).iterations({ITERATIONS_COUNT});

static void thread6(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(6);
}
PICOBENCH(thread6).iterations({ITERATIONS_COUNT});

static void thread7(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(7);
}
PICOBENCH(thread7).iterations({ITERATIONS_COUNT});

static void thread8(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(8);
}
PICOBENCH(thread8).iterations({ITERATIONS_COUNT});

static void thread9(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(9);
}
PICOBENCH(thread9).iterations({ITERATIONS_COUNT});

static void thread10(picobench::state& s)
{
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 4))),
                                                  std::make_shared<Matrix>(std::vector<std::vector<double>>(MATRIX_SIZE, std::vector<double>(MATRIX_SIZE, 18))));
    mul_servise.get_first_matrix()->transpose();
    picobench::scope scope(s);
    for (int i=0; i<s.iterations(); ++i)
        auto m = mul_servise.multiply(10);
}
PICOBENCH(thread10).iterations({ITERATIONS_COUNT});