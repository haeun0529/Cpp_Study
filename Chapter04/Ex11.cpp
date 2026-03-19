#include <iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }
    void fill() { size = 10; }
    void consume() { 
        if(size>0) size--; 
        else cout << "원료가 부족합니다." << endl;
    }
    int getSize() { return size; }
};

class CoffeeVendingMachine {
    Container tong[3]; // 0:커피, 1:물, 2:설탕
    void fill() {
        for(int i=0; i<3; i++)
            tong[i].fill();
    }
    void selectEspresso() {
        tong[0].consume();
        tong[1].consume();
    }
    void selectAmericano() {
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
    }
    void selectSugarCoffee() {
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
        tong[2].consume();
    }
    void show() {
        cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
    }
public:
    void run() {
        cout << "***** 커피자판기를 작동합니다. *****" << endl;
        int menu;
        while(true) {
            cout << "메뉴를 눌러주세요(1:에소프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
            cin >> menu;
            if(menu == 1) {
                cout << "에소프레소 드세요" << endl;
                selectEspresso();
            }
            else if(menu == 2) {
                cout << "아메리카노 드세요" << endl;
                selectAmericano();
            }
            else if(menu == 3) {
                cout << "설탕커피 드세요" << endl;
                selectSugarCoffee();
            }
            else if(menu == 4) {
                show();
            }
            else if(menu == 5) {
                fill();
            }
        }
    }
};

int main() {

    CoffeeVendingMachine cm;
    cm.run();

    return 0;
}