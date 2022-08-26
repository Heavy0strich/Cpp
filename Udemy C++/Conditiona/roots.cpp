#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){

    float a, b, c, d, r_1, r_2;

    cout<<"Enter the coefficients of quadratic equation:"<<endl;
    cin>>a;
    cin>>b; 
    cin>>c;

    // Finding the nature of the roots by evaluating d = b^2 - 4ac

    d = pow(b, 2) - 4 * a * c;

    if (d == 0){
        cout<<"Roots are real and equal"<<endl;
    }
    else if(d < 0){
        cout<<"Roots are imaginary"<<endl;
    }
    else if(d > 0){
        cout<<"Roots are real and unequal"<<endl;
    }
    return 0;
}