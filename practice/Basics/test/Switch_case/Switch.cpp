#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// switch case is a branch and control statement
int main(){
    int num;

    cout<<"Enter a number:"<<endl;
    cin>>num;
    switch(num){
        case 1: 
        {
            int a = 10;
            int b = 5;
            cout<<"addition is:"<<a + b<<endl;
            break;
        }
        case 2: 
        {
            int e = 15;
            int f = 3;
            cout<<"division:"<<e/f<<endl;
            break;
        }
        default : 
        {
            int c = 21;
            int d = 31;
            cout<<"multiplication:"<<c*d<<endl;
            break;
        }

    }
    return 0;

}