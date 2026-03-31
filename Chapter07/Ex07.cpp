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

    int* operator >> (int x[]) {
        x[0] = this->n1;
        x[1] = this->n2;
        x[2] = this->n3;
        x[3] = this->n4;
        return x;
    }

    Matrix operator << (int y[]) {
        this->n1 = y[0];
        this->n2 = y[1];
        this->n3 = y[2];
        this->n4 = y[3];
        return *this;
    }
};

int main() {

    Matrix a(4,3,2,1), b;
    int x[4], y[4] = {1,2,3,4};
    a >> x;
    b << y;

    for(int i=0; i<4; i++) cout << x[i] << ' ';
    cout << endl;
    b.show();

    return 0;
}