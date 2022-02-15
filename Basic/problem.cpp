#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    int a, b;
    cin >> a >> b;

    int temp;
    temp = a; // a er data
    a = b;    // b er data
    b = temp; // a er data

    cout << "A = " << a << " B = " << b;
    return 0;
}
