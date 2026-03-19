#include <iostream>
using namespace std;

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

        string newStr = "";
        for(int i=str.length()-1; i>=0; i--) {
            newStr += str[i];
        }

        cout << newStr << endl;
    }

    return 0;
}