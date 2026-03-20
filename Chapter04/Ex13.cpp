#include <iostream>
using namespace std;
#include <locale>

class Histogram {
    string str;
public:
    Histogram(string str) { 
        this->str = str; 
        this->str += '\n';
    }
    void put(string str) {
        this->str.append(str);
    }
    void putc(char c) {
        str += c;
    }
    void print() {
        cout << str;
        cout << endl << endl;
        
        int num = 0;
        for(int i=0; i<str.length(); i++) {
            if(isalpha(str[i])) num++;
        }
        cout << "총 알파벳 수 " << num << endl << endl;

        string str2;
        for(int i=0; i<str.length(); i++)
            str2[i] = tolower(str[i]);

        int num2;
        for(int i=97; i<=122; i++) {
            num2 = 0;
            cout << (char)i;
            for(int j=0; j<str2.length(); j++) {
                if((char)i == str2[j]) num2++;
            }
            cout << "(" << num2 << ")" << '\t' << " : ";
            for(int j=0; j<num2; j++)
                cout << "*";
            cout << endl;
        }
    }
};

int main() {

    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();

    return 0;
}