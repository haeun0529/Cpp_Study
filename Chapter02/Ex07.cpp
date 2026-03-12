#include <iostream>
using namespace std;

int main() {

    char yes[4] = {'y', 'e', 's', '\0'};
    char input[100];

    while(true) {
        cout << "종료하고싶으면 yes를 입력하세요>>";
        cin.getline(input, 100);

        if(strcmp(yes, input) ==0) {
            cout << "종료합니다...";
            break;
        }
    }

    return 0;
}