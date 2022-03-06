#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{

    int n;
    n = 5;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        int star = 2 * i - 1;

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
