#include<iostream>

using namespace std;

int main()
{
    string str;
    cout<<"May I know your name?";
    //cin>>str;                         // will only display letters before space
    getline(cin,str);                   // to assign full name to str variable display full name
    cout<<"Welcome Mr. "<<str;
    return 0;
}
