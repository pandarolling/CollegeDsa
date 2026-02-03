#include<iostream>
using namespace std;

int main(){
	int n;
	int rev =0, flag =0;
	cin>>n;

	while(n != 0){
		if(n%10 == '-'){
			flag++;
			n /= 10;
			continue;
		}
		rev *= 10;
		rev += n%10;
		n /= 10;
	}

	

	if(flag != 0){
		rev = -rev;
	}
		cout<<"Reversed num is : "<<rev<<endl;

	return 0;
}