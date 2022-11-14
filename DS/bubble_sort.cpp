#include<iostream>
using namespace std;
#define n 5
int A[n] = {1,5,0,4,7};

void display(){
    for(int i = 0;i<n;i++){
        cout<<A[i] << " ";
    }
}

void bubble_sort(){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(A[i] < A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
int main()
{
    display();
    cout<<endl;
    bubble_sort();
    cout<<endl;
    display();

    return 0;
}