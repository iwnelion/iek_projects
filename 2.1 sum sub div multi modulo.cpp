#include <iostream>
using namespace std;
int main(){
	double num1=NULL, num2=NULL, sum=NULL;
	int a,b,modulo;
	cout<<"give me a number: "<<endl;
	cin>>num1;
	cout<<"give me another number: "<<endl;
	cin>>num2;
	sum=num1+num2;
	cout<<"sum: " <<sum<<endl;
	cout<<"subtraction: " << num1-num2<<endl;
	cout<<"division: " <<num1/num2<<endl;
	cout<<"multiplication: " <<num1*num2<<endl;
	
	//modulo: !!ONLY INTs!!
	cout<<"give me two numbers to see their modulo"<<endl;
	cin>>a>>b;
	modulo=a%b;
	cout<<"modulo: "<<modulo<<endl;
	
	/* other way of showing modulo:
	cout<<"modulo: "<<a%b<<endl;
	*/
	
	return 0;
}
