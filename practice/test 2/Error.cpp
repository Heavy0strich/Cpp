#include <iostream>
/*
int main()
{
    int a = 5;
    int a = 10;

    int a = 30;

    return a;
}*/

// the above main function will throw a redeclaration of int a error as we are assigning a to multiple values
// This confuses the compiler as it won't understand what value to take.
// When we need to define multiple values for a variable for different cases we use the below method

using std::cout;

namespace A 
{
    int a = 5;
    int b = 10 * a;
}

namespace B
{
    int a = 10;
    int b = a;
}

int main()
{
    cout<<"\nValue of a defined in scope A:\t"<<A::a;
    cout<<"\nValue of a defined in scope B:\t"<<B::a;
    cout<<"\n";
}