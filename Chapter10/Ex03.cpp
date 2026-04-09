#include <iostream>
using namespace std;

template <class T>
void reverseArray(T *x, int size) {
    T *temp = new int[size];
    for(int i=0, j=size-1; i<size && j>=0; i++, j--) {
        temp[j] = x[i];
    }
    for(int i=0; i<size; i++) x[i] = temp[i];
    delete [] temp;
}

int main() {

    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for(int i=0; i<5; i++) cout << x[i] << ' ';

    return 0;
}