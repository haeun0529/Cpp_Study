#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius) {
        this->radius = radius;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {

    int n;
    cout << "원의 개수 >> ";
    cin >> n;

    Circle *circles = new Circle[n];

    int r;
    int num = 0;
    for(int i=0; i<n; i++) {
        cout << "원 " << i+1 << "의 반지름 >> ";
        cin >> r;
        circles[i].setRadius(r);

        if(circles[i].getArea() >= 100) num++;
    }

    cout << "면적이 100보다 큰 원은 " << num << "개 입니다";

    return 0;
}