#include <iostream>
using namespace std;
#include <string>

class Date {
    int y, m, d;

public:
    Date(int year, int month, int day) {
        y = year;
        m = month;
        d = day;
    }
    Date(string str) {
        y = stoi(str);
        m = stoi(str.substr(5, 1));
        d = stoi(str.substr(7, 2));
    }
    void show() {
        cout << y << "년" << m << "월" << d << "일" << endl;
    }
    int getYear() { return y; }
    int getMonth() { return m; }
    int getDay() { return d; }
};

int main() {

    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}