#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}



int main(){
	int a = 5;
	int b = 30;
	cout<<gcd(b,a);

	return 0;

}