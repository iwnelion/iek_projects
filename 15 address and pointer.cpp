#include <iostream>
using namespace std;

int main(){
	int* k, d;
	
	d=22;
	cout<<"address of d: "<<&d<<endl;
	cout<<"value of d: "<<d<<endl<<endl;			//22
	
	k= &d;
	cout<<"address of pointer k: "<<k<<endl;
	cout<<"address of pointer k: "<<&k<<endl;
	cout<<"content of pointer k: "<<*k<<endl<<endl;	//22
	
	d=11;
	cout<<"address of pointer k: "<<&k<<endl;
	cout<<"address of pointer k: "<<k<<endl;
	cout<<"content of pointer k: "<<*k<<endl<<endl;	//11
	
	*k=2;
	cout<<"address of d: "<<d<<endl;
	cout<<"address of d: "<<&d<<endl;
	cout<<"value of d: "<<d<<endl;					//2
	
	return 0;
}
