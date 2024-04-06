#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main(int argc, char** argv){
	int a=100;
	int b=200;
	
	cout<<"before swap value of a: "<<a<<endl;
	cout<<"before swap value of b: "<<b<<endl<<endl;


swap(&a, &b);
	cout<<"&a: "<<&a<<endl;
	cout<<"&b: "<<&b<<endl<<endl;
	
	cout<<"after swap value of a: "<<a<<endl;
	cout<<"after swap value of b: "<<b<<endl<<endl;
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp=*x;
	cout<<"temp: "<<temp<<endl;
	*x=*y;
	cout<<"*x: "<<*x<<endl;
	*y=temp;
	cout<<"*y: "<<*y<<endl<<endl;
	return;
}
