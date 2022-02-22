#include <iostream>
using namespace std;
// #define PI 3.1416

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        cout << "Alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Digit";
    }
    else
    {
        cout << "Special Character!";
    }

    return 0;
}
