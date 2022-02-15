#include <iostream>
using namespace std;
#define PI 3.1416
int main()
{
    float r;
    float area;
    cout << "Enter Radius : ";
    cin >> r;
    area = PI * (r * r);
    cout << "Area of Circle " << area;

    return 0;
}
