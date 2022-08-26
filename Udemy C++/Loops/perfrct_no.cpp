// if the sum of the factors =  double the number, then it is a perfect number
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num, sum = 0;

    cout<<"Enter a number"<<endl;
    cin>>num;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == 2 * num){
        printf("%d is a pefect number\n", num);
    }
    else{
        printf("%d is not a perfect number\n", num);
    }
    return 0;
}