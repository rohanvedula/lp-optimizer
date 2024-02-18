#ifndef SIMPLEX.H
#define SIMPLEX.H

class LinearProgram;

class Simplex{
    private:
        LinearProgram* LP;
        int* basis;
    public:
        void newBasis();
        void canonicalForm();
};

#endif