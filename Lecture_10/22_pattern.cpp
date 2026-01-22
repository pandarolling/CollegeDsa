#include<iostream>
using namespace std;
int main ()
{
    int n, j;
    cin>>n;
    
    
   
    for(int i=n; i>=1 ; i--){
        
        for( j =1 ; j<= i-1; j++){
        	cout<<"  ";
        }
        for( j=i; j<=n; j++){
        	if(j >9){
       			cout<<0<<" ";
        	}else{
            cout<<j<<" ";
        }
        } 
        for(j= n-1 ; j>=i; j--){
            cout<<j<<" ";
        }     
	
        cout<<endl;
    } 
    
   return 0;
}