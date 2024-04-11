#include <iostream>
using namespace std;

class demo1{
	int data1, data2;
	public:
		void display(){
			cout<<"a= "<<data1<<endl;
			cout<<"b= "<<data2<<endl;
		}
		void getValues(int a, int b){
			data1=a;
			data2=b;
		}
};
int main(){
	demo1 obj1;
	obj1.getValues(10,20);
	demo1 obj2=obj1;
	obj2=obj1;
	obj1.display();
	system("pause>0");
}
