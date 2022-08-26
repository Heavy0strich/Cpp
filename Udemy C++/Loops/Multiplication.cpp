#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    cout<<"Multiplication table for:"<<num<<endl;

    for(int i = 1; i <= 10; i++){
        //cout<<"%d x %d = %d"<<num<<i<<num*i;      This does not work for output formatting in c++
        printf("%d x %d = %d \n", num, i, num*i);   // Use this for output formatting
    }
    return 0;
}