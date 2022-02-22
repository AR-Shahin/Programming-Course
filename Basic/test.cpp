#include <iostream>
using namespace std;
// #define PI 3.1416

int main()
{

    int a, b;
    char op;
    cin >> a >> b;
    cin >> op;
    int result;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    }
    cout << result;
    return 0;
}
