#include <iostream>
using namespace std;
// #define PI 3.1416

int main()
{
    int a, b, c, d, e;
    cin >> a; // 12345

    b = a % 10; // 12345 % 10 = 5
    a = a / 10; // 1234
    c = a % 10; // 1234 % 10 = 4
    a = a / 10; // 123
    d = a % 10; // 3
    a = a / 10; // 12
    e = a % 10; // 2
    a = a / 10; // 1

    cout << b << c << d << e << a;
    return 0;
}
