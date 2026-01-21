#include<iostream>
using namespace std;

int main(){
int i,k,n;

cin>>n;

for(i =1; i<=n; i++){

for(k =1; k<= i; k++)
	cout<<"* ";

cout<<endl;

}
for(i =1; i<=n-1; i++){

for(k =1; k<= n-i; k++)
	cout<<"* ";

cout<<endl;

}
	return 0;
}