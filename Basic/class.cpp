
#include <iostream>
using namespace std;

void display(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    display(arr, 5);
    int brr[] = {10,
                 20,
                 30,
                 40,
                 50};
}
