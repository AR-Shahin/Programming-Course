// Circular Queue

#include<iostream>
using namespace std;
#define size 5

int queue[size];

int front,rear;

void initial(){
    front = rear = -1;
}

void enqueue(int val){
    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = val;
    }
    else if((rear + 1) % size == front){
        cout<<"Queue is full!";
    }
    else{
        rear = (rear + 1) % size;
        queue[rear] = val;
    }
}

void display(){
    if(front == -1 && rear == -1){
        cout<<"Queue is Empty!";
    }
    else{
        int i = front;
        while (i != rear)
        {
            cout<<queue[i]<< " "; 
            i = (i+1) % size;
        }
        cout<<queue[rear];
    }
}

int dequeue(){
    int data = -1111;
    if(front == -1 && rear == -1){
        cout<<"Queue is Empty!";
    }
    else if(front == rear){
        data = queue[front];
        front = rear = -1;
    }else{
        data = queue[front];
        front = (front + 1) % size;
    }

    return data;
}

int main(){
    initial();
  
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    // enqueue(60);
      display();
      cout<<endl;
    cout<<dequeue()<<endl;
    display();
      cout<<endl;
    cout<<dequeue()<<endl;
  display();
      cout<<endl;
      enqueue(100);
        display();
      cout<<endl;

    return 0;
}
