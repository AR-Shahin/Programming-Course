#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1){
        return 1;
    }

    return n * fact(n-1);
}

void fun(int *a,int *b){
   // int temp ;
    *a = 100;
    *b = 200;
}

typedef struct User
{
    string name;
    int roll;
}user;


int main(){
    // cout<<fact(5);
//    int a = 10;
//    int b = 20;
//    fun(&a,&b);
//    cout<<"a = " <<a<<endl;
//    cout<<"b = " <<b<<endl;

// double a = 10;
// float b = 20;
// cout<<sizeof(a)<<endl;
// cout<<sizeof(b);

    // int a = 10;
    // user *u1,u2;
    // u1 = new user;
    // u1->name = "Shahin";
    // u1.name = "Shahin";
    // u1.roll = 10;

    // user[1] = {{ "name" : "shahin","roll" :20 }};
    // cout<<u1->name;
    return 0;
}