#include <iostream>
using namespace std;
#include <cstring>

int main() {

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

    char text[10000], txt[10000];
    cin.getline(text, 10000, ';');

    int num=0;
    for(int i=0; i<strlen(text); i++) {
        txt[i] = tolower(text[i]);
        if(isalpha(text[i])) num ++;
    }

    cout << "총 알파벳 수 " << num << endl;

    int n;
    for(int i=97; i<=122; i++) {
        n = 0;
        for(int j=0; j<strlen(txt); j++) {
            if((char)i == txt[j]) n++;
        }
        cout << (char)i << " (" << n << ")" << '\t' << " : ";
        for(int i=0; i<n; i++)
            cout << "*";
        cout << endl;
    }

    return 0;
}