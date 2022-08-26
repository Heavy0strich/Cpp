#include<iostream>
using namespace std;

int main(){
    int num, i = 0;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    int sum = 0;
    while(i <= num){
        sum += i;
        i++;
    }

    printf("The sum of first %d numbers is %d \n", num, sum);
    return 0;
}