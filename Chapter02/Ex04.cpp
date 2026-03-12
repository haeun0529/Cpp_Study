#include <iostream>
using namespace std;

int main() {

    cout << "5개의 실수를 입력하라 >> ";

    double num[5];
    for(int i=0; i<5; i++) cin >> num[i];

    double max = -99;
    for(int i=0; i<5; i++) {
        if(num[i] >= max) max = num[i];
    }

    cout << "제일 큰 수 = " << max;

    return 0;
}