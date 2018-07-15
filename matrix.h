#include <utility>
#include <vector>
#include <thread>
#include <future>
#include <memory>
using std::vector;

typedef vector<double> v_d;
typedef vector<v_d> vv_d;



class Matrix {
public:
    explicit Matrix(vv_d input) : _matrix(std::move(input)), _transposed(false) {};
    Matrix() : _matrix(vv_d(0, v_d(0))), _transposed(false) {};

    vv_d get_matrix() const { return _matrix; }
    bool is_transposed() const { return _transposed; }
    void transpose();
private:
    vv_d _matrix;
    bool _transposed;
};

class MultiplyServise {
public:
    MultiplyServise(std::shared_ptr<Matrix> first_matrix, std::shared_ptr<Matrix> second_matrix, bool first_transposed = false)
            : _first_matrix(std::move(first_matrix)), _second_matrix(std::move(second_matrix)) {}

    void raws_multiply(int firstRaw, int lastRaw, vv_d &result, bool first_transposed = false) const;
    vv_d multiply(unsigned threadsCount = 1) const;
    std::shared_ptr<Matrix> get_first_matrix() const { return _first_matrix; }
    std::shared_ptr<Matrix> get_second_matrix() const { return _second_matrix; }

private:
    std::shared_ptr<Matrix> _first_matrix, _second_matrix;
};



