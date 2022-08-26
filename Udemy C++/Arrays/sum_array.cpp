#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main(){
	int A[5], sum = 0;
	cout<<"Enter the Elements of array"<<endl;

	for(int i = 0; i < 5; i++){
		cin>>A[i];
	}

	cout<<"Sum of Elements of the array is:-"<<endl;

	for(auto x:A){
		sum += x;
	}
	cout<<sum<<endl;
}
