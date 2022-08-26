#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){

    float m1, m2, m3, Total, Avg;

    cout<<"Enter marks in the three subjects:"<<endl;
    cin>>m1>>m2>>m3;

    Total = m1 + m2 + m3;

    Avg = Total / 3.0;

    if (Avg >= 60)
        cout<<"Grade = A"<<endl;
    else if (Avg >= 35 && Avg < 60)
        cout<<"Grade = B"<<endl;
    else
        cout<<"Grade = C"<<endl;

    return 0;
    

}