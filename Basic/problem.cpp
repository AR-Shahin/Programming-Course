#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return true;
        }

        return false;
    }
}
int main()
{

    int n = 11;
    if (isPrime(n))
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime!";
    }

    return 0;
}
