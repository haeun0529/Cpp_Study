#include <iostream>
using namespace std;

class BaseMemory {
    char *mem;
public:
    BaseMemory() { mem=nullptr; }
    BaseMemory(int size) { mem = new char[size]; }
    void put(int size, char *x) {
        for(int i=0; i<size; i++)
            mem[i] = x[i];
    }
    char read(int size) {
        return mem[size];
    }

    void put2(int index, int n) {
        mem[index] = n;
    }
};

class ROM : public BaseMemory {
    int s;
public:
    ROM(int s, char x[], int size) : BaseMemory(s) {
        put(size, x);
    }
};

class RAM : public BaseMemory {
    int s;
public:
    RAM(int s) : BaseMemory(s) { }

    void write(int n, char ch) { put2(n, ch); }

    char read(int n) { return BaseMemory::read(n); }
};

int main() {

    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    ROM biosROM(1024*10, x, 5);
    RAM mainMemory(1024*1024);

    for(int i=0; i<5; i++) mainMemory.write(i, biosROM.read(i));
    for(int i=0; i<5; i++) cout << mainMemory.read(i);

    return 0;
}