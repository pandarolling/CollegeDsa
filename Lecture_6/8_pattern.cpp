#include<iostream>
using namespace std;

int main(){

int i, j, k;
int n;
cout<<"Enter a n";
cin>>n;

for(i =1; i<=n; i++){

	for(k=1 ; k<=i-1; k++){
		cout<<"    ";
	}

	for(j = 1; j<=n-i+1; j++){
		cout<<"* ";
	}
	cout<<endl;
}
return 0;
}