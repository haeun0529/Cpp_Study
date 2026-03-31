#include <iostream>
using namespace std;

class Matrix {
    int n1, n2, n3, n4;
public:
    Matrix() { n1=n2=n3=n4=0; }
    Matrix(int n1, int n2, int n3, int n4) {
        this->n1 = n1;
        this->n2 = n2;
        this->n3 = n3;
        this->n4 = n4;
    }
    void show() { 
        cout << "Matrix = { " << n1 << " " << n2 << " " << n3 << " " << n4 << " } " << endl; 
    }
    Matrix operator + (Matrix m) {
        Matrix res;
        res.n1 = this->n1 + m.n1;
        res.n2 = this->n2 + m.n2;
        res.n3 = this->n3 + m.n3;
        res.n4 = this->n4 + m.n4;
        return res;
    }

    Matrix operator += (Matrix m) {
        this->n1 += m.n1;
        this->n2 += m.n2;
        this->n3 += m.n3;
        this->n4 += m.n4;
        return *this;
    }

    bool operator == (Matrix m) {
        if(this->n1==m.n1 && this->n2==m.n2 &&
        this->n3==m.n3 && this->n4==m.n4) return true;
        return false;
    }
};

int main() {

    Matrix a(1,2,3,4), b(2,3,4,5), c;
    c = a + b;
    a += b;
    a.show(); b.show(); c.show();
    if(a == c)
        cout << "a and c are the same" << endl;

    return 0;
}