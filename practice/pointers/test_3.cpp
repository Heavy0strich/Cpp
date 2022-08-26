#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a = 5;
    int i = 6;
    cout<<a<<endl;
    printf("a = %d\n", a);  // use printf for output formatting
    cout<<++a<<endl;        // increments before the operation is done, increases a by one and then prints
    cout<<a++<<endl;        // a ++ increments after the operation is done
    cout<<a<<endl;

    if(a > 10 || ++i < 10){

    }
    printf("i = %d \n", i);

    // declaration inside the conditional statement
    if (int k = 12; k > a){
        printf("k = %d \n", k);

        return 0;
    }
    // after the block, the variable k will no longer be allocated memory in stack

}