#include <iostream>
using namespace std;
// #define PI 3.1416

int main()
{
    double basic, H, M, gross;
    cin >> basic;

    if (basic >= 10000)
    {
        H = basic * 0.2;
        M = basic * 0.5;
    }
    else if (basic > 10000 && basic <= 30000)
    {
        H = basic * 0.3;
        M = basic * 0.55;
    }
    else
    {
        H = basic * 0.35;
        M = basic * 0.6;
    }

    gross = basic + H + M;
    cout << gross;
    return 0;
}
