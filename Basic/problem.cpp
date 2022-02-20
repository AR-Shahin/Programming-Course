#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    int year;
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "Leaf Year";
    }
    else
    {
        cout << "Not Leaf Year";
    }
    return 0;
}
