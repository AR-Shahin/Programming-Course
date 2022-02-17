#include <iostream>
using namespace std;
// #define PI 3.1416

int main()
{
    float salary, house_rent, medical, technical, gross;

    cin >> salary;

    house_rent = salary * 0.3;
    medical = salary * 0.05;
    technical = 1000;
    gross = salary + house_rent + medical + technical;
    cout << "Gross Salary : " << gross;
    return 0;
}
