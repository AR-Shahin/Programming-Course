#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
