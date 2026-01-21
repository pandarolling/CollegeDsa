#include<iostream>
using namespace std;

int main(){
int i,j,n;
int rem;
cin>>n;

rem = (n+1)/2;
for(i =1; i<=rem; i++){ //n row

for(j=1; j<=n -i; j++){//outer space
	cout<<"  ";
}
	cout<<"* ";
	//inner space
	for(j = 1;j<= 2*i-3; j++)
		cout<<"  ";
	if(i != 1){
		cout<<"* ";

	}

cout<<endl;

}
for(i =rem; i>=1; i--){ //n row

for(j=1; j<=n -i; j++){//outer space
	cout<<"  ";
}
	cout<<"* ";
	//inner space
	for(j = 1;j<= 2*i-3; j++)
		cout<<"  ";
	if(i != 1)
	cout<<"* ";

cout<<endl;

}


	return 0;
}