#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int A[5] = {10, 12, 4};
    cout<<A[3]<<endl;   // Since there are no elements at index 3 and 4, it stores 0 at those location
    cout<<A;  //prints the address of the first element
    cout<<&A[0];    // value same as above
    return 0;
}