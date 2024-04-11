#include <iostream>
using namespace std;

class test{
	int a,b;
	public:
		void show(){
			a=10;
			b=20;
			cout<<"displays the values of a and b without this pointer"<<endl;
			cout<<"a= "<<a<<endl<<"b= "<<b<<endl;								//a=10 b=20
			
			cout<<"this pointer displays the memory location of the object"<<endl;
			cout<<"object address: "<<this<<endl;								//0x..
			
			cout<<"displays the values of a and b using this pointer"<<endl;
			cout<<this->a<<endl<<this->b<<endl;									//10 20
		}
};

int main(){
	test t1;
	t1.show();
	system("pause>0");
}
