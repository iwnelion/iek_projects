#include <iostream>
using namespace std;

class test{
	int a, b;
	friend void print(test);
};
void print(test t){			//friend function: the only one that can access the private members
	t.a=10;
	t.b=29;
	cout<<"a: "<<t.a<<endl;
	cout<<"b: "<<t.b<<endl;
}
int main(){
	test t;
	print(t);
	
	system("pause>0");
}
