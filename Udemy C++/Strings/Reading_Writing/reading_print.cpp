// How to read a string from keyboard
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){

    int method;
    cout<<"Enter method"<<endl;
    cin>>method;

    if(method == 1){
        char s;         // Declaring a character array of size twenty,including the null character

        cout<<"Enter name"<<endl;
        cin>>s;

        cout<<"Entered name is:"<<endl;
        cout<<s<<endl;
    }
    else if (method == 2){
        char s[20];         // Declaring a character array of size twenty,including the null character

        cout<<"Enter name"<<endl;
        cin>>s;

        cout<<"Entered name is:"<<endl;
        cout<<s<<endl;
    }
    else{
        char s[30] = "Hello, how are you?";         // Declaring a character array of size twenty,including the null character

        cout<<s<<endl;
    }

    return 0;
}