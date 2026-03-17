#include <iostream>
using namespace std;

class CoffeeMachine {
    int c, w, s;
public:
    CoffeeMachine(int c, int w, int s) {
        this->c = c;
        this->w = w;
        this->s = s;
    }
    void drinkEspresso() { c--; w--; }
    void drinkAmericano() { c--; w-=2; }
    void drinkSugarCoffee() { c--; w-=2; s--; }
    void fill() { c=10; w=10; s=10; }
    void show() {
        cout << "커피 머신 상태, 커피:" << c << "\t" << "물:" << w
        << "\t" << "설탕:" << s << endl;
    }
};

int main() {

    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();

    return 0;
}