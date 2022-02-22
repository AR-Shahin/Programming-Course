#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {

                continue;
            }
            cout << i * j << " ";
        }
        cout << "\n";
    }
    return 0;
}
