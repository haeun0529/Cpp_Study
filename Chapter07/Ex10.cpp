#include <iostream>
using namespace std;

class Statistics {
    int *p;
    int size;
public:
    Statistics() {
        size = 0;
        p = nullptr;
    }

    bool operator ! () {
        if(size == 0) return true;
        return false;
    }

    Statistics& operator << (int x) {
        int* temp = new int[size+1];
        for(int i=0; i<size; i++) temp[i] = p[i];
        temp[size] = x;
        delete[] p;
        p = temp;
        size++;
        return *this;
    }

    void operator ~ () {
        for(int i=0; i<size; i++) cout << p[i] << ' ';
        cout << endl;
    }

    void operator >> (int& x) {
        int sum=0;
        for(int i=0; i<size; i++) sum += p[i];
        x = sum/size;
    }
};

int main() {

    Statistics stat;
    if(!stat) cout << "현재 통계 데이타가 없습니다." << endl;

    int x[5];
    cout << "5 개의 정수를 입력하라>>";
    for(int i=0; i<5; i++) cin >> x[i];

    for(int i=0; i<5; i++) stat << x[i];
    stat << 100 << 200;
    ~stat;

    int avg;
    stat >> avg;
    cout << "avg=" << avg << endl;

    return 0;
}