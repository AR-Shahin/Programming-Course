#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int first = 0, second = 1;
    if (n == 1)
    {
        cout << first;
    }
    else if (n == 2)
    {
        cout << first << " " << second << " ";
    }
    else
    {
        cout << first << " " << second << " ";

        for (int i = 1; i <= n - 2; i++)
        {
            int fibo = first + second;
            cout << fibo << " ";
            first = second;
            second = fibo;
        }
    }
}

int main()
{
    fibonacci(8);
    return 0;
}
