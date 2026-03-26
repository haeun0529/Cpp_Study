#include <iostream>
using namespace std;

class MyVector {
    int *mem;
    int size;
public:
    MyVector(int n=100, int val=0) {
        mem = new int[n];
        size = n;
        for(int i=0; i<n; i++) mem[i] = val;
    }
    void show() { 
        for(int i=0; i<size; i++) cout << mem[i] << ' ';
        cout << endl;
    }
    ~MyVector() { delete [] mem; }
};

int main() {

    MyVector v1(10);
    MyVector v2(10, 2);

    v1.show();
    v2.show();

    return 0;
}