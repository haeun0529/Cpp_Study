#include <iostream>
using namespace std;

char &find(char s[], char c, bool &success);

int main()
{

    char s[] = "Mike";
    bool b = false;
    char &loc = find(s, 'M', b);
    if (b == false)
    {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm';
    cout << s << endl;

    return 0;
}

char &find(char s[], char c, bool &success)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            success = true;
            return s[i];
        }
    }
    success = false;
    return s[0];
}