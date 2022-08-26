#include <iostream>             //libraries from which we use objects

// Method 1

//using namespace std;            // The header file has std scope from which we use cout/cin/getline/endl
// it is also not a good practice to import the whole std scope as it has a lot of objects or variables
// Not all of which are useful, instead we can use

// Method 2
using std :: cout;


int main()                      //main function, starting point of c++, int specifies the type of the data it returns
{
    cout<<"It's working great!\n";
    cout<<"Waiting for next week!\n";
    return 0;                    // since we are not returning any value
}