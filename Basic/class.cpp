
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
    int arr[20];
    int id;
    cin >> id;
    // id => 456
    int i = 0;
    while (id != 0)
    {
        int rem = id % 10; // 6
        arr[i] = rem;
        i++;
        id = id / 10;
    }
    display(arr, i);
}
