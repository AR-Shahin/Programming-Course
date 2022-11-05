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

void push(int val){
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

int pop(){
    node *temp;
    temp = tail;
    int data = temp->data;
    tail = tail->prev;
    free(temp);
    return data;
}
void display(){
    node *temp;
    temp = tail;
    while (temp != NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->prev;
    }
}

int main()
{
    init();
    push(10);
    push(20);
    push(30);
    push(40);
    cout<<"\n";
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    // display();
    return 0;
}