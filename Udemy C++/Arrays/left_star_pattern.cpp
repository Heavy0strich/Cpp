#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	for(int i = 0; i <  5; i++){
		for(int j = 0; j < 5; j++){
			if(i >= j)
				cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
