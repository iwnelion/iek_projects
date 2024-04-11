//DOESN'T WORK
#include <iostream>
using namespace std;

int main(){
	
	int *p;
	float q;
	char *r;
	
	p=new int(10);
	q=new float(1.7);
	r=new char('d');
	
	cout<<"p= "<<p<<endl;
	cout<<"p= "<<&p<<endl;
	cout<<"p= "<<*p<<endl;
	
	cout<<"q= "<<q<<endl;
	cout<<"q= "<<*q<<endl;
	cout<<"q= "<<&q<<endl;
	
	cout<<"r= "<<r<<endl;
	cout<<"r= "<<*r<<endl;
	cout<<"r= "<<&r<<endl;
	
}
