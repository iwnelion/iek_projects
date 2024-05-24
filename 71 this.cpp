#include <iostream>
using namespace std;

class test2_this{
	public:
		int a, b;
		int show(int a, int b){
			this->a=a;
			this->b=b;
			cout<<"show a value: "<<this->a<<endl;	//10		//can also be written as: (*this).a=a
			cout<<"show b value: "<<this->b<<endl;	//20		//can also be written as: (*this).b=b
		}
		void display(){
			cout<<"value a: "<<a<<endl;				//10
			cout<<"value b: "<<b<<endl;				//20
		}
};
int main(){
	test2_this t;
	t.show(10,20);
	t.display();
	
	return 0;
}
