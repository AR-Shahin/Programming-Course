#include<iostream>
#define size 5
using namespace std;

int arr[size];
int n = 0;

void insert(int val){
    if(n == size){
        cout<<"Full"<<endl;
    }else{
        arr[n] = val;
        n ++;
        cout<<"data inserted!"<<endl;
    }
}

void display(){
    if(n == 0){
        cout<<"Empty"<<endl;
    }else{

    for(int i = 0;i<n;i++){
        cout<<arr[i] << " ";
    }
    }
}

int search(int val){
     for(int i = 0;i<n;i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

void delete_data(int val){
     for(int i = 0;i<n;i++){
        if(arr[i] == val){
            arr[i] = -111;
            n--;
        }
    }
}

void update(int oldValue, int newValue){
    int index = search(oldValue);
    arr[index] = newValue;
}

int main(){
    display();
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    display();
  
    update(30,60);
    cout<<endl;
    display();
    //cout<<search(20);
    return 0;
}