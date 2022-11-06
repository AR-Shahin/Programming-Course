#include<iostream>
using namespace std;
typedef struct Node{
    int data;
    Node *left,*right;
}node;

node *root;

void init(){
    root = 0;
}

node *create_node(){
    int x;
    node *newNode;
    newNode = new node;
    cout<<"Enter Node Value : (-1 for no Node) : ";
    cin>>x;
    if(x == -1){
        return 0;
    }else{
        newNode->data = x;
        cout<<"\nEnter Left Child of "<<x<< ", ";
        newNode->left = create_node();
        cout<<"\nEnter Right Child of "<<x<< ", ";
        newNode->right = create_node();
        return newNode;
    }
}

void preorder(node *root){
    if(root == 0){
        return;
    }else{
        cout<<root->data<< " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inOrder(node *root){
    if(root == 0){
        return;
    }else{
        inOrder(root->left);
        cout<<root->data<< " ";
        inOrder(root->right);
    }
}

void postOrder(node *root){
    if(root == 0){
        return;
    }else{
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<< " ";
    }
}
int main()
{
    init();
    root = create_node();
    cout<<endl;
    cout<<"Pre Order : ";
    preorder(root);
    cout<<endl;
    cout<<"In Order : ";
    inOrder(root);
    cout<<endl;
    cout<<"Post Order : ";
    postOrder(root);
    return 0;
}