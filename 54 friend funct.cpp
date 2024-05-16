#include <iostream>
using namespace std;

class test{
	int a,b;
	friend void print(test);
};
void print(test t){
	t.a=10;
	t.b=20;
	cout<<"a= "<<t.a<<endl;
	cout<<"b= "<<t.b<<endl;
}
int main(){
	test t;
	
	print(t);
	
	system("pause>0");
}
