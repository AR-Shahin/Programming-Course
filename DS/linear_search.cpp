#include<iostream>
using namespace std;
int A[] = {10,50,40,30,5};
int n = 5;

int linear_search(int val){
    int index = -1;
    for(int i = 0;i<n;i++){
        if(A[i] == val){
            return i;
        }
    }

    return index;
}

int main()
{
    cout<<linear_search(500);
    return 0;
}