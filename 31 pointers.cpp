#include <iostream>
using namespace std;

int main(){
	int n=5;
	cout<<"the value of n: "<<n<<" and the address of n: "<<&n<<endl;	//5,0x6..
	
	int* ptr=&n;
	cout<<"the address of ptr: "<<ptr<<endl;							//0x6..
	cout<<"the address of &ptr: "<<&ptr<<endl;							//0x6f...
	cout<<"the value of ptr: "<<*ptr<<endl;								//5
	
	*ptr=10;
	cout<<"*ptr: "<<*ptr<<endl;											//10
	cout<<"the value of n: "<<n<<endl;									//10
	
	int g;
	int* ptr2=&g;
	*ptr2=20;
	cout<<"g: "<<g<<endl;												//20
	cout<<"&ptr: "<<*ptr2<<endl;										//20
	
	system("pause>0");
}
