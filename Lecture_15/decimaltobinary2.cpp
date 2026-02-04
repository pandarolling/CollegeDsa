// decimaltobinary2.cpp

#include <iostream>
using namespace std;


int reverse(int n){
	int rev = 0;
	while(n != 0){
		rev = (rev*10) + n%10;
		n /= 10;
	}
	return rev;

}
int main(){
	int n ;
	cin>>n;

	int bn = 1;
	while(n > 0){
		bn = (bn*10) + n%2;
		n /=2;

	}
	cout<<reverse(bn)/10<<endl;

}