#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int count = 1;
	for(int i = 0; i<5; i++){
		for(int j = 0; j < 5; j++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}

