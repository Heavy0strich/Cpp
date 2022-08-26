#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;

    cout<<"Enter a number:"<<endl;
    cin>>num;
    
    cout<<"Using post Increment:"<<endl;
    
    for(int i = 0; i <= num; i++){
        cout<<i<<endl;
    }

    cout<<"Using pre Increment:"<<endl;

    for(int j = 0; j <= num; ++j){
        cout<<j<<endl;
    }
    return 0;
}
/*
Since the updation occurs after the process executes, and initialization, condition and updation
are three statements, thus once the compiler goes reads the updation, it doesn't matter if you use
pre increment or post increment, hence the result using both the updation method will be same,
as it will update the value of the variable before checking the condtion again.
*/