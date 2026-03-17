#include <iostream>
using namespace std;

class Integer {
    int i;
public:
    Integer(int i) {
        this->i = i;
    }
    Integer(string str) {
        this->i = stoi(str);
    }
    int get() { return i; }
    void set(int i) { this->i = i; }
    int isEven() {
        if(i%2==0) return 1;
        else return 0;
    }
};

int main() {

    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();

    return 0;
}