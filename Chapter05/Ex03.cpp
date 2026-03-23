#include <iostream>
using namespace std;

void combine(string &t1, string &t2, string &t3);

int main() {

    string text1("I love you"), text2("very much");
    string text3;
    combine(text1, text2, text3);
    cout << text3;

    return 0;
}

void combine(string &t1, string &t2, string &t3) {
    t1.append(" ");
    t3 = t1.append(t2);
}