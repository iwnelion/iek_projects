#include <iostream>
using namespace std;

class Test{
	private:
		int a;
	public:
		void get(){
			cin>>a;
		}
		void compare(Test& t2){
			if(a==t2.a){
				cout<<"the objects are equal";
			}
			else{
				cout<<"the objects are not equal";
			}
		}
};
int main(){
	Test t1, t2;
	cout<<"enter a value for object 1: ";
	t1.get();
	cout<<"enter a value for object 2: ";
	t2.get();
	compare(t1, t2);
	
	return 0;
}
