// vector.cpp

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector <int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	cout<<a.size()<<endl;

	// cout<<a.capacity()<<endl;
	
	// a.pop_back();

	// cout<<a.front()<<endl;
	// cout<<a.back()<<endl;

	for(int i =0; i< a.size(); i++){
		cout<<a[i]<<" ";
	}

	a.insert(a.begin() +1, 234);
	cout<<endl;

		for(int i =0; i< a.size(); i++){
		cout<<a[i]<<" ";
	}

	sort(a.begin(), a.end());

	reverse(a.begin(), a.end());

		for(int i =0; i< a.size(); i++){
		cout<<a[i]<<" ";
	}

	return 0;
}