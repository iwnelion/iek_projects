#include <iostream>
using namespace std;

void myFunction(){
	int* ptr = new int[1000000];
	ptr[2]=10;
	cout<<"hi, i'm ="<<ptr[2];
	//cout<<"hi, i'm ="<<*ptr;
	delete[] ptr;
}

int main(){
	myFunction();
	system("pause>0");
}
