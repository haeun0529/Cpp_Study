#include <iostream>
using namespace std;
#include <cstring>

int main() {

    cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl;
    cout << ">>";

    int num = 1, maxlength=0;
    char name[100], max_name[100];
    for(int i=0; i<5; i++) {
       cin.getline(name, 100, ';');
       cout << num << " : " << name << endl;

       int l = strlen(name);
       if(l >= maxlength) {
            maxlength = l;
            strcpy(max_name, name);
       }
       num++;
    }
    cout << "가장 긴 이름은 " << max_name;

    return 0;
}