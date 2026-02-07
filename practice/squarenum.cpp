// squarenum.cpp


/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/
#include<iostream>
using namespace std;

int main(){

	int n ;
	cin>>n;

	for(int i =1; i <= n ; i++){ 				
		
		for(int j =1 ; j <= i; j++){
			cout<<n-j+1<<" ";
		}


		for(int j =1 ; j <=2*(n-i) -1; j++ ){
			cout<<n-i+1<<" ";
		}

		for(int j =i ; j >= 1; j--){
			if(n-j+1 != 1)
			cout<<n-j+1<<" ";
		}
		

		cout<<endl;
	}

	for(int i =n -1; i >= 1 ; i--){ 				
		
		for(int j =1 ; j <= i; j++){
			cout<<n-j+1<<" ";
		}


		for(int j =1 ; j <=2*(n-i) -1; j++ ){
			cout<<n-i+1<<" ";
		}

		for(int j =i ; j >= 1; j--){
			if(n-j+1 != 1)
			cout<<n-j+1<<" ";
		}
		

		cout<<endl;
	}
	
	return 0;
}