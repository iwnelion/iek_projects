#include <iostream>
using namespace std;
//friend classes

class Test1{
		int a, b;
	public:
		friend class Test2;
		void getab(){
			cout<<"enter a: ";
			cin>>a;
			cout<<"enter b: ";
			cin>>b;
		}
};
class Test2{
	public:
		void printab(Test1 t1){				//container class and its object as params of printab()
			cout<<"a: "<<t1.a<<endl;
			cout<<"b: "<<t1.b;
		}
};
int main(){
	Test1 t1;
	t1.getab();
	Test2 t2;
	t2.printab(t1);							//object of container class as arg for printab()
	
	system("pause>0");
}
