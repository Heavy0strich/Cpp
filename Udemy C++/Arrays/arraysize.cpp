#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    
    float A [] = {2.5f, 3.9f, 9.3, 8, 7.0f};
    // Cannot wite float literal('f') in front of an integer, i.e., float a = 7f is not valid
    // will throw an error
    // Printing the elements of A, ':' operator is used instead of '=', when trying to print
    // each element of A
    for(auto x:A)
        cout<<x<<endl;  
}
