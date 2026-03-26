#include <iostream>
using namespace std;

int big(int a, int b);
int big(int a, int b, int c);

int main() {

    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;

    return 0;
}

int big(int a, int b) {
    if(a > b && a < 100) return a;
    else if(a > b && a > 100) return 100;
    else if(b > a && b < 100) return b;
    else if(b > a && b > 100) return 100;
}

int big(int a, int b, int c) {
    if(a > b && a > c) return c;
    else if(a > b && a < c) return a;
    else if(b > a && b > c) return c;
    else if(b > a && b < c) return b;
}