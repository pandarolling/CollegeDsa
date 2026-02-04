#include<iostream>
using namespace std;

class timer{
protected:
int a;
public:
	void show(){
		cout<<"\nTime is : "<<a;

	}
	timer(int x){
		a  = x;
	}
	friend void addtime(timer &ob ,int y);
};

void addtime(timer &ob, int y){
	ob.a = ob.a+y;
}
int main(){

	timer t1(5);
	t1.show();
	addtime(t1,6);
	t1.show();


	return 0;

}