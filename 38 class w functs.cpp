//NOT WORKING
#include <iostream>
using namespace std;

class test{
	int a,b;


void show(int a, int b){
	this->a=a;			//*(this).a=a
	this->b=b;			//*(this).b=b
}

void display(){
	cout<<"displays using the this pointer"<<endl;
	cout<<"a= "<<this->a<<endl<<"b= "<<this->b<<endl;
	cout<<"displays without using the this pointer pointer"<<endl;
	cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
}
};

int main(){
	test t1;
	t1.shows(10,20);
	t1.display();
	system("pause>0");
}
