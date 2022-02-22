#include <iostream>
using namespace std;
// #define PI 3.1416

int main()
{

    int month;
    cin >> month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << 31;
        break;
    case 2:
        cout << 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << 30;
        break;
    default:
        cout << "Invalid Input!";
        return 0;
    }
}
