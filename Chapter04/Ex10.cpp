#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person() { }
    Person(string name) { this->name = name; }
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

class Family {
    string name;
    Person *p;
    int size;
public:
    Family(string name, int size) {
        this->size = size;
        p = new Person[size];
        this->name = name;
    }
    void setName(int num, string name) {
        for(int i=0; i<3; i++) {
            p[num].setName(name);
        }
    }
    void show() {
        cout << name << "가족은 다음과 같이 3명 입니다." << endl;
        for(int i=0; i<size; i++) {
            cout << p[i].getName() << '\t';
        }
    }
    ~Family() {
        delete [] p;
    }
};

int main() {

    Family* simpson = new Family("Simpson", 3);
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;

    return 0;
}