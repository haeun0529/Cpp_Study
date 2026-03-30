#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

class Random
{
public:
    static void seed() { srand((unsigned)time(0)); }
    static int nextInt(int min = 0, int max = 32767)
    {
        int num = rand() % (max - min + 1) + min;
        return num;
    }
    static char nextAlphabet()
    {
        char ch;
        if (rand() % 2 == 0)
            ch = rand() % 26 + 'A';
        else
            ch = rand() % 26 + 'a';
        return ch;
    }
    static double nextDouble()
    {
        double dn = (double)rand() / RAND_MAX;
        return dn;
    }
};

int main()
{

    Random r;
    r.seed();
    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
    for (int i = 0; i < 10; i++)
        cout << r.nextInt(0, 100) << ' ';
    cout << endl;

    cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
    for (int i = 0; i < 10; i++)
        cout << r.nextAlphabet() << ' ';
    cout << endl;

    cout << "랜덤한 실수를 10개를 출력합니다" << endl;
    for (int i=0; i<10; i++) {
        cout << r.nextDouble() << ' ';
        if(i==4) cout << endl;
    }

    return 0;
}