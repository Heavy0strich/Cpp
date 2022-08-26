#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;

// In binary search, we need the array to be sorted
// you first compare the element in the middle and 
// then decide whether to search in the first half
// or the second half

int main(){
	int A[] = {2, 4, 5, 8, 10, 34, 46, 78, 98, 129};
	int start = 0, end = 9;	
	int mid = floor((start + end )/ 2);
	int key;

	cout<<"Enter the element you want to find:"<<endl;
	cin>>key;

	while(start <= end){
		if(A[mid] == key){
			cout<<"Element found at location: "<<mid + 1<<endl;
			break;
		}
		else if(A[mid] > key){
			end = mid - 1;
			mid = floor((start + end)/2);
		}
		else if(A[mid] < key){
			start = mid + 1;
			mid = floor((start + end)/2);
		}
	}

	if(start > end){
		cout<<"Search Unsuccessful, Element not found"<<endl;
	}
}


