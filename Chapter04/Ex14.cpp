#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <ctime>

class Player {
    string name;
public:
    Player() {}
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

class GamblingGame {
    int size;
    Player *p;
public:
    GamblingGame(int n) {
        size = n;
        p = new Player[n];
    }
    void run() {
        srand((unsigned)time(0));   

        string name1, name2;
        cout << "첫번째 선수 이름>>";
        cin >> name1;
        p[0].setName(name1);
        cout << "두번째 선수 이름>>";
        cin >> name2;
        p[1].setName(name2);
        cin.ignore();

        int i = 0;
        while(true) {
            if(i>=2) i = 0;
            cout << p[i].getName() << ":<Enter>";

            string enter;
            getline(cin, enter);

               int n1 = rand() % 3;
            int n2 = rand() % 3;
            int n3 = rand() % 3;


            cout << '\t' << n1 << '\t' << n2 << '\t' << n3;

            if(n1 == n2 && n2 == n3) {
                cout << '\t' << p[i].getName() << "님이 승리!!" << endl;
                break;
            }
            else {
                cout << '\t' << "아쉽군요!" << endl;
                i++;
            }
        }
    }
};

int main() {

    GamblingGame game(2);
    game.run();  

    return 0;
}