#include<iostream>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    
   
    for(int i=1;i<=m;i++){
        // spaces
        for(int j=1; j<=i-1;j++){
            cout<<"    ";
        }
        for(int j=1; j<=m-i+1; j++){
            cout<<"* ";
        }

        cout<<endl;
    } 
    for(int i=m-1;i>=1;i--){
        // spaces
        for(int j=1; j<=i-1;j++){
            cout<<"    ";
        }
        for(int j=1; j<=m-i+1; j++){

            cout<<"* ";
        }

        cout<<endl;
    } 
   return 0;
}