#include <iostream>
using namespace std;

class sample{
		static int a, b;
	public:
		static void getData(){
			cout<<"enter two numbers: ";
			cin>>a>>b;
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
};
int sample::a;
int sample::b;

int main(){
	sample::getData();
	//sample s;
	//s.getData();
	
	system("pause>0");
}
