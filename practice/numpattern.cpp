/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/
#include<iostream>
using namespace std;

int main(){

	int n ;
	cin>>n;

	for(int i =1; i <= n ; i++){ 				//prints num of rows
		int out = i;             				//output int
		for(int j =1; j <= n -i; j++){			//spaces
			cout<<"  ";
		}

		for(int j = 1; j <=i; j++){				//i times printing out++
			cout<<out++<<" ";
		}
		out = 2*i -1;							//out made odd (1,3,5,7,..)
		for(int j = i-1; j >=1 ; j--){			
			cout<<--out<<" ";
		}

		cout<<endl;
	}
	return 0;
}