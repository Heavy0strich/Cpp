#include<iostream>
#include<climits>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int A[5];
	cout<<"Enter the elements of the array"<<endl;

	for(int i = 0; i < 5; i++){
		cin>>A[i];
	}

	cout<<"Max Element in the array:-"<<endl;

	//int max = A[0];
	// in c++ we have a default costant, INT_MIN, which is the smallest integer value possible, can initialise using this value. need to using <climits> header file
	int max = INT_MIN;
	for(int i = 1; i<5; i++){
		if(A[i] > max){
			max = A[i];
		}
	}
	cout<<max;
}
