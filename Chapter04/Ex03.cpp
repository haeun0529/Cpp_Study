#include <iostream>
using namespace std;

int main() {

    string str;
    cout << "문자열 입력>> ";
    getline(cin, str, '\n');

    int num = 0;
    for(int i=0; i<str.length(); i++) {
        if('a' == str.at(i)) num ++;
    }

    cout << "문자 a는 " << num << "개 있습니다.";

    return 0;
}