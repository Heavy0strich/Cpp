#include <iostream>

using namespace std;

int main()
{
    const int a = 5;
    enum day {mon, tue, wed, thu, fri, sat, sun};           // assigning constant values to constant variable by creating a data type day
    int b = 6;
    b = a + b;
    //cout<<a<<endl<<b;
    cout<<day::sun<<endl;
    cout<<mon<<endl<<tue;
    return 0;
}

