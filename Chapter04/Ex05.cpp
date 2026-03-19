#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {

    string str;

    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;

    srand((unsigned)time(0));

    while(true) {
        cout << ">>";
        getline(cin, str, '\n');
        if(str == "exit")
            break;
        int index = rand() % str.length();

        char randA = rand() % (122 - 64 + 1) + 64;
        str[index] = randA;

        cout << str << endl;
    }

    return 0;
}