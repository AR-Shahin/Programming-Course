#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    int marks;
    cin >> marks;
    if (marks >= 80 && marks <= 100)
    {
        cout << "A+";
    }
    else if (marks >= 75 && marks <= 79)
    {
        cout << "A";
    }
    else if (marks >= 70 && marks <= 74)
    {
        cout << "A-";
    }
    else if (marks >= 65 && marks <= 69)
    {
        cout << "B+";
    }
    else if (marks >= 60 && marks <= 64)
    {
        cout << "B";
    }
    else if (marks >= 55 && marks <= 59)
    {
        cout << "B-";
    }
    else if (marks >= 50 && marks <= 54)
    {
        cout << "C+";
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "C";
    }
    else if (marks >= 40 && marks <= 44)
    {
        cout << "D";
    }
    else if (marks >= 0 && marks <= 99)
    {
        cout << "F";
    }
    return 0;
}
