#include<iostream>
using namespace std;

int main(){
int n, m;
cin>>n;
m= n*2;

for(int i = 1; i<= n; i++){
	int temp= i;
	for(int j =1; j<=i; j++){
		cout<<temp<<" ";
		temp= m - temp;
	}

	for(int j= 1; j <= 2*(n-i); j++){
		cout<<"  ";
	}

	for(int j =1; j<=i; j++){
		cout<<temp<<" ";
		temp= m - temp;
	}

	cout<<endl;
}
for(int i = n-1; i>= 1; i--){
	int temp= i;
	for(int j =1; j<=i; j++){
		cout<<temp<<" ";
		temp= m - temp;
	}

	for(int j= 1; j <= 2*(n-i); j++){
		cout<<"  ";
	}

	for(int j =1; j<=i; j++){
		cout<<temp<<" ";
		temp= m - temp;
	}

	cout<<endl;
}


	return 0;

}