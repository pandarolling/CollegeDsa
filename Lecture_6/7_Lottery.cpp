#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter a n: ";
cin>>n;

if(n >= 300 && n <= 460){
	cout<<"You've won a MacBook\n";
	if(n >= 300 && n <= 380){
	cout<<"Model: M1 Mac\n";
	}else{
	cout<<"Model: M2 Mac\n";
	}
}

else if(n >= 200 && n <= 280){
	cout<<"You've won a pack of Kurkure\n";
	if(n >= 200 && n <= 280){
	cout<<"Flavor: Chilli Kurkure\n";
	}else{
	cout<<"Flavor: Onion Kurkure\n";
	}
}

else if(n >= 1100 && n <= 1500){
	cout<<"You've won a Cycle\n";
	if(n >= 1100 && n <= 1300){
	cout<<"Brand: Avon Cycle\n";
	}else{
	cout<<"Brand: Hero Cycle\n";
	}
}

else if(n >= 50 && n <= 80){
	cout<<"You've won a Bike\n";
	if(n >= 50 && n <= 65){
	cout<<"Model: Bullet\n";
	}else{
	cout<<"Model: Rajdoot\n";
	}
	
}

else
	cout<<"Better luck next time\n";

return 0;
}