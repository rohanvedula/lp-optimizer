#ifndef MATRIX.H
#define MATRIX.H

class Matrix{
    private:
        int rows;
        int cols;
        int* matrix;
    public:
        Matrix(int r, int c);
        Matrix(const Matrix& m);
        ~Matrix();

        void setMatrix();
        void printMatrix();

        Matrix operator*(const Matrix& other) const;
        Matrix operator+(const Matrix& other) const;
        Matrix operator=(const Matrix& other) const;

        Matrix inverse();
};

#endif