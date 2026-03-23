#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {

    int a, b;
    cin >> a >> b;
    int big;
    
    cout << "큰 수는 : ";
    if(bigger(a, b, big)) cout << a;
    else cout << b;

    return 0;
}

bool bigger(int a, int b, int& big) {
    if(a >= b) {
        big = a;
        return true;
    }
    else {
        big = b;
        return false;
    }
}