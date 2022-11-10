#include<iostream>
using namespace std;
int A[] = {5,10,15,20,25,30,35};
int n = 7;

int binary_search(int val){
    int left,right,mid,index = -1;
    left = 0;
    right = n - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;

        if(A[mid] == val){
            return mid;
        }
        else if(A[mid] < val){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    
    return index;  
}

int main()
{
    cout<<binary_search(250);
    return 0;
}