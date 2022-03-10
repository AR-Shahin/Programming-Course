#include <iostream>
using namespace std;
int c = 100;
void delails(string name, int age, string address = "Dhaka")
{
    cout << "Hello " << name << "!\n";
    cout << "Age " << age << "!\n";
    cout << "Address " << address << "!\n";
    cout << "--------------------\n";
}

int addTwoValue(int a, int b)
{
    return a + b;
}

void localAndGlobal(int a, int b)
{
    a = 100;
    b = 200;
    cout << c << endl;
}

void fibonacci(int n)
{
    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 0 << " " << 1;
    }
    else
    {
        int first = 0, second = 1;
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

typedef struct info
{
    string name;

    int roll;
} Info;
info x[] = {{"shain", 21}, {"omi", 5}};
int main()
{
    // string name = "Shahin";
    // cout << &name;
    // delails(name, 22, "Chandpur");
    // delails("Asik", 22, "Pabana");

    // int result = addTwoValue(10, 20);
    // cout << result;

    // int a = 10, b = 20;
    // localAndGlobal(a, b);
    // c = 500;
    // cout << c << endl;
    // cout << "A " << a << endl;
    // cout << "B " << b << endl;
    // fibonacci(8);
    cout << sizeof(x[1]);
    return 0;
}
