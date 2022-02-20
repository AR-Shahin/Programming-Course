#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    int number;
    cin >> number;

    if (number > 0)
    {
        cout << "Positive!";
    }
    else if (number < 0)
    {
        cout << "Negative!";
    }
    else
    {
        cout << "Zero!";
    }
    return 0;
}
