#include <iostream>
using namespace std;

//class composition
class test1{				//container class
		int a, b;
	public:
		friend class test2;
		void getab(){
			cout<<"enter a:";
			cin>>a;
			cout<<"enter b: ";
			cin>>b;
		}
};
class test2{				//contained class
	public:
		void putab(test1 t1){
			cout<<"a: "<<t1.a<<endl;
			cout<<"b: "<<t1.b<<endl;
		}
};
int main(){
	test1 t1;
	test2 t2;
	t1.getab();
	t2.putab(t1);
	
	system("pause>0");
}
