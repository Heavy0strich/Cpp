#include<iostream>
using namespace std;

int main(){
	int A[2][3] = {{2, 3, 5}, {6, 8, 10}};			//declaration and initialisation of 2d array

	int i = 0;
	for(;i < 2;){
		int j = 0;
		for(;j < 3;){
			cout<<A[i][j]<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
