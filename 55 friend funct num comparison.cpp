#include <iostream>
using namespace std;

class test2;
class test1{
		int a;
	public:
		void geta(){
			cout<<"enter a= ";
			cin>>a;
		}
		friend void comparison(test1, test2);
};
class test2{
		int b;
	public:
		void getb(){
			cout<<"enter b= ";
			cin>>b;
		}
		friend void comparison(test1, test2);
};
void comparison(test1 t1, test2 t2){
	if(t1.a>t2.b){
		cout<<"a is greater than b";
	}
	else if(t1.a<t2.b){
		cout<<"a is smaller than b";
	}
	else{
		cout<<"a and b are equal";
	}
}
int main(){
	test1 t1;
	test2 t2;
	t1.geta();
	t2.getb();
	comparison(t1, t2);
	
	system("pause>0");
}
