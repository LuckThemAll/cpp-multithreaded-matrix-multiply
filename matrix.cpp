#include <vector>
#include "matrix.h"

using std::vector;

vv_d MultiplyServise::multiply(unsigned threadsCount) const{
    vv_d result(_first_matrix->get_matrix().size(), v_d(_second_matrix->get_matrix()[0].size()));
    vector<std::future<void>> futures(threadsCount);
    unsigned size_of_part = _first_matrix->get_matrix().size() / threadsCount;
    for (int i = 0; i < threadsCount; i++) {
        int from = size_of_part * i;
        int to = size_of_part * (i + 1);
        to += (i == threadsCount - 1) ? _first_matrix->get_matrix().size() % threadsCount : 0;
        futures[i] = std::async(&MultiplyServise::raws_multiply, this,
                                from, to, std::ref(result), _first_matrix->is_transposed());
    }
    for (int i = 0; i < futures.size(); i++) {
        futures[i].get();
    }
    return result;
}

void MultiplyServise::raws_multiply(int firstRaw, int lastRaw, vector<vector<double>> &result, bool first_tranposed) const{
    for (int i = firstRaw; i < lastRaw; i++) {
        for (int j = 0; j < result[i].size(); j++) {
            for (int r = 0; r < _first_matrix->get_matrix()[0].size(); r++) {
                if (!first_tranposed) {
                    result[i][j] += _first_matrix->get_matrix()[i][r] * _second_matrix->get_matrix()[r][j];
                }
                else {
                    result[i][j] += _first_matrix->get_matrix()[r][i] * _second_matrix->get_matrix()[r][j];
                }
            }
        }
    }
}

void Matrix::transpose(){
    vector<vector<double>> transposed_matrix(_matrix.size(), vector<double>(_matrix[0].size()));
    for (int i = 0; i < _matrix.size(); i++) {
        for (int j = 0; j < _matrix[0].size(); j++) {
            transposed_matrix[i][j] = _matrix[j][i];
        }
    }
    _matrix = transposed_matrix;
    _transposed = !_transposed;
}