// Stack
#include<iostream>
#define size 5
using namespace std;

int stack[size];
int top = 0;

void push(int val){
    if(top < size){
        stack[top] = val;
        top ++;
    }else{
        cout<<"Stack is Full!\n";
    }
}

void display(){
    cout<<endl;
    for(int i = top -1;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}

int pop(){
    int data = stack[top-1];
    top --;
    return data;
}

int peek(){
    return stack[top-1];
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    // display();
    // cout<<pop()<<endl;
    // cout<<pop()<<endl;
    // cout<<pop()<<endl;
    cout<<peek();
    return 0;
}