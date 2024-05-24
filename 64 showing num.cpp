#include <iostream>
using namespace std;

class data{
		int k;
	public:
		void set(int x=0){
			k=x;
		}
		void show(){
			cout<<k<<endl;
			cout<<this->k<<endl;
			cout<<(*this).k<<endl;
		}
};
int main(){
	data a, b;
	a.set();
	b.set(25);
	a.show();
	b.show();
	
	system("pause>0");
}
//runs:
//	0
//	0
//	0
//	25
//	25
//	25
