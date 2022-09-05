#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float a, b, c,d,real;
    float r1,r2;

    cout<<"Roots of polynomial ax^2+bx+c:-\n";
    cout<<"Enter the coefficients: ";
    cin>>a>>b>>c;
    d = pow(b,2)-4*a*c;
    if (d < 1)
    {
        cout<<"Roots are imaginary:- \n";
        real = -b/(2*a);
        if (real == 0)
        {
            cout<<"Roots are: "<<sqrt(-d)/(2*a)<<"i"<<"\t"<< "-"<<sqrt(-d)/(2*a)<<"i";
        }
        else
        {
         cout<<"Roots are: "<< real<<"+"<<sqrt(-d)/(2*a)<<"i"<<"\t"<< real<<"-"<<sqrt(-d)/(2*a)<<"i";
        }
    }
    else
    {
        r1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        r2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"The Roots are "<<r1<<" & "<<r2;
    }

    return 0;
}
