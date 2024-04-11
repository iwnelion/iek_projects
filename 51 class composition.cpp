#include <iostream>
using namespace std;
//friend class

class Test1{	//container class
	int a, b;
public:
	friend class Test2;				//declaration of the 2nd class as a friend
	void getab(){
		cout<<"enter a: ";
		cin>>a;
		cout<<"enter b: ";
		cin>>b;
	}
};
class Test2{	//contained class
	public:
	void printab(Test1 t1){			//pass the object of the first class into the 2nd class
		cout<<"a= "<<t1.a<<endl;
		cout<<"b= "<<t1.b<<endl;
	}
};
int main(){
	Test1 t1;
	Test2 t2;
	
	t1.getab();
	t2.printab(t1);
	
	system("pause>0");
}
