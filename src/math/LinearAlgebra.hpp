#ifndef LINEAR_ALGEBRA_HPP
#define LINEAR_ALGEBRA_HPP

#include <Eigen/Dense> // Inclua a biblioteca Eigen para operações de álgebra linear

class LinearAlgebra {
public:
    // Função para multiplicar duas matrizes
    static Eigen::MatrixXd multiply(const Eigen::MatrixXd& A, const Eigen::MatrixXd& B) {
        return A * B;
    }

    // Função para calcular o determinante de uma matriz
    static double determinant(const Eigen::MatrixXd& matrix) {
        return matrix.determinant();
    }

    // Função para calcular a inversa de uma matriz
    static Eigen::MatrixXd inverse(const Eigen::MatrixXd& matrix) {
        return matrix.inverse();
    }

    // Função para resolver um sistema de equações lineares Ax = b
    static Eigen::VectorXd solve(const Eigen::MatrixXd& A, const Eigen::VectorXd& b) {
        return A.colPivHouseholderQr().solve(b);
    }
};

#endif // LINEAR_ALGEBRA_HPP