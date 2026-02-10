#include<iostream>
using namespace std;

int main(){
	int arr [5];
	int size = sizeof(arr)/sizeof(int);
	int ele;
	int pos =-1;


	cout<<"\nEnter elements of array : \n";
	for(int i =0; i < size ; i++){
		cin>>arr[i];
	}

	cout<<"Enter the element you want : ";
	cin>>ele;

	for(int i = 0; i < size; i++){
		if(arr[i] == ele){
			pos = i+1;
		}
	}

	if(pos < 0){
		cout<<"the element is not present"<<endl;

	}else
		cout<<"the element is at :"<<pos<<endl;
	return 0;

}