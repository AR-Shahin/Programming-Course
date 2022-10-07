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
int lengthOfList(){
    return count;
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

void insertSpecificPosition(int val,int pos){
    if(pos == 0){
        cout<<"Position can't be zero!";
    }
    else if(pos == 1){
        insertFirst(val);
    }
    else if(lengthOfList() < pos){
        cout<<"Invalid Position!!";
    }else{
        int index = 1;
        node *temp,*newNode;

        temp = head;
        while (index < pos - 1)
        {
            temp = temp->next;
            index ++;
        }
        newNode = new node;
        newNode->data = val;
        newNode->next = temp->next;
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
    count --;
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
    count --;
        free(temp);
    }
}

void deleteSpecificPosition(int pos){
    if(head == 0){
        cout<<"empty list!";
    }
    else if(pos == 1){
        deleteFirstNode();
    }
    else if(lengthOfList() < pos){
        cout<<"Invalid Position!!";
    }
    else{
        int index = 1;
        node *temp,*prevNode,*nextNode;
        temp = head;

        while(index < pos -1){
            temp = temp->next;
            index ++;
        }
        prevNode = temp;
        nextNode = prevNode->next;
        temp->next = nextNode->next;
        free(nextNode);
        count --;
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

int getMaximumValue(){
    int max = INT_MIN;
    node *temp;
    temp = head;
    while(temp != 0){
        if(max < temp->data){
            max = temp->data;
        }
        temp = temp->next;
    }

    return max;
}

// Reverse the link list
void reverse(){
    node *prev = NULL;
    node *current = head;
    node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
int main()
{
    initial();
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    display();
    reverse();
    display();

    // deleteSpecificPosition(3);
    // insertSpecificPosition(500,2);
    // display();
    // cout<<getMaximumValue();
    // cout<<lengthOfList();
    return 0;
}
