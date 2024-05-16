#include <iostream>
using namespace std;

class Test1{
		int a, b;
	public:
		friend class Test2;
		void getab(){
			cout<<"enter two numbers for a and b: "<<endl;
			cin>>a;
			cin>>b;
		}
};
class Test2{
	public:
		void putab(Test1 t1){
			cout<<"a: "<<t1.a<<endl;
			cout<<"b: "<<t1.b<<endl;
		}
};
int main(){
	Test1 t1;
	Test2 t2;
	t1.getab();
	t2.putab(t1);
	getchar();
	
	system("pause>0");
}
