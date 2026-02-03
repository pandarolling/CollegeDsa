// sumofdigits.cpp

#include<iostream>
using namespace std;

int main(){
	int n;
	int sum =0;
	cin>>n;
	if (n < 0){
		n =-n;
	}
	while(n != 0){
		sum += n%10;
		n /= 10;
	}

	cout<<"Sum of num is : "<<sum<<endl;

	return 0;
}