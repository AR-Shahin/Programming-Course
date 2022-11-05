#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}node;

node *head,*tail;

void init()
{
    head = tail = NULL;
}

void enqueue(int val){
    node *newNode;
    newNode = new node;
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    if(head == NULL){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int dequeue(){
    node *temp;
    temp = head;
    int data = temp->data;
    head = head->next;
    free(temp);
    return data;
}
void display(){
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }
}

int main()
{
    init();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    cout<<"\n";
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    // display();
    return 0;
}