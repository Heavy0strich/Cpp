/*
Code for checking whether the year is leap year or not
All years that are perfectly divisibe by 4 are leap years, except for century years
(ending with 00). They are leap year iff they are perfectly divisible by 400

Author: Aman Tiwary
Created: July 14, 2022
Course: Udemy, Learning C++
*/
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int year;
    cout<<"Enter a year:"<<endl;
    cin>>year;

    if( year % 100 == 0){
        if(year % 400 == 0){            // %100 is done to check whether its a century year
        cout<<"It's a Leap year!!"<<endl;
        }
        else{
            cout<<"Not a Leap Year!!"<<endl;
        }
    }
    else if(year % 4 == 0){
        cout<<"It's a Leap year!!"<<endl;
    }
    else{
        cout<<"Not a Leap year"<<endl;
    }
    return 0;
}