#include "matrix.h"
#include <iostream>

Matrix::Matrix(int r, int c): rows{r}, cols{c}, matrix{nullptr}{
    this->matrix = new int[r * c];
}

Matrix::Matrix(const Matrix& m): rows{m.rows}, cols{m.cols}, matrix{m.matrix}{}

Matrix::~Matrix(){
    delete matrix;
}

void Matrix::setMatrix(){
    int currRow = 0;
    int currCol = 0;

    for(int i = 0; i<rows*cols; i++){
        std::cin >> matrix[currCol + currRow*rows];
        currCol += 1;
        currRow += currCol/cols;
        currCol %= cols;
    }
}