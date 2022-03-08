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

int main()
{
    // string name = "Shahin";
    // cout << &name;
    // delails(name, 22, "Chandpur");
    // delails("Asik", 22, "Pabana");

    // int result = addTwoValue(10, 20);
    // cout << result;

    int a = 10, b = 20;
    localAndGlobal(a, b);
    c = 500;
    cout << c << endl;
    cout << "A " << a << endl;
    cout << "B " << b << endl;
    return 0;
}
