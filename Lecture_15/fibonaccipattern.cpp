// fibonaccipattern.cpp
#include <iostream>
using namespace std;

int fibo(int n){
	if(n ==0 || n ==1){
		return n;
	}else{
		return fibo(n-1) + fibo(n-2);
	}
}

int main(){

int n;
cin>>n;
int g =0;

for(int i= 1; i <= n; i++){
	for(int j =1; j <= i; j++){
	cout<<fibo(g)<<" ";
	g++;
	}
	cout<<endl;
}





return 0;
}