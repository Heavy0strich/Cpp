#include<iostream>
using namespace std;

int main(){
	int i=0;
	for(; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(j >= i)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
