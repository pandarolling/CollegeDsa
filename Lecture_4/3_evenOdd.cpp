#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(num%2 ==0){
        cout<<"\nEven number";
    }else
        cout<<"\nOdd number";

    return 0;
}