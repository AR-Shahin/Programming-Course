#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{

    int n, sum = 0;
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }

    cout << "Sum of Digit : " << sum;
    return 0;
}
