#include<iostream>

using namespace std;

int main(){
    float si, rate, time, prin;
    cout<<"Enter Principle , Rate , and Time for simple interest\n";
    cin>>prin>>rate>>time;
    si = (prin*rate*time)/100;
    cout<<"Output is "<<si<<"\n";
    return 0;
}