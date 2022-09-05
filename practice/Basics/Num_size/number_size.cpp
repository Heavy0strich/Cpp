// This code is to find the number of digits in a number and storing them individually in an array
// Author: Aman Tiwary
// Date: 06 / 18 / 2022

#include <iostream>
using namespace std;

int size(int num)
{
    int count = 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    int ans ;

    int dummy = num;

    while (dummy > 0)
    {
        ans = dummy % 10;
        dummy = dummy / 10;
        count += 1;
    }

    return count;
}
// unable to return array from a function, geting some error, need to check it.

/*
int* arr_num(int num, int len)
{
    int arr[len];
    int dummy = num;
    int ans;
    for(int i = 0; i < len; i++)
    {
        arr[len - 1- i] = dummy % 10;
        dummy = dummy/10;
    }
    cout<<arr;

    return arr;
}*/

int main()
{
    int num, len;

    cout<<"Enter a number: "<<endl;
    cin>>num;

    len = size(num);

    cout<<"Number of Characters are: "<<len<<endl;
    
    int arr[len];
    int dummy = num;
    int ans;
    for(int i = 0; i < len; i++)
    {
        arr[len - 1- i] = dummy % 10;
        dummy = dummy/10;
    }
    
    cout<<"Printing Individual Characters:"<<endl;
    for(int i = 0; i<len; i++)
    {
        cout<< arr[i]<<endl;
    }

    return 0;
}