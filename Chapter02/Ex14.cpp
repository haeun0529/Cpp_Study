#include <iostream>
using namespace std;

int main () {

    cout << "에소프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

    int sum = 0;
    char name[100];
    int n;

    while(true) {
        cout << "주문>> ";
        cin >> name >> n;
        if(strcmp(name, "에소프레소") == 0) {
            cout << 2000*n << "원입니다. 맛있게 드세요" << endl; 
            sum += 2000*n;
        }
        else if(strcmp(name, "카푸치노") == 0) {
            cout << 2500*n << "원입니다. 맛있게 드세요" << endl;
            sum += 2500*n;
        }
        else if(strcmp(name, "아메리카노") == 0) {
            cout << 2300*n << "원입니다. 맛있게 드세요" << endl;
            sum += 2300*n;
        }
        
        if(sum >= 20000) {
            cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
            break;
        }
    }

    return 0;
}