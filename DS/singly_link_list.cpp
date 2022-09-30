#include<iostream>
#include<stdlib.h>
// - >
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *head;
int count = 0;

void initial(){
    head = 0;
}

void insertLast(int val){
    node *newNode;

    newNode = new node;

    newNode->data = val;
    newNode->next = head;
    head = newNode;
    count ++;
}

void insertFirst(int val){
    if(head == 0){
        insertLast(val);
    }else{
        node *newNode,*temp;

        newNode = new node;
        newNode->data = val;
        newNode->next = 0;
        temp = head;

        while(temp->next != 0){
            temp = temp->next;
        }
        temp->next = newNode;
        count ++;
    }
}
void display(){
    if(head == 0){
        cout<<"empty\n";
    }else{
        node *temp;
        temp = head;
        while (temp != 0)
        {
            cout<<temp->data << " ";
            temp = temp->next;
        }
        cout<<"\n";
    }
}

void deleteFirstNode(){
    if(head == 0){
        cout<<"empty list";
    }else{
        node *temp;
        temp = head;
        head = head->next;

        free(temp);
    }
}

void deleteLastNode(){
    if(head == 0){
        cout<<"empty list";
    }else{
        node *temp,*prev;
        temp = head;
        while (temp->next != 0)
        {
            prev = temp;
            temp = temp->next;
        }
        if(head == temp){
            head = 0;
        }
        else{
            prev->next = 0;
        }

        free(temp);
    }
}

node *getNodeByValue(int val){
    node *temp;

    temp = head;

    while (temp->next != 0)
    {
        if(temp->data == val){
            return temp;
        }
        temp = temp->next;
    }

}
int main()
{
    initial();
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
     display();
    // deleteLastNode();
    // display();
    node *abc = getNodeByValue(20);
    cout<<abc->data;
    return 0;
}
