#include<iostream>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    
   
    for(int i=m;i>=1;i--){
        //outer spaces
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        //inner space
        for(int j=1; j<=(2*(m-i))-1;j++){
            cout<<"  ";
        }
        for(int j=1; j<=i && j!=m; j++){
            cout<<"* ";
        }
        cout<<endl;
    } 
   return 0;
}