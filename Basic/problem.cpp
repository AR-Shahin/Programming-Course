#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{

    float sum = 1, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    cout << "Sum = " << sum;
    return 0;
}
