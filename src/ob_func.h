#ifndef OB_FUNC.H
#define OB_FUNC.H

class Matrix;

class ObjectiveFunc{
    private:
        Matrix* c;
        int z;
    public:
        ObjectiveFunc();
        ~ObjectiveFunc();

        void setOBJ();
        void getValue();
        void getComplete();
};

#endif