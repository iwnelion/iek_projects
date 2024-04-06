#include <iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"gimme a num: ";
	cin>>x;
	cout<<endl<<"gimme another num: ";
	cin>>y;
	cout<<endl<<"gimme another num: ";
	cin>>z;
	
	if (x>y && x>z){
		cout<<x<<" is the biggest";
	}
	else if (y>x && y>z){
		cout<<y<<" is the biggest";
	}
	else if (z>x && z>y){
		cout<<z<<" is the biggest";
	}
	else if (x==y && x==z){
		cout<<"all nums are equal";
	}
	
	
	return 0;
}
