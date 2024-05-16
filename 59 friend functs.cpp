#include <iostream>
using namespace std;

class sample{
		int a,b;
		friend void print(sample);
};
void print(sample s){
	s.a=10;
	s.b=20;
	cout<<"a= "<<s.a<<endl;
	cout<<"b= "<<s.b<<endl;
}
int main(){
	sample s;
	sample s1;
	
	print(s);
	
	cout<<endl;

	print(s1);
	
	system("pause>0");
}
