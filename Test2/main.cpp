#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int height;
    int base ;
    float area;
    cout<<"Enter the height of the triangle: ";
    cin>>height;
    cout<<"Enter the base of the triangle: ";
    cin>>base;
    area = base*height/2;
    cout<<"The area of the triangle is: "<<area;
    return 0;
}
