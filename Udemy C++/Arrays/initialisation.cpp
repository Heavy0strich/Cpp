#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int A[5];

	cout<<"Printing the Elements of an empty array"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<A[i]<<endl;
	}
// Will print random numbers, since we haven't initialised the array initializing the array

// Not assigning the size of the array, will automatically allocate memmory depending on the number of elements in the array
	
	int B[] = {1, 2, 3, 4, 5};	

	cout<<"Printing the initialised array"<<endl;

	for(int i = 0; i < 5; i++){		// i declared inside for loop is only valid in the scope of for loop
						// need to re declare i inside a new for loop
		cout<<B[i]<<endl;
	}

	int C[6] = {3, 4};

	cout<<"Here the rest of the elements will be zero"<<endl;

	for(auto x:C)
		cout<<x<<endl;

	return 0;
}
