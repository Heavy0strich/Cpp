#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = &A[0];     // pointing to base address of A, i.e., 1st location of A

    cout<<*p<<endl; // will print A[0] = 2
    p++;            // moving the pointer to next location
    cout<<*p<<endl;
    p--;            // moving the pointer to previous location
    cout<<*p<<endl;

    cout<<p<<endl;
    cout<<p+2<<endl;    // will give address of the element after moving by 2, ie, address of A[2]


    for(int i =0; i<5;i++)
    {
        cout<<A[i]<<endl;
    }
    for(int i =0; i<5;i++)
    {
        cout<<i[A]<<endl;
    }

    for(int i =0; i<5;i++)
    {
        cout<<*(A+i)<<endl;     //* will give data, if cout<<(A+i) will print addresses
    }

    for(int i =0; i<5;i++)
    {
        cout<<(p+i)<<endl;      // will print addresses of the elements of A[]
    }

    for(int i =0; i<5;i++)
    {
        cout<<*(p+i)<<endl;     // will print data values
    }

    for(int i =0; i<5;i++)
    {
        cout<<p[i]<<endl;   //Pointer name can be used as array name
    }

    cout<<p[2]<<endl;       //pointer variable, pointing to array can be used as array name

    int *q = &A[4];
    cout<<q-p<<endl;        //will print the difference of address that the pointer variables are storing
    cout<<*p-*q<<endl;      // will print the data stored at the address


    return 0;
}
