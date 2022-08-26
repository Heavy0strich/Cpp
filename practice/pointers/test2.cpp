#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int x = 10;
    int &y = x;             // this is refrencing. i.e., both x and y have the same memory.

    x++;
    cout<<"x"<<x;
    cout<<"y"<<y;

    y++;
    cout<<"y"<<y;
    cout<<"x"<<x;

    x = 25;         // now both x and y will reference 25
    x++;
    y++;
    cout<<"x"<<x;
    cout<<"y"<<y;
    return 0;
}