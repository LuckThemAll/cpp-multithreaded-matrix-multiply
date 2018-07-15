#define BENCHPRESS_CONFIG_MAIN

#include "matrix.h"
#include <iostream>
#include "benchpress/benchpress.hpp"

BENCHMARK("1 thread", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply();
	}
});

BENCHMARK("1 thread, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    mul_servise.get_first_matrix()->transpose();
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply();
	}
});
BENCHMARK("2 threads", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(2);
	}
});
BENCHMARK("2 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(2);
	}
});
BENCHMARK("3 threads", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(3);
	}
});
BENCHMARK("3 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(3);
	}
});
BENCHMARK("4 threads", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(4);
	}
});
BENCHMARK("4 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(4);
	}
});
BENCHMARK("5 threads", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(5);
	}
});
BENCHMARK("5 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(5);
	}
});
BENCHMARK("6 threads", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(6);
	}
});
BENCHMARK("6 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(6);
	}
});
BENCHMARK("7 threads", [](benchpress::context* ctx) {
	MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
												  std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		mul_servise.multiply(7);
	}
});
BENCHMARK("7 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(7);
	}
});

BENCHMARK("8 threads", [](benchpress::context* ctx) {

	MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
																		   std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(8);
    }
});
BENCHMARK("8 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(8);
    }
});

BENCHMARK("9 threads", [](benchpress::context* ctx) {

	MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
																		   std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(9);
    }
});
BENCHMARK("9 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(9);
    }
});

BENCHMARK("10 threads", [](benchpress::context* ctx) {

	MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
																		   std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(10);
    }
});
BENCHMARK("10 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(10);
    }
});

BENCHMARK("11 threads", [](benchpress::context* ctx) {
	MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
																		   std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(11);
    }
});

BENCHMARK("11 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(11);
    }
});

BENCHMARK("12 threads", [](benchpress::context* ctx) {

	MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
																		   std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(12);
    }
});

BENCHMARK("12 threads, with transpose", [](benchpress::context* ctx) {
    MultiplyServise mul_servise = MultiplyServise(std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 4))),
                                                                           std::make_shared<Matrix>(std::vector<std::vector<double>>(100, std::vector<double>(100, 18))));
	mul_servise.get_first_matrix()->transpose();

    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        mul_servise.multiply(12);
    }
});