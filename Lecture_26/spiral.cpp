#include<iostream>
#include<vector>
using namespace std;

int main(){

	int r, c;
	cin>>r>>c;
	vector<vector<int>> a(r,vector<int>(c));
	
	for(int i =0; i <r; i++){
		for(int j = 0; j < c; j++){
			cin>>a[i][j];
		}
	}

	int left =0, right = c-1, top = 0, bottom= r-1;

	while(left <= right && top <= bottom){

		//left to right
		for(int i = left ; i<= right; i++){
			cout<<a[top][i]<<" ";
		}
		top++;
		//top to bottom
		for(int i =top; i <= bottom; i++){
			cout<<a[i][right]<<" ";
		}
		right--;

		if(left <= right){
			//right to left
			for(int i =right; i >=left ; i--){
				cout<<a[bottom][i]<<" ";
			}
			bottom--;
		}

		if(top <= bottom){
			//bottom to top
			for(int i=bottom; i >= top; i--){
				cout<<a[i][left]<<" ";
			}
			left++;
		}

	}

	return 0;
}