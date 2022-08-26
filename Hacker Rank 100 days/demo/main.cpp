#include <iostream>
// OVERFLOW

using namespace std;

int main()
{
    char x = 128;
    x++;
    cout<<(int)x;
    return 10;
}

