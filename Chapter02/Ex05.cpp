#include <iostream>
using namespace std;
#include <cstring>

int main() {

    cout << "문자들을 입력하라(100개 미만)." << endl;

    char str[100];
    cin.getline(str, 100);

    int num = 0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i] == 'x')
            num ++;
    }

    cout << "x의 개수는 " << num;

}