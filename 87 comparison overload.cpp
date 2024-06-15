#include <iostream>
using namespace std;
//comparing objects

class test{
		int ab;
	public:
		void get(){
			cin>>a;
		}
		void operator == (test t2){
			if(a==t2.a){
				cout<<"objects are equal"<<endl;
			}
			else{
				cout<<"objects are not equal"<<endl;
			}
		}
		void operator > (test t2){
			if(a>t2.a){
				cout<<"object t1 > object t2"<<endl;
			}
		}
		void operator < (test t2){
			if(a<t2.a){
				cout<<"object t1 < object t2"<<endl;
			}
		}
};
int main(){
	test t1, t2;
	cout<<"enter t1 object t2"<<endl;
	t1.get();
	cout<<"enter t2 object t2"<<endl;
	t2.get();
	
	t1==t2;
	t1>t2;
	t1<t2;
	
	system("pause>0");
}
