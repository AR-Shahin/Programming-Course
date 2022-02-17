#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    int number;
    cin >> number;

    // if (number % 2 == 0)
    // {
    //     cout << "Even";
    // }
    // else
    // {
    //     cout << "Odd";
    // }

    string r = number % 2 == 0 ? "Even" : "Odd";
    cout << r;
    return 0;
}
