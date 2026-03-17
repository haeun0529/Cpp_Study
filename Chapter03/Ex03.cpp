#include <iostream>
using namespace std;
#include <string>

class Account {
    int id, money;
    string name;
public:
    Account(string n, int i, int m) {
        name = n;
        id = i;
        money = m;
    }
    void deposit(int m) { money += m; }
    string getOwner() { return name; }
    int inquiry() { return money; }
    int withdraw(int m) { 
        money -= m; 
        return money;
    }
};

int main() {

    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    return 0;
}