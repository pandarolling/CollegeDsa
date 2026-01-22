#include<iostream>
using namespace std;
int main ()
{
    int m, n;
    cin>>m;
    n= (m+1)/2;
    
   
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1; j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }

        cout<<endl;
    } 
    for(int i=n-1;i>=1;i--){
        // spaces
        for(int j=1; j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }

        cout<<endl;
    } 
    
   return 0;
}