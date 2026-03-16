#include <iostream>
using namespace std;

int main() {

    int n1, n2;
    char op[10];

    while(true) {
        cout << "? ";
        cin >> n1 >> op >> n2;

        if(strcmp(op, "+") == 0) 
            cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
        else if(strcmp(op, "-") == 0)
            cout << n1 << " - " << n2 << " = " << n1-n2 << endl;
        else if(strcmp(op, "*") == 0)
            cout << n1 << " * " << n2 << " = " << n1*n2 << endl;
        else if(strcmp(op, "/") == 0)
            cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
        else if(strcmp(op, "%") == 0)
            cout << n1 << " % " << n2 << " = " << n1%n2 << endl;
    }

    return 0;
}