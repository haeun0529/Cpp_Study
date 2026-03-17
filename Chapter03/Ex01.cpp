#include <iostream>
using namespace std;

class Tower {
    int h;

public:
    Tower() { h = 1; }
    Tower(int height) { h = height; }
    int getHeight() { return h; }
};

int main() {

    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

    return 0;
}