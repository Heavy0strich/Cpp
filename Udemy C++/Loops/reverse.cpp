#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

    int num, dummy, sum = 0;

    cout<<"Enter a number"<<endl;
    cin>>num;
    while (num>0){
        dummy= num%10;
        num=num/ 10;
        sum= 10* sum + dummy;
    }

    cout<<"Reverse of the numeber is:"<<sum<<endl;

    return 0;

}