#include<iostream>
using namespace std;

int main(){
	int A[2][3] = {{2, 5, 10}};
	for(auto& x:A){				// has to be referenced, since x will be the row of A, and have to use the type auto
						// because using int&x will give and error, as row of the array is not an integer
		for(int y:x){			// here we can use usual for each, i.e., without auto and reference
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}
