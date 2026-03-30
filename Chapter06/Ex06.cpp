#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
    static int* concat(int s1[], int s2[], int size) {
        int* arr = new int[size*2];
        for(int i=0; i<size; i++) {
            arr[i] = s1[i];
        }
        for(int i=size; i<size*2; i++) {
            arr[i] = s2[i-size];
        }
        return arr;
    }

    static int* remove(int s1[], int s2[], int size, int & retsize) {
        int num = 0;
        for(int i=0; i<size; i++) {
            bool found = false;
            for(int j=0; j<size; j++) {
                if(s1[i] == s2[j]) {
                    found = true;
                    break;
                }
            }
            if(!found) num++;
        }
        retsize = num;
        int *arr = new int[retsize];

        bool flag;
        int index=0;
        for(int i=0; i<size; i++) {
            flag = false;
            for(int j=0; j<size; j++) {
                if(s1[i] == s2[j]) {
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                arr[index] = s1[i];
                index++;
            }
        }
        return arr;
    }
};

int main() {

    int x[5], y[5];
    cout << "정수 5개를 입력하라. 배열 x에 삽입한다>>";
    for(int i=0; i<5; i++) cin >> x[i];

    cout << "정수 5개를 입력하라. 배열 y에 삽입한다>>";
    for(int i=0; i<5; i++) cin >> y[i];

    cout << "합친 정수 배열을 출력한다." << endl;
    int *z;
    z = ArrayUtility2::concat(x, y, 5);
    for(int i=0; i<10; i++) cout << z[i] << ' ';
    cout << endl;

    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 ";
    int n;
    int *arr;
    arr = ArrayUtility2::remove(x, y, 5, n);
    cout << n << endl;
    for(int i=0; i<n; i++) cout << arr[i] << ' ';

    return 0;
}