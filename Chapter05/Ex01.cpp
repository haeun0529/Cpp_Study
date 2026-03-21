#include <iostream>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle() { name = ""; radius = 0; }
    Circle(string name, int radius) {
        this->name = name;
        this->radius = radius;
    }
    void show() {
        cout << "name : " << name << ", radius = " << radius << endl;
    }
};

void swap(Circle &c1, Circle &c2);

int main() {

    Circle *c1 = new Circle("1", 3);
    Circle *c2 = new Circle("2", 4);

    c1->show();
    c2->show();

    swap(*c1, *c2);
    cout << "교환 후" << endl;

    c1->show();
    c2->show();

    return 0;
}

void swap(Circle &c1, Circle &c2) {
    Circle temp = c1;
    c1 = c2;
    c2 = temp;
}