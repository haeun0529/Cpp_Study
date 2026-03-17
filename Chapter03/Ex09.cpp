#include <iostream>
using namespace std;

class Oval {
    int w, h;
public:
    Oval() { w = 1; h = 1; }
    Oval(int w, int h) { this->w=w; this->h=h; }
    
    void set(int w, int h) { this->w = w; this->h = h; }
    void show() { cout << "width = " << w << ", height = " << h << endl; }
    int getWidth() { return w; }
    int getHeight() { return h; }
    ~Oval() { cout << "Oval 소멸 : width = " << w << ", height = " << h << endl; }
};

int main() {

    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;

    return 0;
}