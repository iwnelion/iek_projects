#include <iostream>
using namespace std;

class test_this{
		int a, b;
	public:
		void show(){
			a=10;
			b=20;
			cout<<"object address: "<<this<<endl;		//address
			cout<<"value of a: "<<this->a<<endl;		//10
			cout<<"value of b: "<<this->b<<endl;		//20
		}
};
int main(){
	test_this t;
	t.show();
	system("pause>0");
}
