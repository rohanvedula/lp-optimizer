#ifndef LP.H
#define LP.H

class ObjectiveFunc;
class Matrix;
class Simplex;

class LinearProgram{
    private:
        ObjectiveFunc* obj;
        Matrix* A;
        Matrix* b;
    public:
        LinearProgram();
        ~LinearProgram();

        void setLP();
        void checkSolution();
        void getValue();
    friend class Simplex;
};

#endif