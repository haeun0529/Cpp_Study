#include <iostream>
using namespace std;

class SortedArray {
    int size;
    int *p;
    void sort() {
        for(int i=0; i<size; i++) {
            for(int j=0; j<size; j++) {
                if(p[i] <= p[j]) {
                    int temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
    }
public:
    SortedArray() {
        p = nullptr;
        size = 0;
    }

    SortedArray(SortedArray& src) {
        size = src.size;
        p = new int[size];
        for(int i=0; i<size; i++) p[i] = src.p[i];
    }
    
    SortedArray(int p[], int size) {
        this->size = size;
        this->p = new int[size];
        for(int i=0; i<size; i++) this->p[i] = p[i];
        sort();
    }

    ~SortedArray() { delete [] p; }

    SortedArray operator + (SortedArray& op2) {
        SortedArray temp;
        temp.size = this->size + op2.size;
        temp.p = new int[temp.size];

        for(int i=0; i<this->size; i++) temp.p[i] = this->p[i];

        for(int i=0; i<op2.size; i++) temp.p[this->size+i] = op2.p[i];
        
        temp.sort();
        return temp;
    }

    SortedArray& operator = (const SortedArray& op2) {
        delete [] p;
        
        size = op2.size;
        p = new int[size];

        for(int i=0; i<size; i++) p[i] = op2.p[i];

        return *this;
    }

    void show() {
        cout << "배열 출력 : ";
        for(int i=0; i<size; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    int n[] = {2, 20, 6};
    int m[] = {10, 7, 8, 30};
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;

    a.show();
    b.show();
    c.show();

    return 0;
}