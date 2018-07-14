#define BENCHPRESS_CONFIG_MAIN

#include "matrix.h"
#include <iostream>
#include "benchpress/benchpress.hpp"


BENCHMARK("1 thread", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 1);
	}
});
BENCHMARK("1 thread, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 1);
	}
});
BENCHMARK("2 threads", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 2);
	}
});
BENCHMARK("2 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 2);
	}
});
BENCHMARK("3 threads", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 3);
	}
});
BENCHMARK("3 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 3);
	}
});
BENCHMARK("4 threads", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 4);
	}
});
BENCHMARK("4 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 4);
	}
});
BENCHMARK("5 threads", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 5);
	}
});
BENCHMARK("5 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 5);
	}
});
BENCHMARK("6 threads", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 6);
	}
});
BENCHMARK("6 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		A.Multiply(B, 6);
	}
});
BENCHMARK("7 threads", [](benchpress::context* ctx) {
	for (size_t i = 0; i < ctx->num_iterations(); ++i) {
		Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
		Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
		A.Multiply(B, 7);
	}
});
BENCHMARK("7 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    ctx-> reset_timer ();
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        A.Multiply(B, 7);
	}
});

BENCHMARK("8 threads", [](benchpress::context* ctx) {
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
        Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
        A.Multiply(B, 8);
    }
});
BENCHMARK("8 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    ctx-> reset_timer ();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        A.Multiply(B, 8);
    }
});

BENCHMARK("9 threads", [](benchpress::context* ctx) {
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
        Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
        A.Multiply(B, 9);
    }
});
BENCHMARK("9 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    ctx-> reset_timer ();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        A.Multiply(B, 9);
    }
});

BENCHMARK("10 threads", [](benchpress::context* ctx) {
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
        Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
        A.Multiply(B, 10);
    }
});
BENCHMARK("10 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    ctx-> reset_timer ();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        A.Multiply(B, 10);
    }
});

BENCHMARK("11 threads", [](benchpress::context* ctx) {
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
        Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
        A.Multiply(B, 11);
    }
});
BENCHMARK("11 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    ctx-> reset_timer ();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        A.Multiply(B, 11);
    }
});

BENCHMARK("12 threads", [](benchpress::context* ctx) {
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
        Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
        A.Multiply(B, 12);
    }
});
BENCHMARK("12 threads, with transpose", [](benchpress::context* ctx) {
    Multiplier A = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 4)));
    A.Transpose();
    ctx-> reset_timer ();
    Multiplier B = Multiplier(std::vector<std::vector<double>>(40, std::vector<double>(40, 18)));
    for (size_t i = 0; i < ctx->num_iterations(); ++i) {
        A.Multiply(B, 12);
    }
});