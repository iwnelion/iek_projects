#include <iostream>
using namespace std;

int max(int num1, int num2);		//declare the function *before main() function*

int main(){
	int a;
	int b;
	int ret;
	
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	
	ret=max(a,b);
	cout<<"Max value is: "<<ret;
	return 0;
}

int max(int num1, int num2){		//function returning max number
	int result;
	
	if(num1>num2)
		result=num1;
	else
		result=num2;
	return result;
}
