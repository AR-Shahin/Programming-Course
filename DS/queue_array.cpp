#include<iostream>
#define size 5
using namespace std;

int Queue[size];

int front,tail;

void initial(){
    front = tail = 0;
}

void enqueue(int val){
    if(tail < size){
        Queue[tail] = val;
        tail ++;
    }else{
        cout<<"Queue is Full\n";
    }
}

void display(){
    cout<<endl;
    for(int i = front;i<tail;i++){
        cout<<Queue[i] << " ";
    }
    cout<<endl;
}

int dequeue(){
    int data = Queue[front];
    front ++;
    return data;
}
int main()
{
    initial();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    display();
    enqueue(100);
 
    return 0;
}