// Program to find prime number

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num, i = 2, isprime = 0;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    for(;i<num; i++){
        if(num % i == 0){
            isprime = 1;
            break;
        }
    }
    if (isprime == 1){
        printf("%d is not a prime number \n", num);
    }
    else{
        printf("%d is a prime number \n", num);
    }
}