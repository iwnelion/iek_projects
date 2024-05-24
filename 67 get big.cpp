#include <iostream>
using namespace std;

class test2;
class test1{
		int a;
	public:
		void geta(){
			cout<<"enter a: ";
			cin>>a;
		}
		friend void big(test1, test2);
};
class test2{
		int b;
	public:
		void getb(){
			cout<<"enter b: ";
			cin>>b;
		}
		friend void big(test1, test2);
};
void big(test1 t1, test2 t2){
	if(t1.a>t2.b){
		cout<<"a is bigger than b"<<endl;
	}
	else if(t2.b>t1.a){
		cout<<"b is bigger than a"<<endl;
	}
	else{
		cout<<"a = b"<<endl;
	}
}
int main(){
	test1 t1;
	test2 t2;
	t1.geta();		//reads a
	t2.getb();		//reads b
	big(t1, t2);	//prints big() funct's result
	
	system("pause>0");
}
