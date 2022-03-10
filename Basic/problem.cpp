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

bool isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // fibonacci(8);

    cout << isPerfect(5);
    return 0;
}
