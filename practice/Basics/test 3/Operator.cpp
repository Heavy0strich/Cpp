#include <iostream>
#include <cmath>

using std :: cout;
using std :: cin;
using std :: endl;

int sum(int a, int b)
{
    return a + b;
}

float divi(int a, int b)
{
    return (float)a/b;
}

int prod(int a, int b)
{
    return a*b;
}

int remainder(int a, int b)
{
    int ans = a % b;
    return ans;
}

int main()
{
    int a, b, choice;
    
    cout<<"\n Enter two numbers:";
    cin>>a;
    cin>>b;

    cout<<"\n Select the operator(1/2/3/4)"<<endl;
    cin>>choice;


    if (choice == 1)
    {
        cout<<"\nSum is:"<<sum(a, b)<<endl;
    }
    else if (choice == 2)
    {
        cout<<"\nproduct is :"<<prod(a, b)<<endl;
    }

    else if (choice == 3)
    {
        cout<<"\nQuotient is:"<<divi(a, b)<<endl;
    }

     else if (choice == 4)
    {
        cout<<"\nRemainder is:"<<remainder(a, b)<<endl;
    }

    else{
        cout<<"Invalid choice!!\n Exiting....."<<endl;
    }

    
    
    return 0;

}