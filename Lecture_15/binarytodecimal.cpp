// binarytodecimal.cpp

// decimaltobinary2.cpp

#include <iostream>
#include<cmath>
using namespace std;


int todecimal(int n){

	int sum = 0;
	int g=0;
	while(n != 0){
		int ldig = n%10;

		sum += ldig* pow(2,g);
		g++;
		n /= 10;
	}
	return sum;

}
int main(){
	int n ;
	cin>>n;

	int dec = todecimal(n);
	cout<<dec<<endl;

}