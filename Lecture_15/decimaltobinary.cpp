// decimaltobinary.cpp

#include <iostream>
using namespace std;


int bnum[100];
int top =-1;

void push(int num){
	top++;
	bnum[top] = num;
}

void pop(){
	cout<<bnum[top];
	top--;
}

int main(){

int n, bn =0;
cin>>n;


while (n >0 ){
	int ldigit = n%2;
	// bn = bn*10 +ldigit;
	n = n/2;
	push(ldigit);
}


while(top >= 0){
	pop();
}cout<<endl;

return 0;
}