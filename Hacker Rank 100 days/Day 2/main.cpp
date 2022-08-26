#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    string str;
    double e;
    cin>>a;
    cin>>e;
    //cin>>str;
    cin.ignore();           //flushing the input buffer. the \n character from the previous cin statement goes and remains
                            //there in and is read as the next input statement discards everything in the input stream including the newline.
    getline(cin,str);
    //b = i + a;
    cout<< i+a<<"\n";
    f = d + e;
    cout<<fixed<<setprecision(1)<<f<<"\n";
    cout<<s<<str;

    return 0;
}
