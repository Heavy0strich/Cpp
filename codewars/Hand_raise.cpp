// Author  : Aman Tiwary
// Codewars: Hands up
// Date    : 07/06/2022
// Time    : 23:41

#include<iostream>
#include<array>

//using namespace :: std;       Not Recommended to use the whole library
using std::cout;
using std::cin;
using std:: endl;
using persons_t = std :: array<int, 3>;

persons_t get_positions(int n){
    persons_t hand = {0, 0, 0};
    for(int i = 0; i < n + 1; i++){
        hand[0] += 1;
        if (i % 3 == 0){
            hand[0] = 0;
            hand[1] += 1;
        }
        if(i % 9 == 0){
            hand[1] = 0;
            hand[2] += 1; 
        }
        if (i % 27 == 0){
            hand[2] = 0;
        }
    }
    return hand;
}

persons_t method_b(int n){
    persons_t arr = {0, 0, 0};
    if ((n+1) % 3 == 0){
        arr[0] = 2;
    }
    else if ((n+1) % 3 == 1){
        arr[0] = 0;
    }
    else{
        arr[0] = 1; 
    }

    if((n+1) % 9 <= 3 && (n+1) % 9 != 0){
        arr[1] = 0;
    }
    else if ((n+1) % 9 > 6 || (n+1) % 9 == 0){
        arr[1] = 2;
    }
    else{
        arr[1] = 1;
    }

    if ((n+1) % 27 == 0 || (n+1) % 27 > 18){
        arr[2] = 2;
    }
    else if((n+1) % 27 <=9 && (n+1) % 27 != 0){
        arr[2] = 0;
    }
    else{
        arr[2] = 1;
    }

    return arr;
}

int main(){
    int steps;
    persons_t arr, arr_b;
    cout<<"Enter the number of steps:"<<endl;
    cin>>steps;
    arr = get_positions(steps);
    arr_b = method_b(steps);
    cout<<"The status fom method 1 is:"<<endl;
    for(int i = 0; i < 3; i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"The status fom method 2 is:"<<endl;
    for(int i = 0; i < 3; i++){
        cout<<arr_b[i];
    }

}