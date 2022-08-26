#include<iostream>
using namespace std;

int main(){
	int A[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}} ;
	int B[3][3] = {{3, 0, 0}, {0, 3, 0}, {0, 0, 3}} ;
	int C[3][3];
	int D[3][3];
	int M[3][3];
	int sum;

	cout<<"Matrix Addition:-"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			C[i][j] = A[i][j] + B[i][j];
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Matrix Subtraction:-"<<endl;	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			D[i][j] = A[i][j] - B[i][j];
			cout<<D[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Matrix Multiplication:-"<<endl;
	for(int i = 0; i < 3; i++){			// Rows of A
		for(int j = 0; j < 3; j++){		// Columns of B = Rows of A
			sum = 0;
			for(int k = 0; k < 3; k++){	// Rows of B
				sum = sum + A[i][k] * B[k][j];
			}	
			M[i][j] = sum;
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}

}       		
        		
        		
        		
