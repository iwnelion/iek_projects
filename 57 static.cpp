#include <iostream>
using namespace std;

class test{
	public:
		static int a;
		void get(){
			cout<<"a= "<<a<<endl;
		}
};
int test::a=10;
int main(){
	test::a=100;
	cout<<"a= "<<test::a<<endl;		//a= 100
	test t;
	t.get();						//a= 100
	
	system("pause>0");
}
