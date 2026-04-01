#include <iostream>
using namespace std;

class Stack {
    int *p;
    int top;
public:
    Stack() {
        p = new int[100];
        top = 0;
    }

    Stack& operator << (int n) {
        p[top++] = n;
        return *this;
    }

    void operator >> (int &n) {
        n = p[--top];
    }

    bool operator ! () {
        return top==0;
    }
};

int main() {

    Stack stack;
    stack << 3 << 5 << 10;
    while(true) {
        if(!stack) break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}