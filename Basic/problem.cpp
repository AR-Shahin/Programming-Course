#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{

    int n, rev = 0;
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << "Reverse : " << rev;
    return 0;
}
