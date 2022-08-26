#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num, i;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    printf("Factors of %d \n", num);
    i = 1;

    while(i <= num/2){
        if (num % i == 0){
            cout<<i<<endl;
        }
        i++;
    }
}