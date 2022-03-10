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

int fact(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

bool isStrong(int n)
{
    int temp = n;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + fact(rem);
        n = n / 10;
    }

    if (temp == sum)
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

    cout << isStrong(145);
    return 0;
}
