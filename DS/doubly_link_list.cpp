#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}node;

node *head,*tail;
int count = 0;

void init(){
    head = NULL;
}

int lengthOfList(){
    return count;
}

void insertFirst(int val){
    node *newNode;
    newNode = new node;
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    count ++;
}

void insertLast(int val){
    if(head == NULL){
        insertFirst(val);
    }else{
        node *newNode;
        newNode = new node;
        newNode->data = val;
        tail->next = newNode;
        newNode->next = NULL;
        newNode->prev = tail;
        tail = newNode;
        count ++;
    }
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
void reverseDisplay(){
    node *temp;
    temp = tail;
    while (temp != NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->prev;
    }
}

void deleteFirst()
{
    node *temp;
    temp = head;
    head = head->next;
    free(temp);
    count --;
}

void deleteLast(){
    if(head == tail){
        deleteFirst();
    }else{
        node *temp;
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
        count --;
    }
}


int main()
{
    init();
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    display();
    // insertLast(500);
    // cout<<lengthOfList();
    deleteFirst();
    cout<<endl;
    display();

    return 0;
}