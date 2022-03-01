#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " * " << n << " = " << i * n << endl;
    }
    return 0;
}
