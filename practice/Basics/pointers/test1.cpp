#include<iostream>
using std:: cout;
using std::cin;
using std::endl;

int main(){
    int a = 100;
    // Two methods of initialising a pointer
    // method 1: int *p = &a; this is declaration and initialization in same step
    // method 2: int *p;
    // p = &a;

    int *p = &a;
    int *q;   // This is declaration
    
    q = &a; // This is initialisation
    cout<<"a"<<a<<endl;
    cout<<"&a"<<&a<<endl;
    *p = *p + 1;
    cout<<"p"<<p<<endl;
    cout<<"*p"<<*p<<endl;
    cout<<"a"<<a;

    return 0;
}