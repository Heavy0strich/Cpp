#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int A[5] = {5, 10, 12, 3, 6};
	int search, found = 0 ;

	for(int i = 0; i < 5; i++){
		cout<<A[i]<<endl;
	}

	cout<<"Enter the element you want to find:"<<endl;

	cin>>search;

	for(int i = 0; i < 5; i++){
		if(A[i] == search){
			cout<<"element found at location"<<i + 1<<endl;
			found = 1;
		}
	}

	if(found == 0){
		cout<<"Element not present in the array"<<endl;
	}

}

